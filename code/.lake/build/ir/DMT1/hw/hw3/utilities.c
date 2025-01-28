// Lean compiler output
// Module: DMT1.MyWork.hw3.utilities
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
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_shiftRight___boxed(lean_object*);
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_utilities_reduce__or(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_zeroPadListLeft___boxed(lean_object*, lean_object*);
static lean_object* l_DMT1_hw_hw3_utilities_binaryFromNat___closed__1;
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_rightBit(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_rightBit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_shiftRight(lean_object*);
static lean_object* l_DMT1_hw_hw3_utilities_binaryFromNat___closed__2;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_zeroPadListLeft_zero__pad__recursive(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_binaryFromRowCols___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_utilities_reduce__and(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_indexFirstTrue(lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_indexFirstTrue_foo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_reduce__or___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_binaryFromRowCols(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_listBoolFromRowIndexForNumVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_indexFirstTrue_foo___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_utilities_BitFromNat(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_BitFromNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_zeroPadListLeft(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_binaryFromNat(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_reduce__and___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_listBoolFromRowIndexForNumVars___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_binaryFromNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_rightBit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_mod(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_rightBit___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DMT1_hw_hw3_utilities_rightBit(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_shiftRight(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = lean_nat_div(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_shiftRight___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DMT1_hw_hw3_utilities_shiftRight(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_utilities_BitFromNat(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_BitFromNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_DMT1_hw_hw3_utilities_BitFromNat(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_DMT1_hw_hw3_utilities_binaryFromNat___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
static lean_object* _init_l_DMT1_hw_hw3_utilities_binaryFromNat___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_binaryFromNat(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = lean_nat_dec_eq(x_5, x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_nat_sub(x_5, x_4);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
x_10 = lean_nat_div(x_9, x_8);
x_11 = l_DMT1_hw_hw3_utilities_binaryFromNat(x_10);
lean_dec(x_10);
x_12 = lean_nat_mod(x_9, x_8);
lean_dec(x_9);
x_13 = l_DMT1_hw_hw3_utilities_BitFromNat(x_12);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = lean_box(x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_List_appendTR___rarg(x_11, x_16);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_5);
x_18 = l_DMT1_hw_hw3_utilities_binaryFromNat___closed__1;
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = l_DMT1_hw_hw3_utilities_binaryFromNat___closed__2;
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_binaryFromNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_DMT1_hw_hw3_utilities_binaryFromNat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_zeroPadListLeft_zero__pad__recursive(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
lean_dec(x_1);
x_7 = 0;
x_8 = lean_box(x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_1 = x_6;
x_2 = x_9;
goto _start;
}
else
{
lean_dec(x_1);
return x_2;
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_zeroPadListLeft(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_lengthTRAux___rarg(x_1, x_3);
x_5 = lean_nat_sub(x_2, x_4);
lean_dec(x_4);
x_6 = l_DMT1_hw_hw3_utilities_zeroPadListLeft_zero__pad__recursive(x_5, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_zeroPadListLeft___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DMT1_hw_hw3_utilities_zeroPadListLeft(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_binaryFromRowCols(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_DMT1_hw_hw3_utilities_binaryFromNat(x_1);
x_4 = l_DMT1_hw_hw3_utilities_zeroPadListLeft(x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_binaryFromRowCols___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DMT1_hw_hw3_utilities_binaryFromRowCols(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_listBoolFromRowIndexForNumVars(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DMT1_hw_hw3_utilities_binaryFromRowCols(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_listBoolFromRowIndexForNumVars___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DMT1_hw_hw3_utilities_listBoolFromRowIndexForNumVars(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_utilities_reduce__or(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_unbox(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
x_1 = x_5;
goto _start;
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_reduce__or___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_DMT1_hw_hw3_utilities_reduce__or(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t l_DMT1_hw_hw3_utilities_reduce__and(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_unbox(x_3);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
x_1 = x_6;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_reduce__and___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_DMT1_hw_hw3_utilities_reduce__and(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_indexFirstTrue_foo(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_1 = x_6;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_1, 0);
lean_dec(x_9);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_List_lengthTRAux___rarg(x_1, x_10);
lean_dec(x_1);
x_12 = lean_nat_sub(x_2, x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_List_lengthTRAux___rarg(x_15, x_16);
lean_dec(x_15);
x_18 = lean_nat_sub(x_2, x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_indexFirstTrue_foo___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_DMT1_hw_hw3_utilities_indexFirstTrue_foo(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_DMT1_hw_hw3_utilities_indexFirstTrue(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_lengthTRAux___rarg(x_1, x_2);
x_4 = l_DMT1_hw_hw3_utilities_indexFirstTrue_foo(x_1, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_DMT1_hw_hw3_utilities(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_DMT1_hw_hw3_utilities_binaryFromNat___closed__1 = _init_l_DMT1_hw_hw3_utilities_binaryFromNat___closed__1();
lean_mark_persistent(l_DMT1_hw_hw3_utilities_binaryFromNat___closed__1);
l_DMT1_hw_hw3_utilities_binaryFromNat___closed__2 = _init_l_DMT1_hw_hw3_utilities_binaryFromNat___closed__2();
lean_mark_persistent(l_DMT1_hw_hw3_utilities_binaryFromNat___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
