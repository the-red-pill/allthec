//
//  main.c
//  vectorpointers
//
//  Created by Bill Dudney on 6/25/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Vector {
  float x;
  float y;
};
typedef struct Vector Vector;

int main(int argc, const char * argv[]) {
  int vectorCount = 3;
  Vector *vector = (Vector *)malloc(vectorCount * sizeof(Vector));
  for(int i = 0;i < vectorCount;i++) {
    vector[i].x = 42.0 * (i + 1);
    vector[i].y = 13.0 * (i + 1);
  }
  float length[3] = {0.0, 0.0, 0.0};
  
  for(int i = 0;i < 3;i++) {
    length[i] = sqrt((vector + i)->x * vector[i].x +
                     (vector + i)->y * vector[i].y);
    printf("length[%d] = %f\n",i, length[i]);
  }
  free(vector);
  vector = NULL;
  
  return 0;
}
