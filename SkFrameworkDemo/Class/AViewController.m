//
//  AViewController.m
//  SkFrameworkDemo
//
//  Created by 罗耀生 on 15/11/16.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import "AViewController.h"

@interface AViewController ()

@end

@implementation AViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];
    self.title = @"页面A";

    UIButton *btn = [[UIButton alloc]initWithFrame: self.view.bounds];
    [self.view addSubview: btn];
    [btn setTitle:@"利用SK进行跳转" forState:UIControlStateNormal];
    [btn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(btnAction:) forControlEvents:UIControlEventTouchUpInside];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - action
- (void)btnAction:(id)sender
{
    SkCmmObject *object = [[SkCmmObject alloc]init];
    object.mSkSate = SkCmmStatePush;
    object.mSkClassName = @"BViewController";
    object.mSkExtend = @"http://www.ilivingthebestlife.com/";
    object.mSkTitle = @"传递参数并修改标题";
    
    [SKCmmResponder componentAction: object];
}

@end
