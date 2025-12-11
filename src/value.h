#ifndef VALUE_H_
#define VALUE_H_

#include "common.h"

typedef double Value;


#define NUMBER_VAL(value) ((Value){VAL_NUMBER, {.number = value}})
typedef struct {
    int capacity;
    int count;
    Value *values;
} ValueArray;

void initValueArray(ValueArray *array);
void writeValueArray(ValueArray *array, Value value);
void freeValueArray(ValueArray *array);
void printValue(Value value);

#endif // VALUE_H_