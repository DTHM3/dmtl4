# Truth Tables

<<<<<<< HEAD
=======
<!-- toc -->


>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac
Given expression, *e*, a truth table for *e* is a list
of all 2^n interpretations for *e* with each one paired
with the value of *e* under it. The primary function that
this module defines takes an expression and returns the
list of its output values under each interpretation for
that expressiom. From this information a truth table can
be assembed.

```lean
import DMT1.Lectures.L02_propLogic.formal.interpretation

<<<<<<< HEAD
namespace DMT1.lecture.propLogic.semantics.models
=======
namespace DMT1.Lectures.propLogic.semantics.models
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac
open propLogic.syntax
```

Compute and return the list of Bool values
obtained by evaluating an expression, *e*, under
each interpretation, *i*, in a given list of them.
```lean
def mapEvalExprInterps : Expr → List Interp → List Bool
| _, [] => []
| e, h::t => (⟦e⟧h)::mapEvalExprInterps e t
```

Return the list of Bool values obtaibed by evaluating
an expression, e, over each of its interpretations, in
their natural order.
```lean
def mapEvalExprAllInterps : Expr → List Bool
| e =>  mapEvalExprInterps e (interpsFromExpr e)

-- just another name for this function
def truthTableOutputs := mapEvalExprAllInterps

<<<<<<< HEAD
end DMT1.lecture.propLogic.semantics.models
=======
end DMT1.Lectures.propLogic.semantics.models
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac
```
