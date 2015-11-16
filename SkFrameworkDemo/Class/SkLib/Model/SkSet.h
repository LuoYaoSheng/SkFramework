//
//  SkSet.h
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import "SkObject.h"

@interface SkSet : SkObject<NSCoding>

@property (nonatomic, strong) NSNumber *warnMsg;             //新消息提醒
@property (nonatomic, strong) NSNumber *warnRing;            //铃声提醒
@property (nonatomic, strong) NSNumber *warnVibration;       //震动提醒
@property (nonatomic, strong) NSNumber *autoLogin;           //自动密码登录

@end
