# Discrete Mathematics and Theory in Lean 4

*By Kevin Sullivan*

This course, developed and tested by Kevin Sullivan at the University of Virginia, is
offered as a possible model for replacing the traditional (with exceptions) second course
for undergraduate computer science (CS) students, namely discrete mathematics and theory
(DMT). The typical course employs mixed formal and informal, often mostly quasi-formal,
paper-and-pencil presentations generally limited to first-order theory and induction over
the natural numbers. These courses sometimes do provide experience with some automated
tooling and demonstrations but they are rarely employed to establish a unifying framework
for the formal, checked, abstract definitions and uses of all of the essential concepts
in a DMT course for CS students.

My judgment tends toward the view that even for many computer science students who go on
to graduate studies, these paper-and-pencil courses in first order theory do not seem to
be achieving their long term student learning objectives. From anecdotal data, it seems the
traditional course doesn't appear to be particularly memorable. Few strong students who
I encounter could answer with justifiable confidence as to whether (0=1 -> 2=3) is true
or false in propositional logic with arithmetic.

It's not the students' faults. The traditional course was great when we didn't have the
science and technology that we do now have. This course uses the Lean 4 environment to present
the formal concepts taught in traditional courses but now presented in full generality.
For example, students in this class formally define properties of binary relations on sets,
such as the property of a relation of being symmetric. In English, it's just, "Given a binary
relation r on a set s, then if for every e and f from s, if (e, f) is in r then so is (f, e).
The best one can manage to assert in first-order logic is that for some particular relation r
it's the case that for every e, f, in s, (e,f) in r implies (f,e) in r." In Lean one says,
for any type, t, any set s of objects of type T, any binary r relation on s, and any values,
e and f in s, then if (e, f) is in r then so is (f, e). Learning to think abstractly is a
major underlying aim of a DMT class.

It isn't just the expressiveness, either. Sets and relations are represented by logical
membership predicates in our formalizations, consistent with Lean's mathlib. Students
thus also learn to reason across definitional abstraction boundaries and to use this skill
to make progress in proof constructions. Another mark of success for a course like this
could be that the extra cost paid up front is more than repaid well within course period.
Getting CS2 undergraduate students to the point where they can construct precisely correct
propositions about generalized properties holding for particular relations, and precisely
correctly argued proofs of them seems like a good indicator of improved learning outcomes
for 21st century computer science students.

So, this course is meant to suggest a possible model to replace traditional CS2 courses in
DMT.  Beyond that, it's being used as the first segment of a current introductory graduate
course. For the broader community is perhaps it'll provide another slightly different path
from step zero into programming and reasoning in Lean 4. A 2-3X speed version of this course,
as the first big unit in a grad course, seems to fit the need.  

The hypothesis for this book draft is thus roughly that switching CS students from courses
based on first-order theory and quasi-formal presentations, to one something more akin to
this one, would (1) better engage students first in their main area of interest: computation,
languages, tools; reinvigorate the treatment of logic and abstract mathematics as essential
foundation for computer scientists; provide students knowledge and skills that are now seeing
rapidly growing industrial demand.

## Course

Any first course in DMT must cover propositional and predicate logic, set theory, and induction.
This course delivers all of the logical and mathematical concepts covered in a traditional course
but now as a body of knowledge entirely formalized in precise, abstract, automated mathematical
languages and notations. It employs the higher-order logic and toolset of Lean 4. It has also been
refined through multiple offerings to pare the required knowledge of Lean to a minimum to keep the
focus on the DMT concepts being expressed.

The solution adopted here included teaching term-language-only proof constructions until near the
end of the course. This choice is tuned to the needs and interests of computer science students, in
particular.

## Paths Forward for Students

From here, advanced courses in several areas are possible at both undergraduate and graduate levels,
including programming language design and implementation, rigorous software engineering, machine
learning, formalization of higher mathematics, and of physics, robotics, and other domains that
rely on sophisticated mathematics and that demand high assurance of safety, security, and other
essential system properties.

## Humility

There are surely issues and opportunities for improvement. If you feel inclined to provide input,
even of the critical variety, please don't hesitate to send it along.

&copy; Kevin Sullivan 2024-2025.
