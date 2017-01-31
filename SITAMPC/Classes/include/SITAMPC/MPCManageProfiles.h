//
//  MPCManageProfiles.h
//  MPC
//
//  Created by Apple on 03/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPCManageProfiles : UIViewController <UITableViewDataSource,UITableViewDelegate,UIActionSheetDelegate,UIAlertViewDelegate,UIGestureRecognizerDelegate>


@property (strong, nonatomic) UIAlertController *addAlertAction;
@property (strong, nonatomic) IBOutlet UITableView *paxTable;
@property bool showProceedBtn;
@property bool allowEdit;
@property bool showMPCProfiles;
@property (strong, nonatomic) NSDictionary *paxScreenDict;
 

@end
