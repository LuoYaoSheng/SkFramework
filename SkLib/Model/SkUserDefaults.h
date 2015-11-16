//
//  SkUserDefaults.h
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SkSet.h"
#import "SkUser.h"
#import "SkPublicConfig.h"

@interface SkUserDefaults : NSObject

+ (void)writeIsLogin:(BOOL)pIsLogin;
+ (BOOL)readIsLogin;

+ (void)writeObject:(SkObject *)pObject;

+ (SkSet *)readSet;
+ (SkUser *)readUser;
+ (SkPublicConfig *)readPublicConfig;

@end
