//
//  MPCOptionsForm.h
//  MPC
//
//  Created by Apple on 03/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPCOptionsForm : UIViewController <UITableViewDelegate,UITableViewDataSource,UIGestureRecognizerDelegate>

@property (strong, nonatomic) IBOutlet UITableView *visitTable;
@property (strong, nonatomic) NSDictionary *visitDict;
@property (strong, nonatomic) NSDictionary *visitQuestPost;

@end
