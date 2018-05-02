//
//  MPCAirlinesList.h
//  ACA
//
//  Created by Apple on 6/22/15.
//  Copyright (c) 2015 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MPCAirlinesList : UIViewController<UITableViewDataSource,UITableViewDelegate,UISearchBarDelegate>
 
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *btmConstraint;

@property (strong, nonatomic) IBOutlet UITableView *tv;
@property (strong, nonatomic) UISearchBar *uisearchBar;

@end
