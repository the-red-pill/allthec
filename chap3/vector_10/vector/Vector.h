//
//  Vector.h
//  vector
//
//  Created by Bill Dudney on 7/3/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#ifndef vector_Vector_h
#define vector_Vector_h

typedef struct Vector * VectorRef;

VectorRef VectorCreate(float x, float y);

// instance methods

float VectorLength(VectorRef vector);
void VectorSetX(VectorRef vector, float x);
void VectorSetY(VectorRef vector, float y);
void VectorMultiply(VectorRef vector, float value);
void VectorAdd(VectorRef vector, float value);
void VectorNormalize(VectorRef vector);

#endif
