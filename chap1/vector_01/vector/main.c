//
//  main.c
//  vector
//
//  Created by Bill Dudney on 6/22/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  float deltaX = 3.0;
  float deltaY = 4.0;
  float length = sqrt(deltaX * deltaX + deltaY * deltaY);
  printf("length = %f\n", length);
  return 0;
}
