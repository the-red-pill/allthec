//
//  main.c
//  vector
//
//  Created by Bill Dudney on 6/22/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include "Vector.h"
#include <CoreFoundation/CoreFoundation.h>

int main(int argc, const char * argv[]) {
  void (*VectorFunction)(VectorRef vector, float value);
  VectorFunction = VectorMultiply;
  VectorRef vector = VectorCreate(3.0, 4.0);
  VectorFunction(vector, 4.0);
  printf("{%g, %g}\n", VectorGetX(vector), VectorGetY(vector));
  VectorFunction = VectorAdd;
  (*VectorFunction)(vector, 3.0);
  printf("{%g, %g}\n", VectorGetX(vector), VectorGetY(vector));
  return 0;
}
