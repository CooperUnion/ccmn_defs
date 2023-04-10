#ifndef NODE_PINS_H
#define NODE_PINS_H

#ifdef NODE_BOARD_1V1
#include "node-1.1.h"
#define NODE_BOARD_PINS_DEFINED
#endif

#ifdef NODE_BOARD_1V2
#include "node-1.2.h"
#define NODE_BOARD_PINS_DEFINED
#endif

#ifdef NODE_BOARD_2V0A
#include "node-2.0A.h"
#define NODE_BOARD_PINS_DEFINED
#endif

#ifdef NODE_BOARD_2V0B
#include "node-2.0B.h"
#define NODE_BOARD_PINS_DEFINED
#endif


#ifndef NODE_BOARD_PINS_DEFINED
#error "No node board pins were selected; check that NODE_BOARD_XXXX is defined."
#endif

#endif
