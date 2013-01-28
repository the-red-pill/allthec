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
  VectorRef vector = VectorCreate(3.0, 4.0);
  printf("vector length = %f\n",
         VectorLength(vector));
  VectorSetX(vector, 5.0);
  printf("updated vector length = %f\n",
         VectorLength(vector));
  return 0;
}
