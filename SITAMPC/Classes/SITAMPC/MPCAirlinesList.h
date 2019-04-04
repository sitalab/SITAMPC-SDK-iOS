//
//  MPCAirlinesList.h
//  ACA
//
//  Created by Apple on 6/22/15.
//  Copyright (c) 2015 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AirlineDelegate;
@interface MPCAirlinesList : UIViewController<UITableViewDataSource,UITableViewDelegate,UISearchBarDelegate>

@property (nonatomic, assign) id <AirlineDelegate> delegate;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *btmConstraint;

@property (strong, nonatomic) IBOutlet UITableView *tv;
@property (strong, nonatomic) UISearchBar *uisearchBar;

@end

@protocol AirlineDelegate <NSObject>
- (void) airlineSelected: (NSDictionary *)airlineDic;
@end
