

all: modules

CONFIGURATION.inc:
	bash manuallyeditconfig.inc

Makefile: CONFIGURATION.inc
	git pull

modules: Makefile
	cd modules; make
	touch Makefile
