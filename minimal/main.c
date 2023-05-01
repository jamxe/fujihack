#include <stdio.h>
#include <string.h>
#include <stdint.h>

#include <fujihack.h>
#include <io.h>
#include <rst.h>
#include <sqlite.h>
#include <screen.h>

typedef void func(void);

void entry() {
	func* f = (func*)fh_load();
	if (f == 0) {
		SCREENDBG("Fujihack Load Error");
	} else {
		f();
	}
}
