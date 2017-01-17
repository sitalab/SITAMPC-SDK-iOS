//
//  MPCQuestionForm.h
//  MPC
//
//  Created by Apple on 03/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MPCQuestionForm : UIViewController <UIGestureRecognizerDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;

@property (strong, nonatomic) IBOutlet UILabel *questNum;
@property (strong, nonatomic) IBOutlet UILabel *questFooter;

@property (strong, nonatomic) IBOutlet UIView *questContainer;

@property (strong, nonatomic) IBOutlet UILabel *questText;

@property (strong, nonatomic) IBOutlet UIButton *yesBtn;
@property (strong, nonatomic) IBOutlet UIButton *noBtn;



@property (strong, nonatomic) UIButton *proceed_button;
@property (strong, nonatomic) NSDictionary *questionDict;
@property (strong, nonatomic) NSDictionary *questPost;

@end
