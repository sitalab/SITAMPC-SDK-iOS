//
//  MPCSummary.h
//  MPC
//
//  Created by Apple on 07/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPCSummary : UIViewController <UITableViewDelegate,UITableViewDataSource,UIScrollViewDelegate,UIGestureRecognizerDelegate>

@property (strong, nonatomic) IBOutlet UITableView *summaryTable;
@property BOOL isMainPoint;
@property (strong, nonatomic) NSDictionary *summaryDict;


@end
