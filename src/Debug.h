#ifndef debug_h
#define debug_h

#include <stdio.h>
#include "CodeBuffer.h"

void disassembleCodeBuffer(CodeBuffer* buffer);
int disassembleOpCode(CodeBuffer* buffer, int offset);

#endif
