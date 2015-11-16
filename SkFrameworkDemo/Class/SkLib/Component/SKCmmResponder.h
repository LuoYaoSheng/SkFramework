//
//  SKCmmResponder.h
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SkCmmObject.h"

@protocol SKCmmResponderDelegate;

@interface SKCmmResponder : UIButton

@property (nonatomic, strong) id object;                                   
@property (nonatomic) float percentage;                                    //针对图片特殊处理
@property (nonatomic, assign) id <SKCmmResponderDelegate > delegate;

- (void)setObject:(id)object;
- (void)btnAction:(id)sender;
- (void)componentAction:(SkCmmObject *)object;
+ (void)componentAction:(SkCmmObject *)object;
//扩张
- (id)initWithFrame:(CGRect)frame percentage:(float)per;                   //针对图片特殊处理

//获取该对象的高度
+ (float)cmmHeightWithWidth:(float)pWidth param:(id)param font:(UIFont *)font;
+ (float)cmmHeightWithWidth:(float)pWidth param:(id)param;
+ (float)cmmHeightWithWidth:(float)pWidth;
+ (float)cmmHeightWithParam:(id)param;
+ (float)cmmHeight;
@end

@protocol SKCmmResponderDelegate<NSObject>
@optional
- (void)delegate_Component:(id)param cmm:(id)cmm;
@end
