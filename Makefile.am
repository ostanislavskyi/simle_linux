AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = simple
simple_SOURCES = main.c func.c
include_HEADERS = func.h


clean-all:
	@rm config.status configure config.log
	@rm Makefile
	@rm -rf autom4te.cache/
	@rm aclocal.m4
	@rm compile install-sh missing Makefile.in
	@rm -rf .deps depcomp
	@rm $(bin_PROGRAMS)
	@rm *.o
	@rm -f $(bindir)/$(bin_PROGRAMS)
	@rm -f $(includedir)/$(include_HEADERS)