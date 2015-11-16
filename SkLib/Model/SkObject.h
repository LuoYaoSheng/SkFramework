//
//  SkObject.h
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SkObject : NSObject<NSCoding>

+ (instancetype)sharedInstance;
- (void)copyWithOtherObject:(SkObject *)pObject;

- (void)encodeWithCoder:(NSCoder *)aCoder;
- (id)initWithCoder:(NSCoder *)aDecoder;

@end
