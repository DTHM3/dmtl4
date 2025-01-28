// Lean compiler output
// Module: DMT1.Lectures.L03_modelTheory.truthTable
// Imports: Init DMT1.Lectures.L02_propLogic.formal.interpretation
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_semantics_models_mapEvalExprAllInterps(lean_object*);
lean_object* l_DMT1_lecture_propLogic_semantics_eval(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_semantics_models_truthTableOutputs(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_semantics_models_mapEvalExprInterps(lean_object*, lean_object*);
lean_object* l_DMT1_lecture_propLogic_semantics_interpsFromExpr(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_semantics_models_mapEvalExprInterps(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_DMT1_lecture_propLogic_semantics_eval(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_DMT1_lecture_propLogic_semantics_models_mapEvalExprInterps(x_1, x_6);
x_10 = lean_box(x_8);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_10);
return x_2;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_2);
lean_inc(x_1);
x_13 = l_DMT1_lecture_propLogic_semantics_eval(x_1, x_11);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
x_15 = l_DMT1_lecture_propLogic_semantics_models_mapEvalExprInterps(x_1, x_12);
x_16 = lean_box(x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_semantics_models_mapEvalExprAllInterps(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_DMT1_lecture_propLogic_semantics_interpsFromExpr(x_1);
x_3 = l_DMT1_lecture_propLogic_semantics_models_mapEvalExprInterps(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_lecture_propLogic_semantics_models_truthTableOutputs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DMT1_lecture_propLogic_semantics_models_mapEvalExprAllInterps(x_1);
return x_2;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_DMT1_Lectures_L02__propLogic_formal_interpretation(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DMT1_Lectures_L03__modelTheory_truthTable(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_DMT1_Lectures_L02__propLogic_formal_interpretation(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
