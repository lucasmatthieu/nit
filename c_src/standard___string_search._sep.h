/* This C header file is generated by NIT to compile modules and programs that requires ./../lib/standard/string_search. */
#ifndef standard___string_search_sep
#define standard___string_search_sep
#include "standard___string._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_standard___string_search___Pattern[];

extern const classtable_elt_t VFT_standard___string_search___BM_Pattern[];

extern const classtable_elt_t VFT_standard___string_search___Match[];
extern const char *LOCATE_standard___string_search;
extern const int SFT_standard___string_search[];
#define ID_standard___string_search___Pattern (SFT_standard___string_search[0])
#define COLOR_standard___string_search___Pattern (SFT_standard___string_search[1])
#define INIT_TABLE_POS_standard___string_search___Pattern (SFT_standard___string_search[2] + 0)
#define CALL_standard___string_search___Pattern___search_index_in(recv) ((standard___string_search___Pattern___search_index_in_t)CALL((recv), (SFT_standard___string_search[2] + 1)))
#define CALL_standard___string_search___Pattern___search_in(recv) ((standard___string_search___Pattern___search_in_t)CALL((recv), (SFT_standard___string_search[2] + 2)))
#define CALL_standard___string_search___Pattern___search_all_in(recv) ((standard___string_search___Pattern___search_all_in_t)CALL((recv), (SFT_standard___string_search[2] + 3)))
#define CALL_standard___string_search___Pattern___split_in(recv) ((standard___string_search___Pattern___split_in_t)CALL((recv), (SFT_standard___string_search[2] + 4)))
#define ID_standard___string_search___BM_Pattern (SFT_standard___string_search[3])
#define COLOR_standard___string_search___BM_Pattern (SFT_standard___string_search[4])
#define ATTR_standard___string_search___BM_Pattern____motif(recv) ATTR(recv, (SFT_standard___string_search[5] + 0))
#define ATTR_standard___string_search___BM_Pattern____length(recv) ATTR(recv, (SFT_standard___string_search[5] + 1))
#define ATTR_standard___string_search___BM_Pattern____gs(recv) ATTR(recv, (SFT_standard___string_search[5] + 2))
#define ATTR_standard___string_search___BM_Pattern____bc_table(recv) ATTR(recv, (SFT_standard___string_search[5] + 3))
#define INIT_TABLE_POS_standard___string_search___BM_Pattern (SFT_standard___string_search[6] + 0)
#define CALL_standard___string_search___BM_Pattern___init(recv) ((standard___string_search___BM_Pattern___init_t)CALL((recv), (SFT_standard___string_search[6] + 1)))
#define CALL_standard___string_search___BM_Pattern___bc(recv) ((standard___string_search___BM_Pattern___bc_t)CALL((recv), (SFT_standard___string_search[6] + 2)))
#define CALL_standard___string_search___BM_Pattern___compute_bc(recv) ((standard___string_search___BM_Pattern___compute_bc_t)CALL((recv), (SFT_standard___string_search[6] + 3)))
#define CALL_standard___string_search___BM_Pattern___suffixes(recv) ((standard___string_search___BM_Pattern___suffixes_t)CALL((recv), (SFT_standard___string_search[6] + 4)))
#define CALL_standard___string_search___BM_Pattern___compute_gs(recv) ((standard___string_search___BM_Pattern___compute_gs_t)CALL((recv), (SFT_standard___string_search[6] + 5)))
#define ID_standard___string_search___Match (SFT_standard___string_search[7])
#define COLOR_standard___string_search___Match (SFT_standard___string_search[8])
#define ATTR_standard___string_search___Match____string(recv) ATTR(recv, (SFT_standard___string_search[9] + 0))
#define ATTR_standard___string_search___Match____from(recv) ATTR(recv, (SFT_standard___string_search[9] + 1))
#define ATTR_standard___string_search___Match____length(recv) ATTR(recv, (SFT_standard___string_search[9] + 2))
#define INIT_TABLE_POS_standard___string_search___Match (SFT_standard___string_search[10] + 0)
#define CALL_standard___string_search___Match___string(recv) ((standard___string_search___Match___string_t)CALL((recv), (SFT_standard___string_search[10] + 1)))
#define CALL_standard___string_search___Match___from(recv) ((standard___string_search___Match___from_t)CALL((recv), (SFT_standard___string_search[10] + 2)))
#define CALL_standard___string_search___Match___length(recv) ((standard___string_search___Match___length_t)CALL((recv), (SFT_standard___string_search[10] + 3)))
#define CALL_standard___string_search___Match___after(recv) ((standard___string_search___Match___after_t)CALL((recv), (SFT_standard___string_search[10] + 4)))
#define CALL_standard___string_search___Match___init(recv) ((standard___string_search___Match___init_t)CALL((recv), (SFT_standard___string_search[10] + 5)))
#define CALL_standard___string_search___String___search(recv) ((standard___string_search___String___search_t)CALL((recv), (SFT_standard___string_search[11] + 0)))
#define CALL_standard___string_search___String___search_from(recv) ((standard___string_search___String___search_from_t)CALL((recv), (SFT_standard___string_search[11] + 1)))
#define CALL_standard___string_search___String___search_all(recv) ((standard___string_search___String___search_all_t)CALL((recv), (SFT_standard___string_search[11] + 2)))
#define CALL_standard___string_search___String___split_with(recv) ((standard___string_search___String___split_with_t)CALL((recv), (SFT_standard___string_search[11] + 3)))
#define CALL_standard___string_search___String___split(recv) ((standard___string_search___String___split_t)CALL((recv), (SFT_standard___string_search[11] + 4)))
static const char * const LOCATE_standard___string_search___Pattern___search_index_in = "string_search::Pattern::search_index_in";
val_t standard___string_search___Pattern___search_index_in(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___Pattern___search_index_in_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___Pattern___search_in = "string_search::Pattern::search_in";
val_t standard___string_search___Pattern___search_in(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___Pattern___search_in_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___Pattern___search_all_in = "string_search::Pattern::search_all_in";
val_t standard___string_search___Pattern___search_all_in(val_t p0, val_t p1);
typedef val_t (*standard___string_search___Pattern___search_all_in_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string_search___Pattern___split_in = "string_search::Pattern::split_in";
val_t standard___string_search___Pattern___split_in(val_t p0, val_t p1);
typedef val_t (*standard___string_search___Pattern___split_in_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string_search___BM_Pattern___to_s = "string_search::BM_Pattern::(string::Object::to_s)";
val_t standard___string_search___BM_Pattern___to_s(val_t p0);
typedef val_t (*standard___string_search___BM_Pattern___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string_search___BM_Pattern___search_index_in = "string_search::BM_Pattern::(string_search::Pattern::search_index_in)";
val_t standard___string_search___BM_Pattern___search_index_in(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___BM_Pattern___search_index_in_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___BM_Pattern___search_in = "string_search::BM_Pattern::(string_search::Pattern::search_in)";
val_t standard___string_search___BM_Pattern___search_in(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___BM_Pattern___search_in_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___BM_Pattern___init = "string_search::BM_Pattern::init";
void standard___string_search___BM_Pattern___init(val_t p0, val_t p1, int* init_table);
typedef void (*standard___string_search___BM_Pattern___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_BM_Pattern_standard___string_search___BM_Pattern___init(val_t p0);
static const char * const LOCATE_standard___string_search___BM_Pattern___bc = "string_search::BM_Pattern::bc";
val_t standard___string_search___BM_Pattern___bc(val_t p0, val_t p1);
typedef val_t (*standard___string_search___BM_Pattern___bc_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string_search___BM_Pattern___compute_bc = "string_search::BM_Pattern::compute_bc";
void standard___string_search___BM_Pattern___compute_bc(val_t p0);
typedef void (*standard___string_search___BM_Pattern___compute_bc_t)(val_t p0);
static const char * const LOCATE_standard___string_search___BM_Pattern___suffixes = "string_search::BM_Pattern::suffixes";
val_t standard___string_search___BM_Pattern___suffixes(val_t p0);
typedef val_t (*standard___string_search___BM_Pattern___suffixes_t)(val_t p0);
static const char * const LOCATE_standard___string_search___BM_Pattern___compute_gs = "string_search::BM_Pattern::compute_gs";
void standard___string_search___BM_Pattern___compute_gs(val_t p0);
typedef void (*standard___string_search___BM_Pattern___compute_gs_t)(val_t p0);
static const char * const LOCATE_standard___string_search___Match___string = "string_search::Match::string";
val_t standard___string_search___Match___string(val_t p0);
typedef val_t (*standard___string_search___Match___string_t)(val_t p0);
static const char * const LOCATE_standard___string_search___Match___from = "string_search::Match::from";
val_t standard___string_search___Match___from(val_t p0);
typedef val_t (*standard___string_search___Match___from_t)(val_t p0);
static const char * const LOCATE_standard___string_search___Match___length = "string_search::Match::length";
val_t standard___string_search___Match___length(val_t p0);
typedef val_t (*standard___string_search___Match___length_t)(val_t p0);
static const char * const LOCATE_standard___string_search___Match___after = "string_search::Match::after";
val_t standard___string_search___Match___after(val_t p0);
typedef val_t (*standard___string_search___Match___after_t)(val_t p0);
static const char * const LOCATE_standard___string_search___Match___to_s = "string_search::Match::(string::Object::to_s)";
val_t standard___string_search___Match___to_s(val_t p0);
typedef val_t (*standard___string_search___Match___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string_search___Match___init = "string_search::Match::init";
void standard___string_search___Match___init(val_t p0, val_t p1, val_t p2, val_t p3, int* init_table);
typedef void (*standard___string_search___Match___init_t)(val_t p0, val_t p1, val_t p2, val_t p3, int* init_table);
val_t NEW_Match_standard___string_search___Match___init(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___Char___search_index_in = "string_search::Char::(string_search::Pattern::search_index_in)";
val_t standard___string_search___Char___search_index_in(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___Char___search_index_in_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___Char___search_in = "string_search::Char::(string_search::Pattern::search_in)";
val_t standard___string_search___Char___search_in(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___Char___search_in_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___String___search_index_in = "string_search::String::(string_search::Pattern::search_index_in)";
val_t standard___string_search___String___search_index_in(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___String___search_index_in_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___String___search_in = "string_search::String::(string_search::Pattern::search_in)";
val_t standard___string_search___String___search_in(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___String___search_in_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___String___search = "string_search::String::search";
val_t standard___string_search___String___search(val_t p0, val_t p1);
typedef val_t (*standard___string_search___String___search_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string_search___String___search_from = "string_search::String::search_from";
val_t standard___string_search___String___search_from(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string_search___String___search_from_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string_search___String___search_all = "string_search::String::search_all";
val_t standard___string_search___String___search_all(val_t p0, val_t p1);
typedef val_t (*standard___string_search___String___search_all_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string_search___String___split_with = "string_search::String::split_with";
val_t standard___string_search___String___split_with(val_t p0, val_t p1);
typedef val_t (*standard___string_search___String___split_with_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string_search___String___split = "string_search::String::split";
val_t standard___string_search___String___split(val_t p0);
typedef val_t (*standard___string_search___String___split_t)(val_t p0);
val_t NEW_String_standard___string___String___with_native(val_t p0, val_t p1);
val_t NEW_String_standard___string___String___from_cstring(val_t p0);
#endif
