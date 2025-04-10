<<<<<<< HEAD
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
=======
# Preface

- [Preface](#preface)
  - [Acknowledgements](#acknowledgements)
  - [Disclaimers](#disclaimers)
  - [A Couple of Pillars](#a-couple-of-pillars)
  - [Some Problems](#some-problems)
  - [New Approach](#new-approach)
  - [Design Constraints](#design-constraints)
  - [This Solution](#this-solution)
  - [An Example](#an-example)
  - [Status](#status)
  - [Evaluation](#evaluation)
  - [Use for DMT1](#use-for-dmt1)
  - [Student Paths](#student-paths)
  - [Tool Paths](#tool-paths)
  - [Research Paths](#research-paths)
  - [Humility](#humility)
  - [Invitation](#invitation)

## Acknowledgements

![National Science Foundation Logo](./images/480px-NSF_Official_logo_Med_Res.png "National Science Foundation" =100x)

This course was developed with support provided in part by a research grant from the National Science Foundation, #1909414, SHF: Small: Explicating and Exploiting the Physical Semantics of Code.

## Disclaimers 

Any opinions, findings, and conclusions or recommendations expressed in this material are those of the author(s) and do not necessarily reflect the views of the National Science Foundation.

The views expressed in this article are those of the author(s) and do not necessarily reflect the views, policies, or positions of the University of Virginia.

This work expresses cetain technical juddgments by the author based on observation and experience but not always on outcomes of scientific testing. No IRBs have been needed or sought. No student or other human subjects data is reported here or has been reported outside of official reporting channels. 

## A Couple of Pillars

Computation and systematized reasoning are two great intertwined pillars of computer science. Consequently we have languages for expressing *conputations*, namely *programming* languages, and languages for *reasoning* about propositions over diverse *worlds*. For decades, we in computer science have excelled at teaching computational thinking and the use of programming languages. By contrast, we have done exceptionally poorly in teaching reasoning and the formal languages and thought processes needed to reason formally in practice.

The use of programming langauges is familiar territory even to the earliest computer science students. The very first course in computer science is invariably a course in programming, and implicitly in programming languages. Programming then remains one of the primary areas of emphasis throughout the entire undergraduate curriculum. Students of CS thus today generally graduate with high proficiency in computational thinking and in the use of programming languages that support it.

Recognizing the essential foundational character or reasoning, the *second* course in the undergraduate CS curriculum is typically called something like CS2: Discrete Mathematics and Theory (DMT1). It is in this course that students gain their first, and sadly usually their last, exposure to formal reasoning and languages and systems that support it. Such courses are generally paper-and-pencil affairs covering propositional logic, first-order predicate logic and set theory, and induction (but usually only on natural numbers).

The problem with the ubiquity of such courses are many. First, CS students tend ot find these courses boring, abstract, disconnected from their intrinsic motations to learn about computing, irrelevant to practice, and deeply forgettable.  Anecdotally, most students entering graduate programs in CS appear remember almost nothing from their early DMT courses, and few have ever had to use reasoning langauges and methods after DMT1.

On the demand side, on the other hand, we are now seeing rapidly growing needs for engineers who do actually understand formal reasoning and languages. On the other hand, the supply of such talent is miniscule, due in large part to the failure to train our students in such knowledge and skills. Moreover, this explosion in demand for reasoning skills is happening at the same time we're seeing a significant drop-off in demand for "mere" computational thinking and programming.

The conclusions of the author include the following: (1) Our field has failed to train generations of graduating computer scientists in the thought processes and the formal languages needed to be productive with *reasoning* in theory or industrial practice. (2) The standard DMT1 course is, for far too many students, not a productive or memorable experience, as evinced by the exceptionally poor state of knowledge of most incoming graduate students in computer science (in the author's experience). (3) It is time to replace the standard DMT1 course with something entirely new, different, and far better. (4) It is time to think about re-balancing the entire undergraduate curriculum toward greater emphasis on mathematical abstractions and formal reasoning.

The course presented here is thus offered as a model for an entirely new approach. At the highest level, it teaches all of the core material in any DMT1 course but with all of the context formalized in the reasoning language, Lean 4. In languages like this, supported by wonderful tooling, reasoning is linked to comptuation by the amazing unification known as the the *Curry-Howard Correspondence* (CHC). The CHC holds that formalized deductive reasoning of certains kinds (natural deduction, which is perhaps the core concept in any DMT course) is a form of computing, but not only with the usual data and function types but with now axioms, propositions, and proofs as first-class citizens. 

Lean 4 is so beautifully expressive of such a broad range of mathematical concepts that a significant community of mathematicians have organized around it to drive the development of formalized versions of mathematics across a very broad range of fields. Meanwhile, CS students remain stuck learning a logic (first-order predicate logic and set theory) that is *not* suitable as a foundation for formalized or automated abstract mathemtics. This course, on the other hand, adopts, *type theory*, here as implemented by Lean 4, as a far better choice, even for early CS students.

## Some Problems

That we've arrived at a point where reasoning technology is advancing at extraordinary speed but where are students are by and large entirely unprepared to understand or use it. Of course, for many decades, the demand for programming was voracious, and at the same time cost and difficulty of reasoning were prohibitively high. But now the tables are turned. Generative and related AI promise to reduce demand for programming code while the needs of industry and national security are driving significant increases in demand for formal reasoning. 

This course aims to help address the resulting shortfall in talent by radically replacing the traditional undergraduate DMT1 course with a new one, covering essentiall the same basic content, but now using the wildly successful reasoning and computation language and toolset of Lean 4. The course is scoped for a full undergraduate semester or as the first half of an introductory graduate course in formal languages and reasoning. Big changes in in circumstances make now a great time to consider such a transition in CS pedagogy. They include the following:

- Rapidly increasing industrial demand for formal, machine-supported and machine-checked reasoning about critical properties software-intensive systems that undergird our society
- The emergence of type-theory-based formalisms with exceptional expressiveness and broad applications that have attracted large communities of researchers in mathematics, which gtends to validate the proposition that there's something new and remarkable in them
- The development of superb tooling for using reasoning languages effectively in practice
- The profound intertwining of computation and reasoning afforded by such langauges
- The real possibility that mere routine programming will increasingly be done by "AIs"

## New Approach

The idea is to simultaneously gain a deeper understanding of reasoning while also
seeing it as a form computation, albeit now over reasoning rather than computational
terms. For example, we begin with propositional logic---syntax, semantics, validity,
soundness, etc.--through its standard deep embedding into (the logic of) Lean 4. A
demonstrated strength of Lean 4 is in its enabling communities to express rich theories
in the clear, abstract, generalized terms of the particular domain itself, across a wide
range of domains in graduate- and beyond-level mathematics.

The entire course is set up this way. Predicate logic is presented through its standard
shallow embedding in Lean 4. First-order logic is described as a special case. Set theory
is built directly on predicate logic. Etc.

This course can then express generalized mathematical concepts, such as the property of
a relation of being reflexive (or whatever). In a first-order course, you can formally
express what it means for a particular binary relation, r, to be "reflexive." That's ok.
But one really hopes the student will acquire is an understanding of the property itself:
the property of any binary relation, r, on any set, s, of being reflexive. This generalized
concept can then be *applied* to any particular relation to speak of its being reflexive,
or not. The first-order theory of the traditional DMT1 course isn't expressive enough to
represent generalized properties of higher-order things, such as relations, functions, or
types. Lean is not much harder to learn and is really a better language for expressing
and working with core DMT1 concepts. It's really better to learn from the outset to be
able to say things like this: reflexivity is a property of *any* binary relation on *any*
set of objects of *any* type. None of those *anys* can be said in first-order logic as one
cannot quantify over relations, sets, or types.

It's not just a nicety, either, to have *reflexive* as a predicate on any binary
relation on any set of terms of any type. It means that this predicate can be applied
to any particular relation so as to produce the proposition that it is reflexive. The
application of predicates to particulars is ubiquitous in formal reasoning.  

Another principle is that all of the main concepts taught in the traditional course must
be taught in the new course: propositional logic, predicate logic, sets, induction. This
course covers the same topics but in different ways. 

But it's not only topic coverage. Notations matter. Embeddings of mathematical concepts 
in Lean often come with the standard notations of the field as a paper-and-pencil affair. 
Differences in surface syntax in having to read and write in set theory as embedded in
Lean and as learned using paper and pencil are minor, while the gain in capabilities at
one's fingertips is substantial. They include automated syntax and proof checking, among
other things. Having a superb supportive community of experts is a tremendous human asset.

## Design Constraints

This course was developed under a few key constraints:

- Continue to focus on the basic content of the traditional course: logic, sets, induction
- Avoid assiduously overwhelming early students with the complexity of modern proof assistants
- Formalize every concept in the uniform logic of the proof assistant using conventional notations
- Ensure that first-order theory is a special case of the more expressive theory of the course
- Provide students with a deeply computational perspective, from great tooling to Curry-Howard
  
## This Solution

The solution, now tested in practice (but not scientifically evaluated yet), has a few
key elements:

- Make standard embeddings propositional and predicate logic in Lean a path to Lean 4 itself
- Begin with a deep embedding of propositional logic syntax, semantics, and validity in Lean 4
- Thoroughly cover all of the axioms for reasoning in predicate logic as its embedded in Lean 4
- Build all of the material on set theory (sets, relations, properties) on top of this logic
- Present induction first as a way to build functions and only later as a way to build proofs
- Minimize covereage of complex or inessential Lean; e.g., tactics are omitted until the end

## An Example

Here are two simple examples of what students might see in this course.

The first  illustrates how students would write propositional logic expressions.

- def andAssociative  := ((P ∧ Q) ∧ R) ↔ (P ∧ (Q ∧ R))
- def equivalence     := (P ↔ Q) ↔ ((P ⇒ Q) ∧ (Q ⇒ P))

This one, second, specifies the generalized property of a relation of being well founded.

- def isWellFounded  {α  β : Type} : Rel α α → Prop := fun r => ∀ (s : Set α), s ≠ ∅ → ∃ m, (m ∈ s ∧ ¬∃ n ∈ s, r n m)

By the end of the course students should be able to read and explain what this definition 
means, and *apply* it to particulars in the process of making richer claims about them.
The undergraduate course does emphasize ongoing practice in the skills of translating between 
formal and *natural* natural language.

## Status

The status of this online book is *drafted work in progress*. The material through the second
chapter on induction reflects the content, edited, from my Fall 2024 undergraduate class offering.
It's also the first part of an introductory graduate *software logic* course that I'm teaching
this Spring of 2025. There are a few concept/chapter placeholders at the end for material not previously taught at all, including formalized reasoning about induction through well founded relations. (Students have learned and demonstrated the abilty to reason formally about properties of relations, though, and should be able to handle proofs involving this property without much more difficulty than they've already done involving other properties of relations). The entire document still needs a good editing. Some parts are still rough. A most notably rough one is the first, on talking about languages.

## Evaluation

It is a challenge toto teach this course using Lean 4 for significant net advantage over more traditional courses. The hard problem, now cracked I hope, was reduce the added burden imposed by conceptually irrelevant aspects of Lean sufficiently to not impair students' capacity to learn the underlying concepts. At this point I believe that we can teach DMT1 using this kind of technology to the significant net advantage of our students, while covering all the essential concepts of any DMT1 class without undue haste.

## Use for DMT1

A conservative offering could cover chapters on propositional logic, arithmetic, and induction for arithmetic function definitions, then skip theory extensions and SMT, and proceed to predicate logic, set theory, before a final return to induction generalized to proof construction. A possible capstone would be on termination via well founded relations, as they now have full command of the concept of properties of relations. I plan to reduce coverage of SMT by 80% on the next offering to have more time for this stuff at the end.

## Student Paths

From here, advanced courses in several areas are possible at both undergraduate and graduate
levels: cyberphysical systems, programming language design and implementation, verification,
provable security, machine learning (e.g., see AlphaProof), robotics, quantum computing, etc.

## Tool Paths

Working knowledge of the concepts of this course will provide students with easy access to
understanding the concepts underpinning and the use of a broad range reasoning technologies. Dafny and Z3 are good next steps and there are surely others. A small enhancement to this course would be a much shorter "highlight" on Z3 then another on one Dafny, just to show that there's a whole new world of reasoning systems out there.

## Research Paths

- Natural experiments potentially accessible (IRBs)
- Constructive mathematical concept inventories

## Humility

There are surely problems and opportunities for improvement, in concept and presentation, here. Reach out if you wish.

## Invitation

If you with to discuss, or alert us privately to possible issues, please do email me with DMTL4 in the subject line. It's my last name at Virginia, Edu.
>>>>>>> fb83919c4dbac8f107d80ee8a786256d70452bac

&copy; Kevin Sullivan 2024-2025.
