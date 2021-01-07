/*--------------------------------------------------------------------*/
/*--- Gleipnir: A tracing and profiling Valgrind tool.   gl_main.c ---*/
/*--------------------------------------------------------------------*/

/*
   This file is part of Gleipnir, a memory tracing and profiling Valgrind
   tool. The tool does advanced memory tracing. A trace is annotated
   with with debug information for detailed cache analysis.

   

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.

   The GNU General Public License is contained in the file COPYING.
*/

#include "pub_tool_basics.h"
#include "pub_tool_tooliface.h"

static void gl_post_clo_init(void)
{
}

static
IRSB* gl_instrument ( VgCallbackClosure* closure,
                      IRSB* bb,
                      const VexGuestLayout* layout, 
                      const VexGuestExtents* vge,
                      const VexArchInfo* archinfo_host,
                      IRType gWordTy, IRType hWordTy )
{
   return bb;
}

static void gl_fini(Int exitcode)
{
}

static void gl_pre_clo_init(void)
{
   VG_(details_name)            ("Nulgrind");
   VG_(details_version)         (NULL);
   VG_(details_description)     ("the minimal Valgrind tool");
   VG_(details_copyright_author)(
      "Copyright (C) 2002-2017, and GNU GPL'd, by Nicholas Nethercote.");
   VG_(details_bug_reports_to)  (VG_BUGS_TO);

   VG_(details_avg_translation_sizeB) ( 275 );

   VG_(basic_tool_funcs)        (gl_post_clo_init,
                                 gl_instrument,
                                 gl_fini);

   /* No needs, no core events to track */
}

VG_DETERMINE_INTERFACE_VERSION(gl_pre_clo_init)

/*--------------------------------------------------------------------*/
/*--- end                                                gl_main.c ---*/
/*--------------------------------------------------------------------*/