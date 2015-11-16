//
//  SkPublicConfig.h
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import "SkObject.h"

@interface SkPublicConfig : SkObject<NSCoding>

@property (nonatomic, strong) NSNumber      *number;
@property (nonatomic, strong) NSString      *string;
@property (nonatomic, strong) NSDate        *date;
@property (nonatomic, strong) NSArray       *array;
@property (nonatomic, strong) NSDictionary  *dictionary;

@end
