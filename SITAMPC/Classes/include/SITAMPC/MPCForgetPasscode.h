//
//  MPCForgetPasscode.h
//  MPC
//
//  Created by Apple on 21/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MPCForgetPasscode : UIViewController <UIAlertViewDelegate>
@property bool presentedFromRoot;
@property (strong,nonatomic) NSString *state;
@end
