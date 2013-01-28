//
//  Vector.c
//  vector
//
//  Created by Bill Dudney on 7/3/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "Vector.h"

float VectorLength(Vector vector) {
  float length = sqrt(vector.x * vector.x +
                      vector.y * vector.y);
  return length;
}

Vector VectorMake(float x, float y) {
  Vector vector;
  vector.x = x;
  vector.y = y;
  return vector;
}

void VectorSetX(Vector *vector, float x) {
  vector->x = x;
}

void VectorPointerExperiment(Vector *vector) {
  printf("vector = %p\n", vector);
  Vector newVector = VectorMake(4.0, 5.0);
  vector = &newVector;
  printf("modified vector = %p\n", vector);
}