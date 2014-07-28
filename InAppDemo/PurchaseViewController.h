//
//  PurchaseViewController.h
//  InAppDemo
//
//  Created by Lailei Huang on 28/07/2014.
//  Copyright (c) 2014 alex.huang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h>
#import "InAppDemoViewController.h"

@interface PurchaseViewController : UIViewController <SKPaymentTransactionObserver, SKProductsRequestDelegate>

@property (strong, nonatomic) IBOutlet UILabel *productTitle;

@property (strong, nonatomic) IBOutlet UITextView *productDescription;

@property (strong, nonatomic) IBOutlet UIButton *buyButton;

@property (strong, nonatomic) SKProduct *product;
@property (strong, nonatomic) NSString *productID;

-(void)getProductInfo:(InAppDemoViewController *)viewController;
-(IBAction)buyProduct:(id)sender;

@end
