#pragma once

// from: https://github.com/nihilus/hexrays_tools/blob/master/code/defs.h

#define _LOBYTE(x)   (*((Uint8*)&(x)))   // low byte
#define BYTEn(x, n)   (*((Uint8*)&(x)+n))
#define BYTE1(x)   BYTEn(x,  1)         // byte 1 (counting from 0)
