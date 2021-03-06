//
//  InAppDemoViewController.m
//  InAppDemo
//
//  Created by Lailei Huang on 28/07/2014.
//  Copyright (c) 2014 alex.huang. All rights reserved.
//

#import "InAppDemoViewController.h"

@interface InAppDemoViewController ()

@end

@implementation InAppDemoViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    _purchaseController = [[PurchaseViewController alloc] init];
    [[SKPaymentQueue defaultQueue] addTransactionObserver:_purchaseController];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)purchaseItem:(id)sender {
    _purchaseController.productID = @"<Your Product ID Goes HERE>";
    
    [self.navigationController pushViewController:_purchaseController animated:YES];
    [_purchaseController getProductInfo:self];
}

-(void)enableLevel2{
    _level2Button.enabled = YES;
}

@end
