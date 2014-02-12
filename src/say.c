#include <config.h>
#include <stdio.h>>

#include "gettext.h"
#define _(string) gettext (string)

void say_hello () {
	printf(_("Hello World!\n"));
	printf(_("This is %s.\n"), PACKAGE_STRING);
}