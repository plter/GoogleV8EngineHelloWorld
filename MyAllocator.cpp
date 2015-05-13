//
// Created by plter on 5/12/15.
//

#include <string.h>
#include <stdlib.h>
#include "MyAllocator.h"

void *MyAllocator::Allocate(size_t length) {
    void* data = AllocateUninitialized(length);
    return data == NULL ? data : memset(data, 0, length);
}

void *MyAllocator::AllocateUninitialized(size_t length) {
    return malloc(length);
}

void MyAllocator::Free(void *data, size_t length) {
    free(data);
}
