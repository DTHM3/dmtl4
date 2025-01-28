// Lean compiler output
// Module: DMT1.MyWork.hw3.domain
// Imports: Init
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
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_TorF_x27(uint8_t);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_imp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_TorF_x27___boxed(lean_object*);
static lean_object* l_DMT1_hw_hw3_domain_TorF_x27___closed__2;
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_iff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_TorF(uint8_t);
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_domain_iff(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_TorF___boxed(lean_object*);
static lean_object* l_DMT1_hw_hw3_domain_TorF_x27___closed__1;
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_domain_imp(uint8_t, uint8_t);
static lean_object* _init_l_DMT1_hw_hw3_domain_TorF_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("F", 1, 1);
return x_1;
}
}
static lean_object* _init_l_DMT1_hw_hw3_domain_TorF_x27___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("T", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_TorF_x27(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l_DMT1_hw_hw3_domain_TorF_x27___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_DMT1_hw_hw3_domain_TorF_x27___closed__2;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_TorF_x27___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_DMT1_hw_hw3_domain_TorF_x27(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_TorF(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l_DMT1_hw_hw3_domain_TorF_x27___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_DMT1_hw_hw3_domain_TorF_x27___closed__2;
return x_3;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_TorF___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_DMT1_hw_hw3_domain_TorF(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_domain_imp(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_imp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_DMT1_hw_hw3_domain_imp(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_domain_iff(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_domain_iff___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_DMT1_hw_hw3_domain_iff(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DMT1_hw_hw3_domain(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_DMT1_hw_hw3_domain_TorF_x27___closed__1 = _init_l_DMT1_hw_hw3_domain_TorF_x27___closed__1();
lean_mark_persistent(l_DMT1_hw_hw3_domain_TorF_x27___closed__1);
l_DMT1_hw_hw3_domain_TorF_x27___closed__2 = _init_l_DMT1_hw_hw3_domain_TorF_x27___closed__2();
lean_mark_persistent(l_DMT1_hw_hw3_domain_TorF_x27___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
