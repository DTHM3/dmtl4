```lean
/-!
# Boolean Algebra

<!-- toc -->

The semantic domain in propositional logic is
Boolean algebra. An algebra, such as Boolean algebra,
generally involves one or several kinds of objects,
operations to construct objects of these kinds, and
operations that use objects of these kinds to derive
other objects/values. For example, addition uses two
Nat values to construct a third, the result.

Boolean algbra includes
- a type of Boolean values: true, false
- unary and binary Bool-consuming operators

Lean already provides most of the elements  of Boolean
algebra that we need to serve as a semantic domain for our
definition of propositional logic: the Bool type and the
most commonly used Booolean operators as functions.

The two elements we'll need that Lean doesn't define
natively are definitions of *implies* and *equivalentTo*.
-/
namespace DMT1.Lectures.propLogic.semantics.domain

#eval match false with | true => "T" | false => "F"
#eval match true  with | true => "T" | false => "F"

-- Here's a function desugared form
def TorF' : Bool → String :=
fun b => match b with
| true  => "T"
| false => "F"

-- The notation we've been using
def TorF : Bool → String
| true  => "T"
| false => "F"

#eval TorF' true  -- expect "T"
#eval TorF false  -- expect "F"

/-
#### What is Boolean Algebra

Boolean algbra has
- the type, Boolean, with two values: true, false
- a type, var, for propositional logic variables
- types for unary and binary syntax-composing operators
  - the only unary operator we define is *not*
  - our binary operators are *and*, *or*, *imp*, etc.
  - each composes larger *expressions* from smaller ones
- an expression evaluation procedure
  - convert literal expressions to corresponding Booleans
  - convert variable v to Bool by applying interpretation
  - recursive expressions:
    - convert subexpressions to Bools recursively
    - combine resulting Bools using right Boolean function
    - example: in "P ∧ Q", ∧ is interpreted as Boolean &&


#### Lean's Library for Boolean Algebra

The standard Lean library defines Boolean functions
commonly used in programming (and, or, not, etc). But
it doesn't define all the ones we need, including the
likes of implies and iff. In other words, Lean doesn't
give us a complete enough specification of the semantic
domain of Boolean algebra. So in this file, we'll just
define the rest of what we need. For now, that means
binary Boolean functions for *implies* and *iff*.


For now, all we need to do is to have definitions of
functions that implement the truth tables of the Boolean
→ and ↔ operators. Each function, taking two Boolean
arguments, is defined "by cases", of which there are
four. In other words, we're specifying truth tables.
-/

-- Implication
def imp : Bool → Bool → Bool
| true, true => true
| true, false => false
| false, true => true
| false, false => true
```


First: *(P → Q) → (Q → P) → (P ↔ Q)*.
Then, *(P ↔ Q) → P → Q*
and *(P ↔ Q) → Q → P*

```lean
-- Equivalence (bi-conditional, if and only if)
def iff : Bool → Bool → Bool
| true, true => true
| false, false => true
| _, _ => false

-- Problem #1 (combinatorics): How many binary Boolean functions are there?
-- Problem #2 (Boolean algenra): Write a specification of the exclusive or function (xor)

<<<<<<< HEAD
end DMT1.lecture.propLogic.semantics.domain
=======
end DMT1.Lectures.propLogic.semantics.domain
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac
```
