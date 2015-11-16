//
//  SkUser.h
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import "SkObject.h"

@interface SkUser : SkObject<NSCoding>

@property (nonatomic, strong) NSString *uid;            //	用户号
@property (nonatomic, strong) NSString *mobile;         //	手机号
@property (nonatomic, strong) NSString *lname;          //	登录名
@property (nonatomic, strong) NSString *pwd;            //	用户密码
@property (nonatomic, strong) NSString *uname;          //	昵称
@property (nonatomic, strong) NSString *avatar;         //	头像
@property (nonatomic, strong) NSNumber *sex;            //	性别	int	男：1，女：0
@property (nonatomic, strong) NSString *birthday;       //	生日	date	格式：yyyy-mm-dd
@property (nonatomic, strong) NSNumber *vip;            //	是否VIP
@property (nonatomic, strong) NSString *area;           //	所在地区
@property (nonatomic, strong) NSString *key;            //	用户密钥	string
@property (nonatomic, strong) NSString *signature;      //	用户签名	string
@property (nonatomic, strong) NSString *date;           //	注册时间	date

@property (nonatomic, strong) NSDictionary *extend;     //	用户扩展信息

@end
