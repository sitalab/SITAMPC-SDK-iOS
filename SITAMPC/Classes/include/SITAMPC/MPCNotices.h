//
//  MPCNotices.h
//  MPC
//
//  Created by Apple on 30/05/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPCNotices : UIViewController <UITableViewDelegate,UITableViewDataSource>


@property (strong, nonatomic) NSDictionary *noticesDict;
@property bool showPrcdBtn;
@property (strong, nonatomic) IBOutlet UITableView *noticesTable;
@property (strong, nonatomic) NSArray *noticesItems;
@property (strong, nonatomic) NSString *navTitle;
@end
