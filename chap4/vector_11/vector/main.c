//
//  main.c
//  vector
//
//  Created by Bill Dudney on 6/22/12.
//  Copyright (c) 2012 Gala Factory Software, LLC. All rights reserved.
//

#include <stdio.h>
#include "Vector.h"
#include <CoreFoundation/CoreFoundation.h>

int main(int argc, const char * argv[]) {
  CFArrayCallBacks vectorCallbacks = {
    0,
    VectorRetainCallback,
    VectorReleaseCallback,
    VectorCopyDescriptionCallback,
    VectorEqualCallback
  };
  
  CFMutableArrayRef vectors = CFArrayCreateMutable(kCFAllocatorDefault,
                                                   4, &vectorCallbacks);
  VectorRef vector1 = VectorCreate(3.0, 4.0);
  VectorRef vector2 = VectorCreate(4.0, 5.0);
  CFArraySetValueAtIndex(vectors, 0, vector1);
  CFArraySetValueAtIndex(vectors, 1, vector2);
  
  CFShow(vectors);
  
  CFRange range = CFRangeMake(0, CFArrayGetCount(vectors));
  Boolean flag = CFArrayContainsValue(vectors,
                                      range,
                                      vector1);
  if(flag) {
    printf("contains the value\n");
  }
  
  VectorRelease(vector1);
  VectorRelease(vector2);
  
  return 0;
}
