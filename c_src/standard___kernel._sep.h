/* This C header file is generated by NIT to compile modules and programs that requires ./../lib/standard/kernel. */
#ifndef standard___kernel_sep
#define standard___kernel_sep
#include <nit_common.h>

extern const classtable_elt_t VFT_standard___kernel___Object[];

extern const classtable_elt_t VFT_standard___kernel___Sys[];

extern const classtable_elt_t VFT_standard___kernel___Comparable[];

extern const classtable_elt_t VFT_standard___kernel___Discrete[];

extern const classtable_elt_t VFT_standard___kernel___Bool[];

extern const classtable_elt_t VFT_standard___kernel___Float[];
struct TBOX_Float { const classtable_elt_t * vft; bigint object_id; float val;};
val_t BOX_Float(float val);
#define UNBOX_Float(x) (((struct TBOX_Float *)(VAL2OBJ(x)))->val)

extern const classtable_elt_t VFT_standard___kernel___Int[];

extern const classtable_elt_t VFT_standard___kernel___Char[];

extern const classtable_elt_t VFT_standard___kernel___Pointer[];
struct TBOX_Pointer { const classtable_elt_t * vft; bigint object_id; void * val;};
val_t BOX_Pointer(void * val);
#define UNBOX_Pointer(x) (((struct TBOX_Pointer *)(VAL2OBJ(x)))->val)
extern const char *LOCATE_standard___kernel;
extern const int SFT_standard___kernel[];
#define ID_standard___kernel___Object (SFT_standard___kernel[0])
#define COLOR_standard___kernel___Object (SFT_standard___kernel[1])
#define INIT_TABLE_POS_standard___kernel___Object (SFT_standard___kernel[2] + 0)
#define CALL_standard___kernel___Object___object_id(recv) ((standard___kernel___Object___object_id_t)CALL((recv), (SFT_standard___kernel[2] + 1)))
#define CALL_standard___kernel___Object___is_same_type(recv) ((standard___kernel___Object___is_same_type_t)CALL((recv), (SFT_standard___kernel[2] + 2)))
#define CALL_standard___kernel___Object_____eqeq(recv) ((standard___kernel___Object_____eqeq_t)CALL((recv), (SFT_standard___kernel[2] + 3)))
#define CALL_standard___kernel___Object_____neq(recv) ((standard___kernel___Object_____neq_t)CALL((recv), (SFT_standard___kernel[2] + 4)))
#define CALL_standard___kernel___Object___output(recv) ((standard___kernel___Object___output_t)CALL((recv), (SFT_standard___kernel[2] + 5)))
#define CALL_standard___kernel___Object___output_class_name(recv) ((standard___kernel___Object___output_class_name_t)CALL((recv), (SFT_standard___kernel[2] + 6)))
#define CALL_standard___kernel___Object___exit(recv) ((standard___kernel___Object___exit_t)CALL((recv), (SFT_standard___kernel[2] + 7)))
#define CALL_standard___kernel___Object___sys(recv) ((standard___kernel___Object___sys_t)CALL((recv), (SFT_standard___kernel[2] + 8)))
#define ID_standard___kernel___Sys (SFT_standard___kernel[3])
#define COLOR_standard___kernel___Sys (SFT_standard___kernel[4])
#define INIT_TABLE_POS_standard___kernel___Sys (SFT_standard___kernel[5] + 0)
#define CALL_standard___kernel___Sys___main(recv) ((standard___kernel___Sys___main_t)CALL((recv), (SFT_standard___kernel[5] + 1)))
#define CALL_standard___kernel___Sys___init(recv) ((standard___kernel___Sys___init_t)CALL((recv), (SFT_standard___kernel[5] + 2)))
#define ID_standard___kernel___Comparable (SFT_standard___kernel[6])
#define COLOR_standard___kernel___Comparable (SFT_standard___kernel[7])
#define INIT_TABLE_POS_standard___kernel___Comparable (SFT_standard___kernel[8] + 0)
#define VTID_standard___kernel___Comparable___OTHER(recv) (VAL2VFT(recv)[SFT_standard___kernel[8] + 1].i)
#define VTCOLOR_standard___kernel___Comparable___OTHER(recv) (VAL2VFT(recv)[SFT_standard___kernel[8] + 2].i)
#define CALL_standard___kernel___Comparable_____l(recv) ((standard___kernel___Comparable_____l_t)CALL((recv), (SFT_standard___kernel[8] + 3)))
#define CALL_standard___kernel___Comparable_____leq(recv) ((standard___kernel___Comparable_____leq_t)CALL((recv), (SFT_standard___kernel[8] + 4)))
#define CALL_standard___kernel___Comparable_____geq(recv) ((standard___kernel___Comparable_____geq_t)CALL((recv), (SFT_standard___kernel[8] + 5)))
#define CALL_standard___kernel___Comparable_____g(recv) ((standard___kernel___Comparable_____g_t)CALL((recv), (SFT_standard___kernel[8] + 6)))
#define CALL_standard___kernel___Comparable_____leqg(recv) ((standard___kernel___Comparable_____leqg_t)CALL((recv), (SFT_standard___kernel[8] + 7)))
#define CALL_standard___kernel___Comparable___is_between(recv) ((standard___kernel___Comparable___is_between_t)CALL((recv), (SFT_standard___kernel[8] + 8)))
#define CALL_standard___kernel___Comparable___max(recv) ((standard___kernel___Comparable___max_t)CALL((recv), (SFT_standard___kernel[8] + 9)))
#define CALL_standard___kernel___Comparable___min(recv) ((standard___kernel___Comparable___min_t)CALL((recv), (SFT_standard___kernel[8] + 10)))
#define ID_standard___kernel___Discrete (SFT_standard___kernel[9])
#define COLOR_standard___kernel___Discrete (SFT_standard___kernel[10])
#define INIT_TABLE_POS_standard___kernel___Discrete (SFT_standard___kernel[11] + 0)
#define CALL_standard___kernel___Discrete___succ(recv) ((standard___kernel___Discrete___succ_t)CALL((recv), (SFT_standard___kernel[11] + 1)))
#define CALL_standard___kernel___Discrete___prec(recv) ((standard___kernel___Discrete___prec_t)CALL((recv), (SFT_standard___kernel[11] + 2)))
#define CALL_standard___kernel___Discrete_____plus(recv) ((standard___kernel___Discrete_____plus_t)CALL((recv), (SFT_standard___kernel[11] + 3)))
#define CALL_standard___kernel___Discrete_____minus(recv) ((standard___kernel___Discrete_____minus_t)CALL((recv), (SFT_standard___kernel[11] + 4)))
#define CALL_standard___kernel___Discrete___distance(recv) ((standard___kernel___Discrete___distance_t)CALL((recv), (SFT_standard___kernel[11] + 5)))
#define ID_standard___kernel___Bool (SFT_standard___kernel[12])
#define COLOR_standard___kernel___Bool (SFT_standard___kernel[13])
#define INIT_TABLE_POS_standard___kernel___Bool (SFT_standard___kernel[14] + 0)
#define ID_standard___kernel___Float (SFT_standard___kernel[15])
#define COLOR_standard___kernel___Float (SFT_standard___kernel[16])
#define INIT_TABLE_POS_standard___kernel___Float (SFT_standard___kernel[17] + 0)
#define CALL_standard___kernel___Float_____leq(recv) ((standard___kernel___Float_____leq_t)CALL((recv), (SFT_standard___kernel[17] + 1)))
#define CALL_standard___kernel___Float_____l(recv) ((standard___kernel___Float_____l_t)CALL((recv), (SFT_standard___kernel[17] + 2)))
#define CALL_standard___kernel___Float_____geq(recv) ((standard___kernel___Float_____geq_t)CALL((recv), (SFT_standard___kernel[17] + 3)))
#define CALL_standard___kernel___Float_____g(recv) ((standard___kernel___Float_____g_t)CALL((recv), (SFT_standard___kernel[17] + 4)))
#define CALL_standard___kernel___Float_____plus(recv) ((standard___kernel___Float_____plus_t)CALL((recv), (SFT_standard___kernel[17] + 5)))
#define CALL_standard___kernel___Float___unary__minus(recv) ((standard___kernel___Float___unary__minus_t)CALL((recv), (SFT_standard___kernel[17] + 6)))
#define CALL_standard___kernel___Float_____minus(recv) ((standard___kernel___Float_____minus_t)CALL((recv), (SFT_standard___kernel[17] + 7)))
#define CALL_standard___kernel___Float_____star(recv) ((standard___kernel___Float_____star_t)CALL((recv), (SFT_standard___kernel[17] + 8)))
#define CALL_standard___kernel___Float_____slash(recv) ((standard___kernel___Float_____slash_t)CALL((recv), (SFT_standard___kernel[17] + 9)))
#define CALL_standard___kernel___Float___to_i(recv) ((standard___kernel___Float___to_i_t)CALL((recv), (SFT_standard___kernel[17] + 10)))
#define ID_standard___kernel___Int (SFT_standard___kernel[18])
#define COLOR_standard___kernel___Int (SFT_standard___kernel[19])
#define INIT_TABLE_POS_standard___kernel___Int (SFT_standard___kernel[20] + 0)
#define CALL_standard___kernel___Int___unary__minus(recv) ((standard___kernel___Int___unary__minus_t)CALL((recv), (SFT_standard___kernel[20] + 1)))
#define CALL_standard___kernel___Int_____star(recv) ((standard___kernel___Int_____star_t)CALL((recv), (SFT_standard___kernel[20] + 2)))
#define CALL_standard___kernel___Int_____slash(recv) ((standard___kernel___Int_____slash_t)CALL((recv), (SFT_standard___kernel[20] + 3)))
#define CALL_standard___kernel___Int_____percent(recv) ((standard___kernel___Int_____percent_t)CALL((recv), (SFT_standard___kernel[20] + 4)))
#define CALL_standard___kernel___Int___lshift(recv) ((standard___kernel___Int___lshift_t)CALL((recv), (SFT_standard___kernel[20] + 5)))
#define CALL_standard___kernel___Int___rshift(recv) ((standard___kernel___Int___rshift_t)CALL((recv), (SFT_standard___kernel[20] + 6)))
#define CALL_standard___kernel___Int___to_f(recv) ((standard___kernel___Int___to_f_t)CALL((recv), (SFT_standard___kernel[20] + 7)))
#define CALL_standard___kernel___Int___ascii(recv) ((standard___kernel___Int___ascii_t)CALL((recv), (SFT_standard___kernel[20] + 8)))
#define CALL_standard___kernel___Int___digit_count(recv) ((standard___kernel___Int___digit_count_t)CALL((recv), (SFT_standard___kernel[20] + 9)))
#define CALL_standard___kernel___Int___to_c(recv) ((standard___kernel___Int___to_c_t)CALL((recv), (SFT_standard___kernel[20] + 10)))
#define CALL_standard___kernel___Int___enumerate_to(recv) ((standard___kernel___Int___enumerate_to_t)CALL((recv), (SFT_standard___kernel[20] + 11)))
#define CALL_standard___kernel___Int___enumerate_before(recv) ((standard___kernel___Int___enumerate_before_t)CALL((recv), (SFT_standard___kernel[20] + 12)))
#define ID_standard___kernel___Char (SFT_standard___kernel[21])
#define COLOR_standard___kernel___Char (SFT_standard___kernel[22])
#define INIT_TABLE_POS_standard___kernel___Char (SFT_standard___kernel[23] + 0)
#define CALL_standard___kernel___Char___to_i(recv) ((standard___kernel___Char___to_i_t)CALL((recv), (SFT_standard___kernel[23] + 1)))
#define CALL_standard___kernel___Char___ascii(recv) ((standard___kernel___Char___ascii_t)CALL((recv), (SFT_standard___kernel[23] + 2)))
#define CALL_standard___kernel___Char___to_lower(recv) ((standard___kernel___Char___to_lower_t)CALL((recv), (SFT_standard___kernel[23] + 3)))
#define CALL_standard___kernel___Char___to_upper(recv) ((standard___kernel___Char___to_upper_t)CALL((recv), (SFT_standard___kernel[23] + 4)))
#define CALL_standard___kernel___Char___is_digit(recv) ((standard___kernel___Char___is_digit_t)CALL((recv), (SFT_standard___kernel[23] + 5)))
#define CALL_standard___kernel___Char___is_lower(recv) ((standard___kernel___Char___is_lower_t)CALL((recv), (SFT_standard___kernel[23] + 6)))
#define CALL_standard___kernel___Char___is_upper(recv) ((standard___kernel___Char___is_upper_t)CALL((recv), (SFT_standard___kernel[23] + 7)))
#define CALL_standard___kernel___Char___is_letter(recv) ((standard___kernel___Char___is_letter_t)CALL((recv), (SFT_standard___kernel[23] + 8)))
#define ID_standard___kernel___Pointer (SFT_standard___kernel[24])
#define COLOR_standard___kernel___Pointer (SFT_standard___kernel[25])
#define INIT_TABLE_POS_standard___kernel___Pointer (SFT_standard___kernel[26] + 0)
static const char * const LOCATE_standard___kernel___Object___object_id = "kernel::Object::object_id";
val_t standard___kernel___Object___object_id(val_t p0);
typedef val_t (*standard___kernel___Object___object_id_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Object___is_same_type = "kernel::Object::is_same_type";
val_t standard___kernel___Object___is_same_type(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Object___is_same_type_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Object_____eqeq = "kernel::Object::==";
val_t standard___kernel___Object_____eqeq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Object_____eqeq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Object_____neq = "kernel::Object::!=";
val_t standard___kernel___Object_____neq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Object_____neq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Object___output = "kernel::Object::output";
void standard___kernel___Object___output(val_t p0);
typedef void (*standard___kernel___Object___output_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Object___output_class_name = "kernel::Object::output_class_name";
void standard___kernel___Object___output_class_name(val_t p0);
typedef void (*standard___kernel___Object___output_class_name_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Object___exit = "kernel::Object::exit";
void standard___kernel___Object___exit(val_t p0, val_t p1);
typedef void (*standard___kernel___Object___exit_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Object___sys = "kernel::Object::sys";
val_t standard___kernel___Object___sys(val_t p0);
typedef val_t (*standard___kernel___Object___sys_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Sys___main = "kernel::Sys::main";
void standard___kernel___Sys___main(val_t p0);
typedef void (*standard___kernel___Sys___main_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Sys___init = "kernel::Sys::init";
void standard___kernel___Sys___init(val_t p0, int* init_table);
typedef void (*standard___kernel___Sys___init_t)(val_t p0, int* init_table);
val_t NEW_Sys_standard___kernel___Sys___init();
static const char * const LOCATE_standard___kernel___Comparable_____l = "kernel::Comparable::<";
val_t standard___kernel___Comparable_____l(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Comparable_____l_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Comparable_____leq = "kernel::Comparable::<=";
val_t standard___kernel___Comparable_____leq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Comparable_____leq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Comparable_____geq = "kernel::Comparable::>=";
val_t standard___kernel___Comparable_____geq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Comparable_____geq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Comparable_____g = "kernel::Comparable::>";
val_t standard___kernel___Comparable_____g(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Comparable_____g_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Comparable_____leqg = "kernel::Comparable::<=>";
val_t standard___kernel___Comparable_____leqg(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Comparable_____leqg_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Comparable___is_between = "kernel::Comparable::is_between";
val_t standard___kernel___Comparable___is_between(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___kernel___Comparable___is_between_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___kernel___Comparable___max = "kernel::Comparable::max";
val_t standard___kernel___Comparable___max(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Comparable___max_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Comparable___min = "kernel::Comparable::min";
val_t standard___kernel___Comparable___min(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Comparable___min_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Discrete___succ = "kernel::Discrete::succ";
val_t standard___kernel___Discrete___succ(val_t p0);
typedef val_t (*standard___kernel___Discrete___succ_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Discrete___prec = "kernel::Discrete::prec";
val_t standard___kernel___Discrete___prec(val_t p0);
typedef val_t (*standard___kernel___Discrete___prec_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Discrete_____plus = "kernel::Discrete::+";
val_t standard___kernel___Discrete_____plus(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Discrete_____plus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Discrete_____minus = "kernel::Discrete::-";
val_t standard___kernel___Discrete_____minus(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Discrete_____minus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Discrete___distance = "kernel::Discrete::distance";
val_t standard___kernel___Discrete___distance(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Discrete___distance_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Bool___object_id = "kernel::Bool::(kernel::Object::object_id)";
val_t standard___kernel___Bool___object_id(val_t p0);
typedef val_t (*standard___kernel___Bool___object_id_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Bool_____eqeq = "kernel::Bool::(kernel::Object::==)";
val_t standard___kernel___Bool_____eqeq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Bool_____eqeq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Bool_____neq = "kernel::Bool::(kernel::Object::!=)";
val_t standard___kernel___Bool_____neq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Bool_____neq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Bool___output = "kernel::Bool::(kernel::Object::output)";
void standard___kernel___Bool___output(val_t p0);
typedef void (*standard___kernel___Bool___output_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Float___object_id = "kernel::Float::(kernel::Object::object_id)";
val_t standard___kernel___Float___object_id(val_t p0);
typedef val_t (*standard___kernel___Float___object_id_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Float___output = "kernel::Float::(kernel::Object::output)";
void standard___kernel___Float___output(val_t p0);
typedef void (*standard___kernel___Float___output_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Float_____leq = "kernel::Float::<=";
val_t standard___kernel___Float_____leq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Float_____leq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Float_____l = "kernel::Float::<";
val_t standard___kernel___Float_____l(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Float_____l_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Float_____geq = "kernel::Float::>=";
val_t standard___kernel___Float_____geq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Float_____geq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Float_____g = "kernel::Float::>";
val_t standard___kernel___Float_____g(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Float_____g_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Float_____plus = "kernel::Float::+";
val_t standard___kernel___Float_____plus(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Float_____plus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Float___unary__minus = "kernel::Float::unary -";
val_t standard___kernel___Float___unary__minus(val_t p0);
typedef val_t (*standard___kernel___Float___unary__minus_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Float_____minus = "kernel::Float::-";
val_t standard___kernel___Float_____minus(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Float_____minus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Float_____star = "kernel::Float::*";
val_t standard___kernel___Float_____star(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Float_____star_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Float_____slash = "kernel::Float::/";
val_t standard___kernel___Float_____slash(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Float_____slash_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Float___to_i = "kernel::Float::to_i";
val_t standard___kernel___Float___to_i(val_t p0);
typedef val_t (*standard___kernel___Float___to_i_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Int___object_id = "kernel::Int::(kernel::Object::object_id)";
val_t standard___kernel___Int___object_id(val_t p0);
typedef val_t (*standard___kernel___Int___object_id_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Int_____eqeq = "kernel::Int::(kernel::Object::==)";
val_t standard___kernel___Int_____eqeq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____eqeq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____neq = "kernel::Int::(kernel::Object::!=)";
val_t standard___kernel___Int_____neq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____neq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___output = "kernel::Int::(kernel::Object::output)";
void standard___kernel___Int___output(val_t p0);
typedef void (*standard___kernel___Int___output_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Int_____leq = "kernel::Int::(kernel::Comparable::<=)";
val_t standard___kernel___Int_____leq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____leq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____l = "kernel::Int::(kernel::Comparable::<)";
val_t standard___kernel___Int_____l(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____l_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____geq = "kernel::Int::(kernel::Comparable::>=)";
val_t standard___kernel___Int_____geq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____geq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____g = "kernel::Int::(kernel::Comparable::>)";
val_t standard___kernel___Int_____g(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____g_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____plus = "kernel::Int::(kernel::Discrete::+)";
val_t standard___kernel___Int_____plus(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____plus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___unary__minus = "kernel::Int::unary -";
val_t standard___kernel___Int___unary__minus(val_t p0);
typedef val_t (*standard___kernel___Int___unary__minus_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Int_____minus = "kernel::Int::(kernel::Discrete::-)";
val_t standard___kernel___Int_____minus(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____minus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____star = "kernel::Int::*";
val_t standard___kernel___Int_____star(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____star_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____slash = "kernel::Int::/";
val_t standard___kernel___Int_____slash(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____slash_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____percent = "kernel::Int::%";
val_t standard___kernel___Int_____percent(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____percent_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___lshift = "kernel::Int::lshift";
val_t standard___kernel___Int___lshift(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int___lshift_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___rshift = "kernel::Int::rshift";
val_t standard___kernel___Int___rshift(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int___rshift_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___to_f = "kernel::Int::to_f";
val_t standard___kernel___Int___to_f(val_t p0);
typedef val_t (*standard___kernel___Int___to_f_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Int___succ = "kernel::Int::(kernel::Discrete::succ)";
val_t standard___kernel___Int___succ(val_t p0);
typedef val_t (*standard___kernel___Int___succ_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Int___prec = "kernel::Int::(kernel::Discrete::prec)";
val_t standard___kernel___Int___prec(val_t p0);
typedef val_t (*standard___kernel___Int___prec_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Int___distance = "kernel::Int::(kernel::Discrete::distance)";
val_t standard___kernel___Int___distance(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int___distance_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int_____leqg = "kernel::Int::(kernel::Comparable::<=>)";
val_t standard___kernel___Int_____leqg(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int_____leqg_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___is_between = "kernel::Int::(kernel::Comparable::is_between)";
val_t standard___kernel___Int___is_between(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___kernel___Int___is_between_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___kernel___Int___max = "kernel::Int::(kernel::Comparable::max)";
val_t standard___kernel___Int___max(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int___max_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___min = "kernel::Int::(kernel::Comparable::min)";
val_t standard___kernel___Int___min(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int___min_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___ascii = "kernel::Int::ascii";
val_t standard___kernel___Int___ascii(val_t p0);
typedef val_t (*standard___kernel___Int___ascii_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Int___digit_count = "kernel::Int::digit_count";
val_t standard___kernel___Int___digit_count(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Int___digit_count_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Int___to_c = "kernel::Int::to_c";
val_t standard___kernel___Int___to_c(val_t p0);
typedef val_t (*standard___kernel___Int___to_c_t)(val_t p0);
typedef void (*CLOS_standard___kernel___Int___enumerate_to_0)(struct stack_frame_t *, val_t);
static const char * const LOCATE_standard___kernel___Int___enumerate_to = "kernel::Int::enumerate_to";
void standard___kernel___Int___enumerate_to(val_t p0, val_t p1, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*standard___kernel___Int___enumerate_to_t)(val_t p0, val_t p1, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*CLOS_standard___kernel___Int___enumerate_before_0)(struct stack_frame_t *, val_t);
static const char * const LOCATE_standard___kernel___Int___enumerate_before = "kernel::Int::enumerate_before";
void standard___kernel___Int___enumerate_before(val_t p0, val_t p1, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*standard___kernel___Int___enumerate_before_t)(val_t p0, val_t p1, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_standard___kernel___Char___object_id = "kernel::Char::(kernel::Object::object_id)";
val_t standard___kernel___Char___object_id(val_t p0);
typedef val_t (*standard___kernel___Char___object_id_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char_____eqeq = "kernel::Char::(kernel::Object::==)";
val_t standard___kernel___Char_____eqeq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char_____eqeq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char_____neq = "kernel::Char::(kernel::Object::!=)";
val_t standard___kernel___Char_____neq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char_____neq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char___output = "kernel::Char::(kernel::Object::output)";
void standard___kernel___Char___output(val_t p0);
typedef void (*standard___kernel___Char___output_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char_____leq = "kernel::Char::(kernel::Comparable::<=)";
val_t standard___kernel___Char_____leq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char_____leq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char_____l = "kernel::Char::(kernel::Comparable::<)";
val_t standard___kernel___Char_____l(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char_____l_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char_____geq = "kernel::Char::(kernel::Comparable::>=)";
val_t standard___kernel___Char_____geq(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char_____geq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char_____g = "kernel::Char::(kernel::Comparable::>)";
val_t standard___kernel___Char_____g(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char_____g_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char___succ = "kernel::Char::(kernel::Discrete::succ)";
val_t standard___kernel___Char___succ(val_t p0);
typedef val_t (*standard___kernel___Char___succ_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char___prec = "kernel::Char::(kernel::Discrete::prec)";
val_t standard___kernel___Char___prec(val_t p0);
typedef val_t (*standard___kernel___Char___prec_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char___distance = "kernel::Char::(kernel::Discrete::distance)";
val_t standard___kernel___Char___distance(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char___distance_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char___to_i = "kernel::Char::to_i";
val_t standard___kernel___Char___to_i(val_t p0);
typedef val_t (*standard___kernel___Char___to_i_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char___ascii = "kernel::Char::ascii";
val_t standard___kernel___Char___ascii(val_t p0);
typedef val_t (*standard___kernel___Char___ascii_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char_____plus = "kernel::Char::(kernel::Discrete::+)";
val_t standard___kernel___Char_____plus(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char_____plus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char_____minus = "kernel::Char::(kernel::Discrete::-)";
val_t standard___kernel___Char_____minus(val_t p0, val_t p1);
typedef val_t (*standard___kernel___Char_____minus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___kernel___Char___to_lower = "kernel::Char::to_lower";
val_t standard___kernel___Char___to_lower(val_t p0);
typedef val_t (*standard___kernel___Char___to_lower_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char___to_upper = "kernel::Char::to_upper";
val_t standard___kernel___Char___to_upper(val_t p0);
typedef val_t (*standard___kernel___Char___to_upper_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char___is_digit = "kernel::Char::is_digit";
val_t standard___kernel___Char___is_digit(val_t p0);
typedef val_t (*standard___kernel___Char___is_digit_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char___is_lower = "kernel::Char::is_lower";
val_t standard___kernel___Char___is_lower(val_t p0);
typedef val_t (*standard___kernel___Char___is_lower_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char___is_upper = "kernel::Char::is_upper";
val_t standard___kernel___Char___is_upper(val_t p0);
typedef val_t (*standard___kernel___Char___is_upper_t)(val_t p0);
static const char * const LOCATE_standard___kernel___Char___is_letter = "kernel::Char::is_letter";
val_t standard___kernel___Char___is_letter(val_t p0);
typedef val_t (*standard___kernel___Char___is_letter_t)(val_t p0);
#endif
