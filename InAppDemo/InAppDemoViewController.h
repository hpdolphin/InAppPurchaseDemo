//
//  InAppDemoViewController.h
//  InAppDemo
//
//  Created by Lailei Huang on 28/07/2014.
//  Copyright (c) 2014 alex.huang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <StoreKit/StoreKit.h>
#import "PurchaseViewController.h"

@interface InAppDemoViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIButton *level2Button;
@property (strong, nonatomic) PurchaseViewController *purchaseController;

-(void)enableLevel2;
- (IBAction)purchaseItem:(id)sender;

@end
