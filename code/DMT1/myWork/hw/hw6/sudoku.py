from z3 import Int, Solver, And, Distinct, sat

def solve_sudoku(grid):
    solver = Solver()
    cells = [[Int(f"x_{r}_{c}") for c in range(9)] for r in range(9)]

    # Add constraints for values to be between 1 and 9
    for r in range(9):
        for c in range(9):
            solver.add(1 <= cells[r][c], cells[r][c] <= 9)

    # Add constraints for predefined grid values
    for r in range(9):
        for c in range(9):
            if grid[r][c] != 0:
                solver.add(cells[r][c] == grid[r][c])

    # Row constraints (each row must have distinct numbers)
    for r in range(9):
        solver.add(Distinct(cells[r]))

    # Column constraints (each column must have distinct numbers)
    for c in range(9):
        solver.add(Distinct([cells[r][c] for r in range(9)]))

    # 3x3 Subgrid constraints
    for block_r in range(3):
        for block_c in range(3):
            subgrid = [
                cells[r][c]
                for r in range(block_r * 3, block_r * 3 + 3)
                for c in range(block_c * 3, block_c * 3 + 3)
            ]
            solver.add(Distinct(subgrid))

    # Solve the puzzle
    if solver.check() == sat:
        model = solver.model()
        return [[model[cells[r][c]].as_long() for c in range(9)] for r in range(9)]
    else:
        return None

# Example Sudoku grid (0 represents empty cells)
sudoku_grid = [
    [5, 3, 0, 0, 7, 0, 0, 0, 0],
    [6, 0, 0, 1, 9, 5, 0, 0, 0],
    [0, 9, 8, 0, 0, 0, 0, 6, 0],
    [8, 0, 0, 0, 6, 0, 0, 0, 3],
    [4, 0, 0, 8, 0, 3, 0, 0, 1],
    [7, 0, 0, 0, 2, 0, 0, 0, 6],
    [0, 6, 0, 0, 0, 0, 2, 8, 0],
    [0, 0, 0, 4, 1, 9, 0, 0, 5],
    [0, 0, 0, 0, 8, 0, 0, 7, 9]
]

solution = solve_sudoku(sudoku_grid)
if solution:
    for row in solution:
        print(row)
else:
    print("No solution found.")
