```lean
namespace DMT1.natArithmetic
```

# Arithmetic and Induction Principles

```lean
<!-- toc -->
-/
```

## Nat: A Recursive Type

Everyone here is familar with natural number arithmetic.

It comprises:

- the *countably infinite* set of natural numbers (whole numbers from zero up)
- arithmetic operators taking and returning natural numbers (such as increment and add)
- relational operators taking natural numbers and returning Bool (e.g., "n less than m")
- *induction axiom(s)*
  - to construct functions that answer correctly for each of infinite possible arguments
  - to construct proofs (if it's true) that *all* natural numbers have a specified property

So how do you define a type with an infinite number of possible terms?
(values)? This is what's needed to represent the infinite set of all
natural numbers as a *type*. And how do you define a function capable of
answering correctly for *all* values of this type? Certainly one can
neither list all values as constructors in the type definition, nor is
it feasible to do a
case analysis on every possible input value (as, example, we've done for Bool arguments,
where there are only two values to consider)?

The answer to these questions lies in the concept of inductive definitions
of types and the application of *induction axioms* to construct functions
from simpler values. For Nat, they are (1) the correct answer for zero, and
(2) a function that if given (a) any *n' : Nat*, and (b) the correct answer
for *n'*, constructs and returns the correct answer for *n' + 1*. Let's see
how these ideas, which are very general play out for the Nat type.

## Inductive De

The answer in both cases is to apply a principle of valid reasoning called
*induction*. It starts with the inductive definition of *Nat* (Lean's type
for the natural numbers), using the general idea that if you have (1) some
starting value of this type (let's call it *zero*) and (2) a function (call
it succ, for *successor*) that takes any Nat value as an argument and uses
it to construct and return a Nat value representing the next larger natural
number, then (3) you can construct a representation of any number at all.

Here's the definition of the Nat type from Lean's *prelude* library, which
is imported by default (minus the associated documentation strings).

inductive Nat where
  | zero : Nat
  | succ (n : Nat) : Nat

That's it. The crucial thing to notice is that the *succ* constructor
take a Nat value, let's call it n', and constructs the term *(succ n')*
which is precisely the term that we take to represent *n' + 1*. So if
one wishes to construct a representation of, say, the natural number,
*3*, then there's a procerss: start with *zero* and apply *succ* to it
three times. Here's what it looks like in real life!

```lean
def three : Nat := Nat.succ (Nat.succ (Nat.succ Nat.zero))
#reduce three   -- Lean has built-in notation so it prints "3"
```

Using it, we go on to define a small library of
basic arithmetic operators (addition, subtraction,
etc.) and predicate functions (less than or equal,
isEq0, and so on).

Our dive into natural number arithmetic, and the
language we use to work with it, provides you with
a second major example of a discrete structure: the
natural numbers and its associated operators (both
arithemtic and relational).

The central new idea in this exploration, beyond
what we saw in propositional logic, is a solution
to representing types of objects where there are
infinitely many of them. There is an infinity of
natural numbers (mathematical ideal abstraction).
We thus need a type with an infinity of values to
*represent* and infinity of natural numbers, then
we need a way to *finitely* specify functions that
can provide correct answers for an infinite number
of possible argument values. It cannot be by just
enumerating all the answers. There are too many.


Rather, it's by building answers for larger inputs
from answers from smaller inputs, starting from a
*smallest* (base) value and a given answer for it.
That's induction. It's akin to filling in a table
from previous entries, starting from given initial
ones, until you reach the answer you want. The very
cool thing about induction is that it relies on an
axiom that asserts that its valid to conclude that
you can return an answer for any input if you have
two smaller capabilities: to return an answer for
the base case, and, given any n' and an answer for
n' (from the just previous entry in the table), to
return an answer for n = (n' + 1). The axiom says
that you can jump from these two parts to the whole
function that you need.

It starts with the inductive definition of the set
of Nat terms, which we want to correspond exactly with
the natural numbers. Our representation is basically
*unary:* start with zero then put as many "succ" marks
in front of it as the number you want to represent. So,
for example, Nat.succ (Nat.succ Nat.Zero) represents 2.

inductive Nat : Type
| zero : Nat
| succ (n' : Nat) : Nat

## Operations

Next we look at unary and binary operations. We represent
the mathematical abstractions as functions in Lean that
both consume (take as argments) and construct and return
values of type Nat.

### Unary Operations

```lean
-- identity function; two different ways to write it in Lean
def id : Nat → Nat
| n => n

-- fyi: you can move arguments *before* the : and bind names there
def id' (n : Nat) : Nat := n    -- the name n is bound, so can be used

-- increment (add one) function
def inc : Nat → Nat
| n => n + 1       -- n + 1 is notation that "desugars" to "Nat.succ n"

-- again moving argument before colon; very same function
def inc' (n : Nat) := n + 1

-- predecessor function
-- if argument, call it n, is 0, return 0,
-- otherwise match n as (n' + 1) and return n'
def pred : Nat → Nat
| 0 => 0        -- Nat.zero
| n' + 1 => n'  -- Nat.succ n'

-- decrement (just another name for predcessor)
def dec : Nat → Nat := pred

-- factorial
-- cases define *base* and *step* values; induction takes care of the rest
def fac : Nat → Nat
| 0 => 1
| (n' + 1) => (n' + 1) * fac n'
```


### Binary Operations

The preceding operations were unary, each taking one natural
number. The following definitions specify the standar binary
arithmetic operations. Key ideas: (1) in general you need to
pattern match on both arguments to distinguish key subsets of
combinations of values to distinguish.

```lean
def add : Nat → Nat → Nat           -- case analysis on m only
| n, 0 => n                         -- m = 0
| n, (m' + 1) => (add n m') + 1     -- m = (m' + 1)


def sub : Nat → Nat → Nat           -- case analysis on n and m
| 0, _ => 0                         -- 0 on left is 0
| n, 0 => n                         -- 0 on right is n
| (n' + 1), (m' + 1) => sub n' m'   -- else return answer for n' m'

def mul : Nat → Nat → Nat           -- case analysis on second arg m
| _, 0 => 0                         -- if it's zero, answer is zero (we want to specify multiplication!)
| n, (m' + 1) => add n (mul n m')   -- otherwise add n to answer for n and m' = m - 1

def exp : Nat → Nat → Nat           -- you figure it out
| _, 0 => 1
| n, (m' + 1) => n * exp n m'
```

## Relations via Predicate Functions

### Unary Relations

The idea of a unary relation is a bit odd, but it makes
sense if you think of it as a defined by a function from
*one* value (unary) of a give type to Bool. A function of
this kind could, for example, tell you whether any given
argument is even, or prime, or a perfect square. You can
pick the *property* of natural numbers you want. You can
then often *specify* it as a predicate function, one that
returns a Boolean yes/no answer, just as we're doing here.

```lean
-- An interesting unary property is "n is equal to zero."
-- As a predicate function: give it n; it answers yes/no.

def isEq0 : Nat → Bool    -- by case analysis on n
| 0 => true               -- true for 0
| _ => false              -- false otherwise


-- what predicate does this predicate function "decide"?
def poof : Nat → Bool
| 0 => true
| 1 => false
| n'' + 2 => poof n''

-- Haha: is n *even*, does n have the property of being even?
def isEven : Nat → Bool := poof
```


### Binary Relations

Carefully study the case analysis and compare it with
that for the equality relation (eq).

```lean
def le : Nat → Nat → Bool
| 0, _ => true
| (_ + 1), 0 => false
| (n' + 1), (m' + 1) => le n' m'

def gt : Nat → Nat → Bool
| n, m => !le n m


-- Study the case analysis and compare with le
def eq : Nat → Nat → Bool
| 0, 0 => true
| 0, (_ + 1) => false
| (_ + 1), 0 => false
| (n'+1), (m'+1) => eq n' m'

def lt : Nat → Nat → Bool
| n, m => le n m && !(eq n m)

def ge : Nat → Nat → Bool
| n, m => gt n m || eq n m

end DMT1.natArithmetic
```

## The Natural Numbers in Lean4

Lean provides a broad array of functions, standard notation,
and other mathematical-logic content for natural numbers when
they are represented as terns of type Nat.

We could continue to define our own notations and so forth,
but we're far better off just using the Nat type and all of
its associated machinery in Lean4. From now on, you can just
write arithmetic as you usually would and it'll all work as
you expect. Here are some basic expressions, using Lean4 and
its mathlib.

```lean
-- We're back to using Lean's definitions
```

Lean provides all of the usual arithmetic operations.
In abstract syntax, they're Nat.add (the add function
defined in the Nat namespace), Nat.mul, Nat.sub, etc.
Lean also provides standard notations for all of the
usual arithmetic operators
```lean
#eval 4 + 5 * 6   -- evaluated as 4 + (5 * 6) due to precedence

#check Nat.add 4 5 * 6

#eval 2^10        -- remember this forever: 2^10 is about 1000

-- relations
#eval 4 ≤ 5
#eval 5 ≤ 5
#eval 6 ≤ 5
```

Now that we have the domain of natural number arithmetic set up,
it's time to turn to building a new *expression language* of our
own as a second example of a formal language with a syntax and an
operational semantics (an expression evaluation function). We'll
borrow hevily from our specification of the syntax and semantics
of propositinal logic. Instead of Boolean variables expressions,
we'll have natural number-valued variable expressions. Instead of
Boolean literals, we'll have Nat literal expressions. Instead of
syntactic expressions with ∧ and ∨ symbols, the operators will be
the likes of +, -, *.
