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

float VectorLength(VectorRef vector) {
  float length = sqrt(vector->x * vector->x +
                      vector->y * vector->y);
  return length;
}

VectorRef VectorCreate(float x, float y) {
  VectorRef vector = (VectorRef)calloc(sizeof(struct Vector), 1);
  vector->x = x;
  vector->y = y;
  return vector;
}

void VectorSetX(VectorRef vector, float x) {
  vector->x = x;
}

void VectorSetY(VectorRef vector, float y) {
  vector->y = y;
}
