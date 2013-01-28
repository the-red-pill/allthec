//
//  Vector.c
//  vector
//
//  Created by Bill Dudney on 7/3/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Vector.h"

struct Vector {
  float x;
  float y;
};

VectorRef VectorCreate(float x, float y) {
  VectorRef vector = (VectorRef)calloc(sizeof(struct Vector), 1);
  vector->x = x;
  vector->y = y;
  return vector;
}

void VectorRelease(VectorRef vector) {
  free((void *)vector);
}

float VectorLength(VectorRef vector) {
  float length = sqrt(vector->x * vector->x +
                      vector->y * vector->y);
  return length;
}

void VectorSetX(VectorRef vector, float x) {
  vector->x = x;
}

float VectorGetX(VectorRef vector) {
  return vector->x;
}

void VectorSetY(VectorRef vector, float y) {
  vector->y = y;
}

float VectorGetY(VectorRef vector) {
  return vector->y;
}

void VectorMultiply(VectorRef vector, float value) {
  vector->x *= value;
  vector->y *= value;
}

void VectorAdd(VectorRef vector, float value) {
  vector->x += value;
  vector->y += value;
}

void VectorNormalize(VectorRef vector) {
  float length = VectorLength(vector);
  vector->x /= length;
  vector->y /= length;
}

#pragma mark - CFArray Callback Methods

const void *VectorRetainCallback(CFAllocatorRef allocator, const void *value) {
  VectorRef inVector = (VectorRef)value;
  VectorRef vector = VectorCreate(VectorGetX(inVector), VectorGetY(inVector));
  return (const void *)vector;
}

void VectorReleaseCallback(CFAllocatorRef allocator, const void *value) {
  VectorRelease((VectorRef)value);
}

CFStringRef VectorCopyDescriptionCallback(const void *value) {
  VectorRef vector = (VectorRef)value;
  return CFStringCreateWithFormat(kCFAllocatorDefault,
                                  NULL,
                                  CFSTR("{%g, %g}"),
                                  VectorGetX(vector),
                                  VectorGetY(vector));
}

Boolean VectorEqualCallback(const void *value1, const void *value2) {
  Boolean flag = true;
  if(value1 != value2) {
    VectorRef v1 = (VectorRef)value1;
    VectorRef v2 = (VectorRef)value2;
    if(!(fabs(VectorGetX(v1) - VectorGetX(v2)) < 0.0001 &&
         fabs(VectorGetY(v1) - VectorGetY(v2)) < 0.0001)) {
      flag = false;
    }
  }
  return flag;
}

