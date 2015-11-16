//
//  SkUserDefaults.m
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import "SkUserDefaults.h"

@implementation SkUserDefaults

+ (void)writeIsLogin:(BOOL)pIsLogin
{
    NSUserDefaults *userDefault = [NSUserDefaults standardUserDefaults];
    [userDefault setObject:[NSNumber numberWithInteger:pIsLogin] forKey:@"isLogin"];
    [userDefault synchronize];
}
+ (BOOL)readIsLogin
{
    NSUserDefaults *userDefault = [NSUserDefaults standardUserDefaults];
    return [[userDefault objectForKey:@"isLogin"] boolValue];
}

+ (void)writeObject:(SkObject *)pObject
{
    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:pObject];
    NSUserDefaults *user = [NSUserDefaults standardUserDefaults];
    [user setObject:data forKey: [[pObject class] description] ];
}

+ (SkObject *)readObject:(NSString *)pObjectName
{
    NSUserDefaults *user = [NSUserDefaults standardUserDefaults];
    NSData *data = [user objectForKey: pObjectName ];
    return nil==data?nil:[NSKeyedUnarchiver unarchiveObjectWithData:data];
}
+ (SkSet *)readSet
{
    return (SkSet *)[SkUserDefaults readObject:@"SkSet"];
}

+ (SkUser *)readUser
{
    return (SkUser *)[SkUserDefaults readObject:@"SkUser"];
}

+ (SkPublicConfig *)readPublicConfig
{
    return (SkPublicConfig *)[SkUserDefaults readObject:@"SkPublicConfig"];
}

@end
