//
//  BViewController.m
//  SkFrameworkDemo
//
//  Created by 罗耀生 on 15/11/16.
//  Copyright © 2015年 罗耀生. All rights reserved.
//

#import "BViewController.h"

#define IOS7_OR_LATER		( [[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )
#define SK_NAV_HIGHT                        (IOS7_OR_LATER?64:44)

@interface BViewController ()

@end

@implementation BViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    self.title = @"页面B";
    
    [self UI_init_nav];
    [self UI_init_webView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)UI_init_nav
{
    UIButton *btnAdd = [[UIButton alloc]initWithFrame:CGRectMake( 0.f, 0, 40.f, 20.f)];
    [btnAdd addTarget:self action:@selector(btnAction:) forControlEvents:UIControlEventTouchUpInside];
    [btnAdd setTitle:@"返回" forState:UIControlStateNormal];
    
    UIBarButtonItem *rightBtn = [[UIBarButtonItem alloc]initWithCustomView:btnAdd ];
    self.navigationItem.rightBarButtonItem = rightBtn;
}
- (void)UI_init_webView
{
    NSLog(@"参数--%@", self.notification );
    
    CGRect frame = self.view.bounds;
    frame.size.height -= SK_NAV_HIGHT;
    UIWebView *webView = [[UIWebView alloc] initWithFrame: frame ];
    [self.view addSubview: webView];
    
    SkCmmObject *param = [self.notification objectForKey: SK_Notification_param ];
    NSString *title = param.mSkTitle;
    NSString *url = param.mSkExtend;
    self.title = title;
    NSURLRequest *request =[NSURLRequest requestWithURL:[NSURL URLWithString: url ]];
    [webView loadRequest:request];
}
#pragma mark - action
- (void)btnAction:(id)sender
{
    //利用sk 返回
    SkCmmObject *object = [[SkCmmObject alloc]init];
    object.mSkSate = SkCmmStateBack;
    
    [SKCmmResponder componentAction: object];
}

@end
