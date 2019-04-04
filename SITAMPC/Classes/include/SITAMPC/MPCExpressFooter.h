//
//  MPCExpressFooter.h
//  SITAMPC
//
//  Created by Safaa Khalaf on 4/2/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MPCExpressFooter : UIView
   
@property (weak, nonatomic) IBOutlet UIView *view;
@property (weak, nonatomic) IBOutlet UILabel *leftLabel;
@property (weak, nonatomic) IBOutlet UIView *sepLine;
@property (weak, nonatomic) IBOutlet UIButton *rightButton;


-(void)updateContentWith:(NSMutableDictionary *)footerDic;

@end

NS_ASSUME_NONNULL_END
