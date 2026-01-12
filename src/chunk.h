#ifndef CHUNK_H_
#define CHUNK_H_

#include "common.h"
#include "memory.h"
#include "value.h"

typedef enum {
    OP_CONSTANT,// 常量
    OP_NIL,// 空值 nil
    OP_TRUE,// 布尔值 true
    OP_FALSE,// 布尔值 false
    OP_EQUAL,
    OP_GREATER,
    OP_LESS,
    OP_ADD,// 加法
    OP_SUBTRACT,// 减法
    OP_MULTIPLY,// 乘法
    OP_DIVIDE,// 除法
    OP_NOT,// 取反
    OP_NEGATE,// 取负
    OP_PRINT,// 打印
    OP_JUMP,// 跳转
    OP_JUMP_IF_FALSE,// 跳过 if 语句
    OP_POP,// 弹出栈顶值
    OP_GET_LOCAL,// 获取局部变量
    OP_SET_LOCAL,// 设置局部变量
    OP_DEFINE_GLOBAL,// 定义全局变量
    OP_GET_GLOBAL,// 获取全局变量
    OP_SET_GLOBAL,// 设置全局变量
    OP_LOOP,
    // OP_EQUAL,// 等于
    // OP_GREATER,// 大于
    // OP_LESS,// 小于
    // OP_GREATER_EQUAL,// 大于等于
    // OP_LESS_EQUAL,// 小于等于
    // OP_NOT_EQUAL,// 不等于
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