/- @@@
# HW 10. More Predicate Logic

We're posting the first set of HW10 problems
here, and will update this document later with
additional exercises in a bit. The problems here
are due before class Tuesday.

## PART I: Negation
@@@ -/


/- @@@
### #1 Double Negation Introduction

You've now seen that the proposition, ¬¬P → P,
is not constructively valid. But what about this
one: Is P → ¬¬P constructively valid? Prove it; or
if you get stuck, explain where any why. If you do
prove it formally, then give a corresponding English
language proof.
@@@ -/

example (P : Prop) : P → ¬¬P :=
fun hP hNP => hNP hP

/-
Suppose P is true,
Assume ¬P is false
Since we assumed P is true, ¬P leads to a contradiction
Thus ¬P cannot be true which means ¬¬P holds
-/

/- @@@
### #2 From a Contradiction Anything Goes

Formally state and then prove that, for any
proposition, *P*, *P → ¬P → 0 = 1*.
@@@ -/
/-
For any prop P, if P holds, assuming ¬P leads to a contradiction and here this contradiction is 0 = 1
-/

example (P: Prop) : P → (¬P → 0 = 1) :=
fun hP hNP => (hNP hP).elim

/- @@@
### #3 Contradictions Are Impossibilities

Suppose P is any proposition. Prove ¬(P ∧ ¬P).
This theorem goes by the name, *no contradiction.*
@@@ -/

def noContradiction : Prop := ∀ (P : Prop), ¬(P ∧ ¬P)

example : noContradiction :=
fun P ⟨hP, hNP⟩ => hNP hP


/- @@@
### #4 The Resolution Inference Rule

There's an inference rule in propositional logic called
*resolution*. It's widely used in automated theorem provers
and satisfiability solvers. Suppose A, B, and P are any
propositions. Then (A ∨ P) → (¬P ∨ B) → A ∨ B is valid.
Prove it formally. Hint: case analysis on P ∨ ¬P.

A. Bind the name, *resolution*, to this proposition.

B. Using *example* syntax, formally prove it's valid

C. Give an English language "proof" precisely explaining
the reasoning encoded in your formal proof, expressed in
fluent mathematical prose.
@@@ -/

def resolution : Prop := ∀ ( A B P : Prop), (A ∨ P) → (¬P ∨ B) → (A ∨ B)

example : resolution :=
fun A B P hAP hNPB =>
  match hAP with
  | Or.inl hA => Or.inl hA
  | Or.inr hP =>
    match hNPB with
    | Or.inl hNP => (hNP hP).elim
    | Or.inr hB => Or.inr hB

/-
There are 2 cases:
  If A is true, A ∨ B is true
  If P is true ¬P ∨ B must be analyszed
    If ¬ P is true, then there is a contradiction
    If B is true then A ∨ B is true
-/

/- @@@
## PART II: Classical Reasoning
@@@ -/

/- @@@
In the main class notes, we met *Classical.em* as the
*axiom of the excluded middle (em)*, which we told Lean
to accept as an axiom. Lean 4 does define it's own *em*,
in the *Classical* namespace, as *Classical.em*. If you
decide to use classical reasoning, you may do so simply
by applying this inference rule.

This is but one example of (1) the absense of certain
commonly assumed axioms from Lean's core logic, but (2)
the ease with which they may be used if desired. These
will include excluded middle, proof by contradition, and
some other axioms you might not have heard of before.
@@@-/

#check Classical.em
-- Classical.em (p : Prop) : p ∨ ¬p

/- @@@
### #1. A Zoo of Axioms

In introducing our own definition of excluded middle
in our notes above, we defined it as an axiom. Lean 4
actually defines it as a theorem, proven using three
other axioms that are not by default included in Lean's
constructive logic. But like *em* they are defined in
Lean's libraries and can be used at will. They are the
axioms of
- choice
- functional extensionality
- propositional extensionality

The fact that excluded middle is a consequence from these
axioms is called *Diaconescu's theorem*. Go to the formal
definitions of each of these axioms, read the documentation
that explains what they mean, and then give a very simple,
concrete example (in English) of reasoning with each one.
@@@ -/

#check Classical.choose
#check funext
#check propext

/- @@@
choose: If there are an infinite number of baskets each of which have at least one apple,
there exists a function that picks exactly one apple from each basket.

funext: There are two functions such that f(x) = x + 4 and g(x) = x + 4, this means that with
funext, f = g as functions.

propext: There are two propositions a = "It is raining" and b = "There is water falling from the sky",
this means that they each imply each other (biimplies) and they are equal. They are the same prop.
@@@ -/


/- @@@
As a final comment, while functional extensionality is often
defined as an (optionally included) axiom in predicate logic
and mathematics, in Lean 4 it's itself actually a theorem, the
proof of which is based on some even more interesting material
on *quotients*. Delving deeper here has to be left to the very
curious reader.
@@@ -/

/- @@@
### #2. Classical Reasoning

We've seen that if you accept excluded middle as an axiom,
you can then prove negation elimination, which is the *key
enabler* of proof by contradiction: to show *P*, first show
that assuming *¬P* creates a contradiction; by *negation
introduction*, that shows *¬¬P*; finally apply negation
elimination to conclude *P*. Lean defines this axiom as
*Classical.byContradiction*, so you never need to define
your own version.
@@@ -/

#check Classical.byContradiction
-- Classical.byContradiction {p : Prop} (h : ¬p → False) : p

/- @@@
Here's a detailed unpacking. Given a proof, *h*, of ¬¬p,
Lean first infers the type, *p*, from the type of *h*, so
you don't have to give the *p* argument explicitly; then
it returns a proof (a value of type) *p*. (Be sure you see
that *p* is the return *type*, and so what is returned by
*byContradiction* is a proof of *p* (a term of type *p*)).

Now note. By convention, the way to enable classical
reasoning in Lean is to open the *Classical* namespace.
That way, the classical inference rules are made visible
and directly usable without the *Classical* qualifier.
@@@ -/

-- Use classical reasoning
open Classical


-- Finish this proof
example : 1 = 1 :=
byContradiction (fun h => absurd rfl h)

/- @@@
### #3. *No-contradiction* by contradiction

Formally prove the principle of no-contradiction
(from Part I, #3 above) using proof by contradiction.
Hint: you may use other classical reasoning axioms if
needed.
@@@ -/


example (p : Prop) : ¬(p ∧ ¬ p) :=
byContradiction fun h =>
  let ⟨hp, hnp⟩ := Classical.not_not.mp h
  hnp hp

/- @@@
Now express this proof in fluent mathematical English,
as if you'd been asked to give this proof in a class
that was not using formal proofs. By sure to indicate
that it's a proof by contradiction. Make it clear that
you know exactly what the formal reasoning steps are.

-- Here
Assume the contradiction which is that (p ∧ ¬ p) is true,
this means there is a p that is true and a ¬p that is true.

This means that p is true and ¬p is true which means that p
is both true and false. This is a contradiction as p cannot
be both true and false.

@@@ -/
