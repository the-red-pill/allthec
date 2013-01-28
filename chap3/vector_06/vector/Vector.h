//
//  Vector.h
//  vector
//
//  Created by Bill Dudney on 7/3/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#ifndef vector_Vector_h
#define vector_Vector_h

struct Vector {
  float x;
  float y;
};
typedef struct Vector Vector;

float VectorLength(Vector vector);

Vector VectorMake(float x, float y);

#endif
