#ifndef VM_H_
#define VM_H_

#include "chunk.h"
#include "common.h"
#define STACK_MAX 256
#include "object.h"
#include "table.h"
typedef struct {
  Chunk *chunk;
  uint8_t *ip;
  Value stack[STACK_MAX];
  Value *stackTop;
  Table strings;
  Obj *objects;
} VM;

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR
} InterpretResult;

extern VM vm;

void initVM();
void freeVM();
InterpretResult interpret(const char *source);

void push(Value value);
Value pop();

#endif // VM_H_