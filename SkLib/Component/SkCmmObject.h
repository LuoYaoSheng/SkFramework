//
//  SkCmmObject.h
//  SkLib
//
//  Created by 罗耀生 on 15/11/13.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import "SkObject.h"

typedef NS_OPTIONS(NSUInteger, SkCmmState) {
    SkCmmStateNo       = 0,           //无跳转操作
    SkCmmStatePush     = 1 << 0,
    SkCmmStatePresent  = 1 << 1,
    SkCmmStateBack     = 1 << 2,
    SkCmmStateRoot     = 1 << 3,      //直接返回rootview
};

@interface SkCmmObject : SkObject

@property (nonatomic, assign) NSInteger         mSkIndex;               //索引
@property (nonatomic, strong) NSString          *mSkClassName;          //类名
@property (nonatomic, strong) NSString          *mSkTitle;              //标题
@property (nonatomic, assign) SkCmmState        mSkSate;                //状态
@property (nonatomic, strong) id                mSkExtend;              //延伸--- 例如：webview时候的url，其他情况的dic

@end