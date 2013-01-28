//
//  main.c
//  bittweak
//
//  Created by Bill Dudney on 6/22/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
  int upper = 2147483647;
  printf("bits of upper -> ");
  for(int i = 31;i >= 0;i--){
    int test = (int)pow(2,i);
    int bit = (upper & test);
    printf("%c", (bit == 0 ? '0' : '1'));
    if(0 == (i % 8) && i > 0) {
      printf("-");
    }
  }
  unsigned int upperU = (unsigned int)upper;
  printf("\n");
  printf("upper as 'int' = %d\n", upper);
  printf("upperU as 'unsigned int' = %d\n", upperU);
  return 0;
}

