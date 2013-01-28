//
//  main.c
//  valuetweak
//
//  Created by Bill Dudney on 6/22/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  int upper = 2147483647;
  printf("upper as 'int' = %d\n", upper);
  
  unsigned int upperU = (unsigned int)upper;
  printf("upper as 'unsigned int' = %u", upperU);
  
  return 0;
}