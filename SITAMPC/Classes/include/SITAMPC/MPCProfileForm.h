//
//  MPCProfileForm.h
//  MPC
//
//  Created by Apple on 30/05/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import "XLFormViewController.h"


@interface MPCProfileForm : XLFormViewController <UIImagePickerControllerDelegate,UINavigationControllerDelegate,UIAlertViewDelegate,UIGestureRecognizerDelegate>

@property(nonatomic,retain) NSString *action;
@property(nonatomic,retain) NSDictionary *editPaxDict;
@property(nonatomic,retain) NSDictionary *scanPassDict;
@property(nonatomic,assign) BOOL fieldsChanged;
@property(nonatomic,assign) BOOL editNationality;
@property(nonatomic,strong) NSString *timestamp;
@property(nonatomic,strong) NSString *duration;


@end
