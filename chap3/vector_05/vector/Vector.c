//
//  Vector.c
//  vector
//
//  Created by Bill Dudney on 7/3/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include "Vector.h"

float VectorLength(Vector vector) {
  float length = sqrt(vector.x * vector.x +
                      vector.y * vector.y);
  return length;
}
