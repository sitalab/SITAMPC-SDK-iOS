//
//  MPCTripsManager.h
//  MPC
//
//  Created by Apple on 02/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface MPCTripsManager : NSObject

-(UIButton*)customButtonWithFrame:(CGRect)frame title:(NSString*)title;
-(UIView *)customNavTitle:(CGRect)viewFrame lbl1:(NSString*)lbl1 lbl2:(NSString*)lbl2 textColor:(UIColor *)color;
-(BOOL) isValidObject:(id)parameter expectedClass:(__unsafe_unretained Class)expectedClass;
-(CGSize)getTextSize:(NSString *)text AndFontName:(NSString *)font AndSize:(float)size AndContainer:(CGSize)container;

 
@property (strong, nonatomic) UIViewController *viewID;
-(void)handlePassCode:(UIViewController *)viewID;
@property  BOOL profilePasscodeEntered;

-(void)removePasswordNotif;
-(NSDictionary *)parseNotices:(NSString *)noticesElement;

@end
