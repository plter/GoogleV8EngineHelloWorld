//
// Created by plter on 5/12/15.
//

#ifndef HELLOCPP_MYALLOCATOR_H
#define HELLOCPP_MYALLOCATOR_H

#include "include/v8.h"


class MyAllocator: public v8::ArrayBuffer::Allocator {

public:
    virtual void *AllocateUninitialized(size_t length);

    virtual void Free(void *data, size_t length);

    virtual void *Allocate(size_t length);
};


#endif //HELLOCPP_MYALLOCATOR_H
