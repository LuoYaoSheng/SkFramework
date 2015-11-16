//
//  SkSet.m
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import "SkSet.h"

@implementation SkSet

+ (instancetype)sharedInstance
{
    NSString *className = [NSString stringWithFormat:@"%@", [self class] ];
    Class class = NSClassFromString( className );
    static dispatch_once_t once;
    static id singleton;
    dispatch_once(&once, ^ {
        singleton = [[class alloc] init];
    });
    return singleton;
}

@end
