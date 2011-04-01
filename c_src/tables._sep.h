/* This C header file is generated by NIT to compile modules and programs that requires tables. */
#ifndef tables_sep
#define tables_sep
#include "standard._sep.h"
#include <nit_common.h>
#include <tables_nit.h>

extern const classtable_elt_t VFT_TablesCapable[];
extern const char *LOCATE_tables;
extern const int SFT_tables[];
#define ID_TablesCapable (SFT_tables[0])
#define COLOR_TablesCapable (SFT_tables[1])
#define INIT_TABLE_POS_TablesCapable (SFT_tables[2] + 0)
#define CALL_tables___TablesCapable___lexer_goto(recv) ((tables___TablesCapable___lexer_goto_t)CALL((recv), (SFT_tables[2] + 1)))
#define CALL_tables___TablesCapable___lexer_accept(recv) ((tables___TablesCapable___lexer_accept_t)CALL((recv), (SFT_tables[2] + 2)))
#define CALL_tables___TablesCapable___parser_goto(recv) ((tables___TablesCapable___parser_goto_t)CALL((recv), (SFT_tables[2] + 3)))
#define CALL_tables___TablesCapable___parser_action(recv) ((tables___TablesCapable___parser_action_t)CALL((recv), (SFT_tables[2] + 4)))
static const char * const LOCATE_tables___TablesCapable___lexer_goto = "tables::TablesCapable::lexer_goto";
val_t tables___TablesCapable___lexer_goto(val_t p0, val_t p1, val_t p2);
typedef val_t (*tables___TablesCapable___lexer_goto_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_tables___TablesCapable___lexer_accept = "tables::TablesCapable::lexer_accept";
val_t tables___TablesCapable___lexer_accept(val_t p0, val_t p1);
typedef val_t (*tables___TablesCapable___lexer_accept_t)(val_t p0, val_t p1);
static const char * const LOCATE_tables___TablesCapable___parser_goto = "tables::TablesCapable::parser_goto";
val_t tables___TablesCapable___parser_goto(val_t p0, val_t p1, val_t p2);
typedef val_t (*tables___TablesCapable___parser_goto_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_tables___TablesCapable___parser_action = "tables::TablesCapable::parser_action";
val_t tables___TablesCapable___parser_action(val_t p0, val_t p1, val_t p2);
typedef val_t (*tables___TablesCapable___parser_action_t)(val_t p0, val_t p1, val_t p2);
#endif