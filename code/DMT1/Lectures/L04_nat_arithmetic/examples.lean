import DMT1.Lectures.L04_nat_arithmetic.arithLang

namespace DMT1.Lectures.L04_nat_arithmetic.arithLang.examples

open DMT1.Lectures.nat_arithmetic.arithLang

/- @@@
We give you three variables expressions to work with and
two different interpretations.
@@@ -/

-- variable expressions
def X := { ⟨ 0 ⟩ }
def Y := { ⟨ 1 ⟩ }
def Z := { ⟨ 2 ⟩ }

def interp_0 (_ : Var) := 0  -- every variable has value 0
def interp_1 : Var → Nat     -- variables have specified values
| Var.mk 0 => 2          -- X := 2
| Var.mk 1 => 3          -- Y := 3
| Var.mk 2 => 0          -- Z := 0
| Var.mk 3 => 4          -- N := 4
| Var.mk 4 => 6          -- M := 6
| Var.mk 5 => 3          -- P := 3
| _ => 0                      -- any other variable := 0

-- We can now evaluate the value of some arithmetic expressions
#eval! eval (Expr.lit 3) interp_0
#eval! eval {3} interp_0     -- expect 3
#eval! eval {3} interp_1     -- expect 3
#eval! eval ({5}!) interp_0  -- expect 120
#eval! eval X interp_0       -- expect 0
#eval eval X interp_1        -- expect 2
#eval eval Y interp_1        -- expect 3
#eval eval Z interp_1        -- expect 0

/- @@@
But these evaluations are not producing the mathematically
correct answers.
@@@ -/

#eval eval (X + Y) interp_1    -- expect 5
#eval eval (X * Y) interp_1    -- expect 6
#eval eval (Y - {1}) interp_1  -- expect 2   -- correction here

-- Extra credit: Make this work, too
#eval eval (Y !) interp_1      -- expect 6
/- @@@
Note that we have to put that space between X and !.
If we write X!, Lean interprets that as a single name
and interprets it as an undefined name.
@@@ -/

end DMT1.Lectures.L04_nat_arithmetic.arithLang.examples
