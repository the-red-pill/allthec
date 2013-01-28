//
//  main.c
//  vectorpointers
//
//  Created by Bill Dudney on 6/25/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>

struct Vector {
  float x;
  float y;
};
typedef struct Vector Vector;

int main(int argc, const char * argv[]) {
  Vector vector[3] = {
    {42.0, 13.0},
    {84.0, 26.0},
    {126.0, 39.0}
  };
  float length[3] = {0.0, 0.0, 0.0};
  
  for(int i = 0;i < 3;i++) {
    length[i] = sqrt((vector + i)->x * vector[i].x +
                     (vector + i)->y * vector[i].y);
    printf("length[%d] = %f\n",i, length[i]);
  }
  
  return 0;
}
