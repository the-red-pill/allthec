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

typedef void (*VectorFunction)(VectorRef vector, float value);

void VectorMessage(VectorRef vector, char *cmd, float value) {
  VectorFunction function = NULL;
  if(strncmp("Add", cmd, 3)) {
    function = VectorAdd;
  } else if(strncmp("Multiply", cmd, 8)) {
    function = VectorMultiply;
  }
  function(vector, value);
}

int main(int argc, const char * argv[]) {
  VectorRef vector = VectorCreate(3.0, 4.0);
  VectorMessage(vector, "Add", 4.0);
  printf("{%g, %g}\n", VectorGetX(vector), VectorGetY(vector));
  VectorMessage(vector, "Multiply", 3.0);
  printf("{%g, %g}\n", VectorGetX(vector), VectorGetY(vector));
  return 0;
}
