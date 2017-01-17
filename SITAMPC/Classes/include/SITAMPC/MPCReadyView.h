//
//  MPCReadyView.h
//  
//
//  Created by Apple on 15/06/16.
//
//

#import <UIKit/UIKit.h>

@interface MPCReadyView : UIViewController <UITableViewDelegate,UITableViewDataSource,UIGestureRecognizerDelegate,NSURLSessionDelegate>

@property (strong, nonatomic) IBOutlet UITableView *readyTable;
@property (strong, nonatomic) NSDictionary *readyDict;
@property (strong, nonatomic) NSString *randomIdentifier;

@end
