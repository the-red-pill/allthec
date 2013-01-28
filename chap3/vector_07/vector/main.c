//
//  main.c
//  vector
//
//  Created by Bill Dudney on 6/22/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include "Vector.h"

int main(int argc, const char * argv[]) {
  Vector vector = VectorMake(3.0, 4.0);
  float length = VectorLength(vector);
  printf("length = %f\n", length);
  VectorSetX(vector, 5.0);
  printf("vector.x = %f\n", vector.x);
  
  return 0;
}
