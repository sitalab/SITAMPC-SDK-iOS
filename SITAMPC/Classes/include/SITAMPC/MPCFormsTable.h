//
//  MPCFormsTable.h
//  MPC
//
//  Created by Apple on 04/08/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPCFormsTable : UIViewController <UITableViewDelegate,UITableViewDataSource,UIGestureRecognizerDelegate>

@property (strong, nonatomic) IBOutlet UITableView *formsTable;
@property (strong, nonatomic) NSMutableArray *formTemplatesArray;

@property (strong, nonatomic) NSString *btnAction;

@end
