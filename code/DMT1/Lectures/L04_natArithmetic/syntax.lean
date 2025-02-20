<<<<<<< HEAD
namespace DMT1.Lectures.L04_natArithmetic.syntax
=======
namespace DMT1.Lectures.natArithmetic.syntax
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac

/- @@@
# Syntax of Arithmetic Expressions

We define a syntax for arithmetic and relational
expressions in almost exactly the same way as we
did for propositional logic. Here, however, we will
have both arithmetic and relational expressions.
The former will evaluate to natural numbers, when
we get to the semantics (e.g., 3 + 2), while the
latter will evaluate to Booleans (e.g., 3 < 2).
<<<<<<< HEAD
=======

<!-- toc -->


>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac
@@@ -/

/- @@@
## Variables

We introduce variables indexed by natural numbers
just as we did for propositional logic expressions.
Variable expressions in arithmetic and relational
expressions will be constructed on these variable
terms, just as we did for propositional logic.
@@@ -/
structure Var : Type where
(index: Nat)
<<<<<<< HEAD
=======
deriving Repr
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac


/- @@@

## Operators

We now define syntax for unary and binary arithmetic
operator expressions, that we will (in semantics.lean)
interpret as evaluating to natural numbers, as well as
unary and binary arithemtic predicate operators that
we will evaluated as reducing to Boolean values.

<<<<<<< HEAD
### Unary Arithemtic Operators
=======
### Unary
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac

We define syntactic symbols for the unary operators
of our emerging little language for arithmetic. Just
as we did for propositional logic, we will give them
fixed interpretations as functions in the semantic
domain of actual natural number arithmetic: namely,
as meaning increment, decrement, and factorial. The
functions themselves are defined in *domain.lean*.
@@@ -/

inductive UnOp : Type where
| inc
| dec
| fac
<<<<<<< HEAD


/- @@@
### Binary Arithemtic Operators
=======
deriving Repr


/- @@@
### Binary
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac

We define binary operator symbols here, that we will
eventually interpret as having corresponding arithemtic
functions as fixed meanings. We will skip division at
this point, as it's a more complicated to implement
than addition, subtraction, and multiplication.
@@@ -/

inductive BinOp : Type where
| add
| sub
| mul
<<<<<<< HEAD

/- @@@
### Binary Arithmetic Predicate Operators
=======
deriving Repr

/- @@@
## Predicates

### Unary

Next we define syntax for unary predicate operator symbols.
Here we define just one, namely isZero. We will interpret
it as returning a Boolean indicating whether the expression
to which it's applied evaluates to zero or not.
@@@ -/

inductive UnPredOp : Type
| isZero
deriving Repr

/- @@@@
### Binary
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac

Next we define a set of syntactic symbols (names)
for basic *natural number arithmetic relational*
operators. We will interpret expressions of this
kind as evaluating not to natural numbers but to
Boolean values that indicate whether a given pair
of numbers satisfies a particular predicate, e.g.,
that the first argument is equal to, greater than,
etc., the second.
@@@ -/

inductive BinPredOp : Type
| eq
| le
| lt
| ge
| gt
<<<<<<< HEAD

/- @@@
### Unary Arithmetic Predicate Operators

Next we define syntax for unary predicate operator symbols.
Here we define just one, namely isZero. We will interpret
it as returning a Boolean indicating whether the expression
to which it's applied evaluates to zero or not.
@@@ -/

inductive UnPredOp : Type
| isZero



/- @@@
## Arithmetic and Predicated Expressions
=======
deriving Repr


inductive TernPredOp : Type
-- TODO: Nothing here for now. Could be add relation
deriving Repr

/- @@@
## Operator Expressions
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac

The syntax of arithemtic expressions is nearly
isomorphic to (has the same structure) as that
expressions in predicate logic. There is just one
difference here: literal expressions hold natural
number values rather than Booleans, so taht they
can be evaluated as having fixed numeric rather
than fixed Boolean values.
@@@ -/

<<<<<<< HEAD
inductive ArithExpr : Type where
| lit (from_nat : Nat) : ArithExpr
| var (from_var : Var)
| unOp (op : UnOp) (e : ArithExpr)
| binOp (op : BinOp) (e1 e2 : ArithExpr)


/- @@@
=======
inductive OpExpr : Type where
| lit (from_nat : Nat) : OpExpr
| var (from_var : Var)
| unOp (op : UnOp) (e : OpExpr)
| binOp (op : BinOp) (e1 e2 : OpExpr)
deriving Repr

/- @@@
### Predicate Expressions

>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac
Arithemtic Predicate expressions are similarly
specified as an inductively defined type, values
of which represent (true/false) unary and binary
*predicates* on natural numbers. (Can you think
of a sensible example of a ternary predicate?)
@@@ -/

inductive PredExpr : Type where
<<<<<<< HEAD
| unOp (op : UnPredOp) (e : ArithExpr)
| binOp (op : BinPredOp) (e1 e2 : ArithExpr)

=======
| unOp (op : UnPredOp) (e : OpExpr)
| binOp (op : BinPredOp) (e1 e2 : OpExpr)
| ternOp (op : TernPredOp) (e1 e2 e3 : OpExpr)
deriving Repr
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac

/- @@@
We define (non-standard notations) to construct variable
terms from natural numbers and variable expression terms
from variable terms, as we did for propositional logic.
@@@ -/
<<<<<<< HEAD
notation:max " { " v " } " => ArithExpr.var v
notation:max " [ " n " ] " => ArithExpr.lit n
=======
notation:max " { " v " } " => OpExpr.var v
notation:max " [ " n " ] " => OpExpr.lit n
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac


/- @@@
Arithmetic operators are generally defined as left associative.
The precedences specified here also reflect the usual rules for
"order of operations" in arithmetic.
@@@ -/
<<<<<<< HEAD
notation:max e " ! " => ArithExpr.unOp UnOp.fac e
infixl:65 " + " => ArithExpr.binOp BinOp.add
infixl:65 " - " => ArithExpr.binOp BinOp.sub
infixl:70 " * " => ArithExpr.binOp BinOp.mul

=======
notation:max e " ! " => OpExpr.unOp UnOp.fac e
infixl:65 " + " => OpExpr.binOp BinOp.add
infixl:65 " - " => OpExpr.binOp BinOp.sub
infixl:70 " * " => OpExpr.binOp BinOp.mul
-- TODO: ternOp notation?
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac

/- @@@
We also specify concrete syntax for the usual binary
predicates (aka relational operators) in arithmetic.
@@@ -/

<<<<<<< HEAD
infix:50 " = " => PredExpr.mk BinPredOp.eq
infix:50 " ≤ " => PredExpr.mk BinPredOp.le
infix:50 " < " => PredExpr.mk BinPredOp.lt
infix:50 " ≥ " => PredExpr.mk BinPredOp.ge
infix:50 " > " => PredExpr.mk BinPredOp.gt

end DMT1.Lectures.L04_natArithmetic.syntax
=======
#check PredExpr.binOp BinPredOp.eq

notation:50 x " == " y => PredExpr.binOp BinPredOp.eq x y
notation:50 x " ≤ " y => PredExpr.binOp BinPredOp.le x y
notation:50 x " < " y => PredExpr.binOp BinPredOp.lt x y
notation:50 x " ≥ " y => PredExpr.binOp BinPredOp.ge x y
notation:50 x " > " y => PredExpr.binOp BinPredOp.gt x y

end DMT1.Lectures.natArithmetic.syntax
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac
