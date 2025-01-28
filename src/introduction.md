# Discrete Mathematics and Theory in Lean 4

- [Discrete Mathematics and Theory in Lean 4](#discrete-mathematics-and-theory-in-lean-4)
  - [Preface](#preface)
  - [Overview](#overview)
  - [Paths Forward](#paths-forward)
  - [Humility](#humility)

## Preface

This course is offered as a possible model for replacing the traditional (with many
exceptions) second course for undergraduate computer science (CS) students, namely\
discrete mathematics and theory (DMT).  Such courses generally employ quasi-formal
natural language to present mathematical concepts rather than machine-checked formal
langauge; with coverage limited to first order theory and induction limited to that
over the natural numbers.

Yet we now have exceptionally good tooling for checked formal reason in logics that
are clearly suitable for presenting mathematics with great clarity and precision and
with machine checking not only of syntax but of correctness. It appears to be a good 
time to seriously consider making the switch.

The crucial parameter is in the choice of the foundational theory of mathematics on
which to base the entire course. A common choice has always been first-order set theory.
But what we now know, from decades of researh, is that set theory is problematical
as a foundation for tooling for highly expressive, machine-checked abstract logical,
mathematical, and computational reasoning.

The alternative is type theory. If one takes first-order set theory as the foundation,
types are then represented in those terms, and machines have to deal with structures
from the unwieldy realm of its axioms and reasoning principles. And, if one takes type
theory as the foundation, then one embeds set theory abstractions into it. The huge
gain now for choosing type theory is that it is the winner in many dimensions, which
include impressive and capable tooling at this stage, and the embrace of a significant
specialised subcommunity from across many branches of mathematical research who are
now working to establish state of the art machine-checked mathematical foundations
for their many diverse fields of mathematics. More recently, demand I'm told now far
outstrips the supply of trained Lean programmers, perhaps MS-and-above level or above.

So, this course is meant to suggest a possible model to replace traditional CS2 courses in
DMT.  Beyond that, it's being used as the first segment of a current introductory graduate
course. For the broader community is perhaps it'll provide another slightly different path
from step zero into programming and reasoning in Lean 4. A 2-3X speed version of this course,
as the first big unit in a grad course, seems to fit the need.  This online book will be
posted in pieces over the coures the current semester (as of Spring 2025). The result will
be a formal explication what what at the end solved the constraint: teach everything that
has to be covered, now on type theoretical foundations and using the new gnerations of
tools, without too much distraction from the tooling, and with obvious gains in clarity,
generality of abstractions, correctness, completeness, layeredness (e.g., set theory, as
embedded in (higher-order) predicate logic as that is embedded in the foundational logic.
The win in the availability of software tooling, appropriateness of levels of abstraction,
deep active community makes it plausible to consider throwing the switching. 

The hypothesis for this book draft is thus roughly that switching CS students from courses
based on first-order theory and quasi-formal presentations, to one something more akin to
this, would better engage students in their main area of interest, computation, while giving
them fluency is concepts and tools for which it's clear there's now growing demand up the
stack at some of the most dominant, e.g., cloud computing, companies in the world. Now is a
great time to consider it.

## Overview

Any first course in DMT must cover propositional and predicate logic, set theory, and induction.
This course delivers roughly the logical and mathematical concepts covered in a traditional course,
using standard notations, but now with these amazing capabilities at one's fingertips. Some faculty
and students complain about being distracted by the syntax of Lean. But at the end of the day, Lean
is the logic they should really be learning if they want "in." That said, across multiple evolving
offerings of this course, it has been a challenge to find that complete little sub-fractal of the
vast expanse of Lean in which logical reasoning in type theory is, at bottom, deeply computational.
So, type theory, not first-order set theory.

The solution here rests on a few practices. Some are: to minimize intellectually irrelevant
distrations following from the use of the Lean language and tooling; focus sharly on students'
eventual understanding of logical types and inference rules as precise, polymorphic subroutines
that you compose into programs that compute and foundationally check proofs.

The last big part of the course then uses everything learned about so far to embed the concepts
and notations of set theory in Lean, based on the choice not only to specify but also then to 
representing sets and relations as predicates. Students must develop the intellectual ability
to translate across such abstraction boundaries, while uttering the magic incantation, "by the
definition of ... it will suffice to show ...."

The main concept in this part of the course is that of properties of relations.
As an example of what students enounter in this section, here's our definition
of what it means for *any* binary relation, r, on *any* of set of objects defined
by a type, α, to be symmetric:

def isSymmetric (α : Type) (r : α → α → Prop) := ∀ (a b : α), r a b → r b a

This definition is inexpressible in first-order logic, as it achieves generality
by quantifying over both types and relations (wheres quantifications in FOL are
over the elememnts of given sets only). All one can really express in first order
theory is the assertion that some particular relation, r, is symmetric. Nor does
FOL have any notion of types.

When switching costs are high, the alternative to the incumbent has to be compelling.
There's a strong case that we do now have a compelling alternative to the traditional
approach. Among other things, it appears that there will be demand for people with the
knowledge imparted by this course.

## Paths Forward

From here, advanced courses in several areas are possible at both undergraduate and graduate levels,
including programming language design and implementation, rigorous software engineering, machine
learning, formalization of higher mathematics, and of physics, robotics, and other domains that
rely on sophisticated mathematics and that demand high assurance of safety, security, and other
essential system properties.

## Humility

There are surely issues and opportunities for improvement at all levels of this document, 
from the lexical to the conceptual. If you feel inclined to provide input, even of the more
critical variety, please don't hesitate to send it along.

&copy; Kevin Sullivan 2024-2025.
