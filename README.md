# Gleipnir for new version of Valgrind

## Development Information

## Goal

Allow Gleipnir to run on current version of Valgrind (3.17)

## Setup

```bash
git clone https://github.com/The-Box-Lord/gleipnir.git
```

## Old README

Aug 1st., 2013 - Tomislav (Tommy) Janjusic

Before making Valgrind with Gleipnir:

Malloc wrap vs. Malloc replace?

wrap - will patch Valgrind and wrap malloc calls (i.e. NOT USE Valgrind's
		   malloc replacement function - it's similar but different than standard
			 glibc - malloc() implementation. '-p' applies the patch '-m wrap/malloc'
			 configures gleipnir.

$ ./glconf -p -m wrap
   
            OR

replace - will NOT patch Valgrind, but configure Gleipnir to use
          gl_malloc_replacement.c (i.e. Allocation will call VG_(cli_malloc)()

$ ./glconf -m replace


Applying the patch will not break other tools. (fingers crossed)

IMPORTANT: If you want to switch between the configurations (wrap vs replace),
you have to distclean and start from top, I'm not sure why, maybe something to
do with linking libraries - I really don't understand how everything is linked.

Debug information?

./glconf -d

This will patch debuginfo.c and pub_tool_debuginfo.h for Gleipnir's use.
