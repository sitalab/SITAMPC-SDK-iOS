//
//  MPCReceiptPage.h
//  
//
//  Created by Apple on 17/06/16.
//
//

#import <UIKit/UIKit.h>

@interface MPCReceiptPage : UIViewController


@property (assign, nonatomic) NSInteger index;
@property (strong, nonatomic) IBOutlet UIScrollView *pageScroll;
@property (strong, nonatomic) NSString *receiptText;
@property (strong, nonatomic) UILabel *usLabel;

@end
