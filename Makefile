

all: CONFIGURATION.inc Makefile modules

CONFIGURATION.inc:
	bash manuallyeditconfig.inc

Makefile:
	git pull
	touch Makefile

modules: Makefile
	cd modules; make

