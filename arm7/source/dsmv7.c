#include <nds.h>
#include <calico.h>
#include "dsmv.h"

// DSMV ARM7 CORE //

int main() {
	lcdSetIrqMask(DISPSTAT_IE_ALL, DISPSTAT_IE_VBLANK);
	irqEnable(IRQ_VBLANK);
	
	pmInit();
	
	touchInit();
	touchStartServer(80, MAIN_THREAD_PRIO);
	
	while (pmMainLoop()) {
		threadWaitForVBlank();
	}

	return 0;
}
