//
//  ViewController.m
//  AdsView
//
//  Created by Superman on 2018/7/8.
//  Copyright © 2018年 Superman. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor brownColor];
    [self performSelector:@selector(showAdsView)
               withObject:nil
               afterDelay:2];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
