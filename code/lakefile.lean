import Lake
open Lake DSL

package "DMT1" where
  -- add package configuration options here

lean_lib «DMT1» where
  -- add library configuration options here

require "leanprover-community" / "mathlib"

@[default_target]
lean_exe «dmt1»  where
  root := `Main
