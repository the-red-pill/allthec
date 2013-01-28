//
//  main.m
//  PointerTweak
//
//  Created by Bill Dudney on 6/26/12.
//  Copyright (c) 2012 Bill Dudney. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
  @autoreleasepool {
    NSMutableArray *array = [NSMutableArray array];
    NSLog(@"arry as pointer = %p as object = %@", array, array);
    struct Hack {
      Class foo;
    };
    struct Hack *reallyBigHack;
    reallyBigHack = (__bridge struct Hack *)array;
    NSLog(@"class = %@", reallyBigHack->foo);
  }
  return 0;
}

