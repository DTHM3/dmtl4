inductive KC where
| DL
| EB

inductive JC where
| DL
| EB

inductive MC where

inductive KCandJC where
| intro (jc: JC) (kc: KC)

def pf1 : KCandJC := KCandJC.intro JC.DL KC.EB

inductive and (P : Type) (Q : Type) where
| intro (p : P) (q : Q)

def pf2 : and KC JC := and.intro KC.EB JC.DL

#check Prod

def andKCJC : Type := Prod KC JC

def pf3 : andKCJC := Prod.mk KC.EB JC.EB

#check pf3
