/* This C header file is generated by NIT to compile modules and programs that requires ./location. */
#ifndef location_sep
#define location_sep
#include "standard._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_location___SourceFile[];

extern const classtable_elt_t VFT_location___Location[];
extern const char *LOCATE_location;
extern const int SFT_location[];
#define ID_location___SourceFile (SFT_location[0])
#define COLOR_location___SourceFile (SFT_location[1])
#define ATTR_location___SourceFile_____atfilename(recv) ATTR(recv, (SFT_location[2] + 0))
#define ATTR_location___SourceFile_____atstring(recv) ATTR(recv, (SFT_location[2] + 1))
#define ATTR_location___SourceFile_____atline_starts(recv) ATTR(recv, (SFT_location[2] + 2))
#define INIT_TABLE_POS_location___SourceFile (SFT_location[3] + 0)
#define CALL_location___SourceFile___filename(recv) ((location___SourceFile___filename_t)CALL((recv), (SFT_location[3] + 1)))
#define CALL_location___SourceFile___filename__eq(recv) ((location___SourceFile___filename__eq_t)CALL((recv), (SFT_location[3] + 2)))
#define CALL_location___SourceFile___string(recv) ((location___SourceFile___string_t)CALL((recv), (SFT_location[3] + 3)))
#define CALL_location___SourceFile___string__eq(recv) ((location___SourceFile___string__eq_t)CALL((recv), (SFT_location[3] + 4)))
#define CALL_location___SourceFile___init(recv) ((location___SourceFile___init_t)CALL((recv), (SFT_location[3] + 5)))
#define CALL_location___SourceFile___line_starts(recv) ((location___SourceFile___line_starts_t)CALL((recv), (SFT_location[3] + 6)))
#define CALL_location___SourceFile___line_starts__eq(recv) ((location___SourceFile___line_starts__eq_t)CALL((recv), (SFT_location[3] + 7)))
#define ID_location___Location (SFT_location[4])
#define COLOR_location___Location (SFT_location[5])
#define ATTR_location___Location____file(recv) ATTR(recv, (SFT_location[6] + 0))
#define ATTR_location___Location____line_start(recv) ATTR(recv, (SFT_location[6] + 1))
#define ATTR_location___Location____line_end(recv) ATTR(recv, (SFT_location[6] + 2))
#define ATTR_location___Location____column_start(recv) ATTR(recv, (SFT_location[6] + 3))
#define ATTR_location___Location____column_end(recv) ATTR(recv, (SFT_location[6] + 4))
#define INIT_TABLE_POS_location___Location (SFT_location[7] + 0)
#define CALL_location___Location___file(recv) ((location___Location___file_t)CALL((recv), (SFT_location[7] + 1)))
#define CALL_location___Location___line_start(recv) ((location___Location___line_start_t)CALL((recv), (SFT_location[7] + 2)))
#define CALL_location___Location___line_end(recv) ((location___Location___line_end_t)CALL((recv), (SFT_location[7] + 3)))
#define CALL_location___Location___column_start(recv) ((location___Location___column_start_t)CALL((recv), (SFT_location[7] + 4)))
#define CALL_location___Location___column_end(recv) ((location___Location___column_end_t)CALL((recv), (SFT_location[7] + 5)))
#define CALL_location___Location___init(recv) ((location___Location___init_t)CALL((recv), (SFT_location[7] + 6)))
#define CALL_location___Location___with_file(recv) ((location___Location___with_file_t)CALL((recv), (SFT_location[7] + 7)))
#define CALL_location___Location___located_in(recv) ((location___Location___located_in_t)CALL((recv), (SFT_location[7] + 8)))
#define CALL_location___Location___relative_to(recv) ((location___Location___relative_to_t)CALL((recv), (SFT_location[7] + 9)))
static const char * const LOCATE_location___SourceFile___filename = "location::SourceFile::filename";
val_t location___SourceFile___filename(val_t p0);
typedef val_t (*location___SourceFile___filename_t)(val_t p0);
static const char * const LOCATE_location___SourceFile___filename__eq = "location::SourceFile::filename=";
void location___SourceFile___filename__eq(val_t p0, val_t p1);
typedef void (*location___SourceFile___filename__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_location___SourceFile___string = "location::SourceFile::string";
val_t location___SourceFile___string(val_t p0);
typedef val_t (*location___SourceFile___string_t)(val_t p0);
static const char * const LOCATE_location___SourceFile___string__eq = "location::SourceFile::string=";
void location___SourceFile___string__eq(val_t p0, val_t p1);
typedef void (*location___SourceFile___string__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_location___SourceFile___init = "location::SourceFile::init";
void location___SourceFile___init(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*location___SourceFile___init_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_SourceFile_location___SourceFile___init(val_t p0, val_t p1);
static const char * const LOCATE_location___SourceFile___line_starts = "location::SourceFile::line_starts";
val_t location___SourceFile___line_starts(val_t p0);
typedef val_t (*location___SourceFile___line_starts_t)(val_t p0);
static const char * const LOCATE_location___SourceFile___line_starts__eq = "location::SourceFile::line_starts=";
void location___SourceFile___line_starts__eq(val_t p0, val_t p1);
typedef void (*location___SourceFile___line_starts__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_location___Location___file = "location::Location::file";
val_t location___Location___file(val_t p0);
typedef val_t (*location___Location___file_t)(val_t p0);
static const char * const LOCATE_location___Location___line_start = "location::Location::line_start";
val_t location___Location___line_start(val_t p0);
typedef val_t (*location___Location___line_start_t)(val_t p0);
static const char * const LOCATE_location___Location___line_end = "location::Location::line_end";
val_t location___Location___line_end(val_t p0);
typedef val_t (*location___Location___line_end_t)(val_t p0);
static const char * const LOCATE_location___Location___column_start = "location::Location::column_start";
val_t location___Location___column_start(val_t p0);
typedef val_t (*location___Location___column_start_t)(val_t p0);
static const char * const LOCATE_location___Location___column_end = "location::Location::column_end";
val_t location___Location___column_end(val_t p0);
typedef val_t (*location___Location___column_end_t)(val_t p0);
static const char * const LOCATE_location___Location___init = "location::Location::init";
void location___Location___init(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4, val_t p5, int* init_table);
typedef void (*location___Location___init_t)(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4, val_t p5, int* init_table);
val_t NEW_Location_location___Location___init(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
static const char * const LOCATE_location___Location___with_file = "location::Location::with_file";
void location___Location___with_file(val_t p0, val_t p1, int* init_table);
typedef void (*location___Location___with_file_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_Location_location___Location___with_file(val_t p0);
static const char * const LOCATE_location___Location_____eqeq = "location::Location::(kernel::Object::==)";
val_t location___Location_____eqeq(val_t p0, val_t p1);
typedef val_t (*location___Location_____eqeq_t)(val_t p0, val_t p1);
static const char * const LOCATE_location___Location___located_in = "location::Location::located_in";
val_t location___Location___located_in(val_t p0, val_t p1);
typedef val_t (*location___Location___located_in_t)(val_t p0, val_t p1);
static const char * const LOCATE_location___Location___to_s = "location::Location::(string::Object::to_s)";
val_t location___Location___to_s(val_t p0);
typedef val_t (*location___Location___to_s_t)(val_t p0);
static const char * const LOCATE_location___Location___relative_to = "location::Location::relative_to";
val_t location___Location___relative_to(val_t p0, val_t p1);
typedef val_t (*location___Location___relative_to_t)(val_t p0, val_t p1);
static const char * const LOCATE_location___Location_____l = "location::Location::(kernel::Comparable::<)";
val_t location___Location_____l(val_t p0, val_t p1);
typedef val_t (*location___Location_____l_t)(val_t p0, val_t p1);
#endif
