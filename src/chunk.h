#ifndef CHUNK_H_
#define CHUNK_H_

#include "common.h"
#include "memory.h"
#include "value.h"

typedef enum {
    OP_CONSTANT,// 常量
    OP_RETURN,// 从函数返回
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t *code;
    int *lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte, int line);
int addConstant(Chunk *chunk, Value value);
#endif // CHUNK_H_  