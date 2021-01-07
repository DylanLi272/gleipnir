include $(top_srcdir)/Makefile.tool.am

EXTRA_DIST = docs/gl-manual.xml

#----------------------------------------------------------------------------
# gleipnir-<platform>
#----------------------------------------------------------------------------

noinst_PROGRAMS  = gleipnir-@VGCONF_ARCH_PRI@-@VGCONF_OS@
if VGCONF_HAVE_PLATFORM_SEC
noinst_PROGRAMS += gleipnir-@VGCONF_ARCH_SEC@-@VGCONF_OS@
endif

GLEIPNIR_SOURCES_COMMON = gl_main.c

gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_SOURCES      = \
	$(GLEIPNIR_SOURCES_COMMON)
gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_CPPFLAGS     = \
	$(AM_CPPFLAGS_@VGCONF_PLATFORM_PRI_CAPS@)
gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_CFLAGS       = $(LTO_CFLAGS) \
	$(AM_CFLAGS_@VGCONF_PLATFORM_PRI_CAPS@)
gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_DEPENDENCIES = \
	$(TOOL_DEPENDENCIES_@VGCONF_PLATFORM_PRI_CAPS@)
gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_LDADD        = \
	$(TOOL_LDADD_@VGCONF_PLATFORM_PRI_CAPS@)
gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_LDFLAGS      = \
	$(TOOL_LDFLAGS_@VGCONF_PLATFORM_PRI_CAPS@)
gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_LINK = \
	$(top_builddir)/coregrind/link_tool_exe_@VGCONF_OS@ \
	@VALT_LOAD_ADDRESS_PRI@ \
	$(LINK) \
	$(gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_CFLAGS) \
	$(gleipnir_@VGCONF_ARCH_PRI@_@VGCONF_OS@_LDFLAGS)

if VGCONF_HAVE_PLATFORM_SEC
gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_SOURCES      = \
	$(GLEIPNIR_SOURCES_COMMON)
gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_CPPFLAGS     = \
	$(AM_CPPFLAGS_@VGCONF_PLATFORM_SEC_CAPS@)
gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_CFLAGS       = $(LTO_CFLAGS) \
	$(AM_CFLAGS_@VGCONF_PLATFORM_SEC_CAPS@)
gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_DEPENDENCIES = \
	$(TOOL_DEPENDENCIES_@VGCONF_PLATFORM_SEC_CAPS@)
gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_LDADD        = \
	$(TOOL_LDADD_@VGCONF_PLATFORM_SEC_CAPS@)
gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_LDFLAGS      = \
	$(TOOL_LDFLAGS_@VGCONF_PLATFORM_SEC_CAPS@)
gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_LINK = \
	$(top_builddir)/coregrind/link_tool_exe_@VGCONF_OS@ \
	@VALT_LOAD_ADDRESS_SEC@ \
	$(LINK) \
	$(gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_CFLAGS) \
	$(gleipnir_@VGCONF_ARCH_SEC@_@VGCONF_OS@_LDFLAGS)
endif


