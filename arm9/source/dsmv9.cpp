#include <nds.h>
#include <stdio.h>
#include "dsmv.h"

// DSMV ARM9 CORE //

int main() {
	touchPosition touch;

	consoleDemoInit();

	iprintf("DSMV ENGINE\n");
	iprintf("NOTHING WORKS YET BTW\n");
	iprintf("%04i",TEST_NUM);
	
	while(pmMainLoop()) {
		
		swiWaitForVBlank();
		scanKeys();

		if (keysHeld()&KEY_TOUCH) {
			touchRead(&touch);
			//iprintf("\x1b[10;0HTouch x = %04i, %04i\n", touch.rawx, touch.px);
			//iprintf("Touch y = %04i, %04i\n", touch.rawy, touch.py);
		}

	}

	return 0;
}
