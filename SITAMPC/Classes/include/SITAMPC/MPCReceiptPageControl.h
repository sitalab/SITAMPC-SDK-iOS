//
//  RecieptPageControl.h
//  MPC
//
//  Created by Apple on 17/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPCReceiptPageControl : UIViewController <UIPageViewControllerDataSource,UIActionSheetDelegate,UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *containerScroll;
@property (strong, nonatomic) UIPageViewController *pageController;
@property BOOL isMainPoint;
@property (strong, nonatomic) NSDictionary *receiptDict;


@end
