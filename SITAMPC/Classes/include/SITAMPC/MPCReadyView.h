//
//  MPCReadyView.h
//  
//
//  Created by Apple on 15/06/16.
//
//

#import <UIKit/UIKit.h>

@interface MPCReadyView : UIViewController <UITableViewDelegate,UITableViewDataSource,UIGestureRecognizerDelegate,NSURLSessionDelegate>

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *btmRelativeToExpress;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *btmRelativeToEdge;
@property (weak, nonatomic) IBOutlet MPCExpressFooter *expressFooter;

@property (strong, nonatomic) IBOutlet UITableView *readyTable;
@property BOOL isMainPoint;
@property (strong, nonatomic) NSDictionary *readyDict; 

@end
