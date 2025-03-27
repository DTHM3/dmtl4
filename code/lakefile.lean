import Lake
open Lake DSL

package «DMT1» where
  -- Package-level configuration (e.g., more Lean flags) can go here

lean_lib «DMT1» where
  -- Library-specific build options (if needed)

require mathlib from git
  "https://github.com/leanprover-community/mathlib4" @ "master"

@[default_target]
lean_exe «dmt1» where
  root := `Main
