from z3 import Solver, Int, Distinct, If, sat

num_classes = 5
num_times = 3
num_rooms = 2
num_professors = 2

# Professor, course id
classes = [(0, "Math101"), (1, "Phys101"), (0, "Math101"), (1, "Phys201"), (1, "Phys202"), ]

time_vars = [Int(f"time_{i}") for i in range(num_classes)]
room_vars = [Int(f"room_{i}") for i in range(num_classes)]

solver = Solver()

for i in range(num_classes):
    solver.add(time_vars[i] >= 0, time_vars[i] < num_times)
    solver.add(room_vars[i] >= 0, room_vars[i] < num_rooms)

for i in range(num_classes):
    for j in range(i + 1, num_classes):
        solver.add(If(time_vars[i] == time_vars[j], room_vars[i] != room_vars[j], True))

for i in range(num_classes):
    for j in range(i + 1, num_classes):
        if classes[i][0] == classes[j][0]:  # Same professor
            solver.add(time_vars[i] != time_vars[j])  # Must not be at the same time

if solver.check() == sat:
    model = solver.model()
    print("Schedule Found:")
    for i in range(num_classes):
        print(f"Class {classes[i][1]} (Prof {classes[i][0]}) -> Time {model[time_vars[i]]}, Room {model[room_vars[i]]}")
else:
    print("No valid schedule found.")
