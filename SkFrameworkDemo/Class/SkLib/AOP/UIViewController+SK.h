//
//  UIViewController+SK.h
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (SK)
#warning  运行时 改变一下方法 做一些切面编程比如 统计 等等

//广播使用
@property (nonatomic, strong) NSDictionary *notification;
//通用事件
- (void)backAction;
- (void)doubleAction;
@end
