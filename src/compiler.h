#ifndef COMPILER_H_
#define COMPILER_H_

#include "chunk.h"
#include "common.h"
#include "value.h"

bool compile(const char* source, Chunk* chunk);

#define UINT8_COUNT (UINT8_MAX + 1)

#endif // COMPILER_H_