//
//  MPCPermissionsView.h
//  ACA
//
//  Created by Apple on 8/12/15.
//  Copyright (c) 2015 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPCPermissionsView : UIViewController <UIAlertViewDelegate>
@property (strong, nonatomic) IBOutlet UIScrollView *permissionScroll;

@property (strong, nonatomic) IBOutlet UIImageView *headerImage;
@property (strong, nonatomic) IBOutlet UIView *btnView;
@property (strong, nonatomic) IBOutlet UIImageView *btnImage;
@property (strong, nonatomic) IBOutlet UILabel *permissionName;
@property (strong, nonatomic) IBOutlet UILabel *permissionDescription;
@property (strong, nonatomic) IBOutlet UIButton *option1;
@property (strong, nonatomic) IBOutlet UIButton *option2;


@property (strong, nonatomic) NSString *permissionType;




@end
