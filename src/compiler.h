#ifndef COMPILER_H_
#define COMPILER_H_

#include "chunk.h"
#include "common.h"
#include "value.h"

bool compile(const char* source, Chunk* chunk);



#endif // COMPILER_H_