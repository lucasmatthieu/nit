/* This C header file is generated by NIT to compile modules and programs that requires ./nitc. */
#ifndef nitc_sep
#define nitc_sep
#include "global._sep.h"
#include "separate_options._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_nitc___NitCompiler[];
extern const char LOCATE_nitc[];
extern const int SFT_nitc[];
#define ID_nitc___NitCompiler (SFT_nitc[0])
#define COLOR_nitc___NitCompiler (SFT_nitc[1])
#define ATTR_nitc___NitCompiler____opt_output(recv) ATTR(recv, (SFT_nitc[2] + 0))
#define ATTR_nitc___NitCompiler____opt_boost(recv) ATTR(recv, (SFT_nitc[2] + 1))
#define ATTR_nitc___NitCompiler____opt_no_cc(recv) ATTR(recv, (SFT_nitc[2] + 2))
#define ATTR_nitc___NitCompiler____opt_cc_no_link(recv) ATTR(recv, (SFT_nitc[2] + 3))
#define ATTR_nitc___NitCompiler____opt_clibdir(recv) ATTR(recv, (SFT_nitc[2] + 4))
#define ATTR_nitc___NitCompiler____opt_bindir(recv) ATTR(recv, (SFT_nitc[2] + 5))
#define ATTR_nitc___NitCompiler____opt_compdir(recv) ATTR(recv, (SFT_nitc[2] + 6))
#define ATTR_nitc___NitCompiler____opt_extension_prefix(recv) ATTR(recv, (SFT_nitc[2] + 7))
#define ATTR_nitc___NitCompiler____opt_output_format(recv) ATTR(recv, (SFT_nitc[2] + 8))
#define INIT_TABLE_POS_nitc___NitCompiler (SFT_nitc[3] + 0)
#define CALL_nitc___NitCompiler___opt_output(recv) ((nitc___NitCompiler___opt_output_t)CALL((recv), (SFT_nitc[3] + 1)))
#define CALL_nitc___NitCompiler___opt_boost(recv) ((nitc___NitCompiler___opt_boost_t)CALL((recv), (SFT_nitc[3] + 2)))
#define CALL_nitc___NitCompiler___opt_no_cc(recv) ((nitc___NitCompiler___opt_no_cc_t)CALL((recv), (SFT_nitc[3] + 3)))
#define CALL_nitc___NitCompiler___opt_cc_no_link(recv) ((nitc___NitCompiler___opt_cc_no_link_t)CALL((recv), (SFT_nitc[3] + 4)))
#define CALL_nitc___NitCompiler___opt_clibdir(recv) ((nitc___NitCompiler___opt_clibdir_t)CALL((recv), (SFT_nitc[3] + 5)))
#define CALL_nitc___NitCompiler___opt_bindir(recv) ((nitc___NitCompiler___opt_bindir_t)CALL((recv), (SFT_nitc[3] + 6)))
#define CALL_nitc___NitCompiler___opt_compdir(recv) ((nitc___NitCompiler___opt_compdir_t)CALL((recv), (SFT_nitc[3] + 7)))
#define CALL_nitc___NitCompiler___opt_extension_prefix(recv) ((nitc___NitCompiler___opt_extension_prefix_t)CALL((recv), (SFT_nitc[3] + 8)))
#define CALL_nitc___NitCompiler___opt_output_format(recv) ((nitc___NitCompiler___opt_output_format_t)CALL((recv), (SFT_nitc[3] + 9)))
#define CALL_nitc___NitCompiler___init(recv) ((nitc___NitCompiler___init_t)CALL((recv), (SFT_nitc[3] + 10)))
#define CALL_SUPER_nitc___NitCompiler___process_options(recv) ((nitc___NitCompiler___process_options_t)CALL((recv), (SFT_nitc[3] + 11)))
#define CALL_SUPER_nitc___ToolContext___init(recv) ((nitc___ToolContext___init_t)CALL((recv), (SFT_nitc[4] + 0)))
val_t nitc___NitCompiler___opt_output(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_output_t)(val_t p0);
val_t nitc___NitCompiler___opt_boost(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_boost_t)(val_t p0);
val_t nitc___NitCompiler___opt_no_cc(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_no_cc_t)(val_t p0);
val_t nitc___NitCompiler___opt_cc_no_link(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_cc_no_link_t)(val_t p0);
val_t nitc___NitCompiler___opt_clibdir(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_clibdir_t)(val_t p0);
val_t nitc___NitCompiler___opt_bindir(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_bindir_t)(val_t p0);
val_t nitc___NitCompiler___opt_compdir(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_compdir_t)(val_t p0);
val_t nitc___NitCompiler___opt_extension_prefix(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_extension_prefix_t)(val_t p0);
val_t nitc___NitCompiler___opt_output_format(val_t p0);
typedef val_t (*nitc___NitCompiler___opt_output_format_t)(val_t p0);
void nitc___NitCompiler___init(val_t p0, int* init_table);
typedef void (*nitc___NitCompiler___init_t)(val_t p0, int* init_table);
val_t NEW_NitCompiler_nitc___NitCompiler___init();
void nitc___NitCompiler___process_options(val_t p0);
typedef void (*nitc___NitCompiler___process_options_t)(val_t p0);
void nitc___NitCompiler___perform_work(val_t p0, val_t p1);
typedef void (*nitc___NitCompiler___perform_work_t)(val_t p0, val_t p1);
void nitc___ToolContext___init(val_t p0, int* init_table);
typedef void (*nitc___ToolContext___init_t)(val_t p0, int* init_table);
val_t NEW_ToolContext_toolcontext___ToolContext___init();
void nitc___Sys___main(val_t p0);
typedef void (*nitc___Sys___main_t)(val_t p0);
val_t NEW_Sys_standard___kernel___Sys___init();
#endif
