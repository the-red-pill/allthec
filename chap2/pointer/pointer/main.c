//
//  main.c
//  pointer
//
//  Created by Bill Dudney on 6/25/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  int meaning = 42;
  int *meaningPointer = &meaning;
  printf("the value = %d address of meaning = %p the pointer = %p\n",
                    meaning, &meaning, meaningPointer);
  meaning = 57;
  printf("the value = %d the value pointed to = %d\n", meaning, *meaningPointer);
  *meaningPointer = 32;
  printf("the value = %d the value pointed to = %d\n", meaning, *meaningPointer);
  return 0;
}

