//
//  Vector.h
//  vector
//
//  Created by Bill Dudney on 7/3/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#ifndef vector_Vector_h
#define vector_Vector_h
#include <CoreFoundation/CoreFoundation.h>

typedef struct Vector * VectorRef;

VectorRef VectorCreate(float x, float y);
void VectorRelease(VectorRef vector);

// instance methods

float VectorLength(VectorRef vector);
void VectorSetX(VectorRef vector, float x);
float VectorGetX(VectorRef vector);
void VectorSetY(VectorRef vector, float y);
float VectorGetY(VectorRef vector);
void VectorMultiply(VectorRef vector, float value);
void VectorAdd(VectorRef vector, float value);
void VectorNormalize(VectorRef vector);

#pragma mark - Functions to Add Vectors to a CFArray
const void *VectorRetainCallback(CFAllocatorRef allocator, const void *value);
void VectorReleaseCallback(CFAllocatorRef allocator, const void *value);
CFStringRef VectorCopyDescriptionCallback(const void *value);
Boolean VectorEqualCallback(const void *value1, const void *value2);

#endif
