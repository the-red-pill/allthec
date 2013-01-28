//
//  main.c
//  vector
//
//  Created by Bill Dudney on 6/22/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>

struct Vector {
  float x;
  float y;
};
typedef struct Vector Vector;

float VectorLength(Vector vector) {
  float length = sqrt(vector.x * vector.x +
                      vector.y * vector.y);
  return length;
}

int main(int argc, const char * argv[]) {
  Vector vector = {3.0, 4.0};
  float length = VectorLength(vector);
  printf("length = %f\n", length);
  return 0;
}

