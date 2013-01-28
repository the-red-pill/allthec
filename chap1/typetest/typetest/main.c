//
//  main.c
//  typetest
//
//  Created by Bill Dudney on 6/22/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  printf("char %lu\n", sizeof(char));
  printf("short %lu\n", sizeof(short));
  printf("int %lu\n", sizeof(int));
  printf("long %lu\n", sizeof(long));
  printf("long long %lu\n", sizeof(long long));
  printf("float %lu\n", sizeof(float));
  printf("double %lu\n", sizeof(double));
  printf("long double %lu\n", sizeof(long double));
  return 0;
}
