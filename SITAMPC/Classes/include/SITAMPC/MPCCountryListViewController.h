//
//  MPCCountryListViewController.h
//  SITAMPC
//
//  Created by Apple on 6/5/15.
//  Copyright (c) 2015 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XLForm.h"



@interface MPCCountryListViewController : UIViewController <UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate,UISearchBarDelegate,XLFormRowDescriptorViewController>

@property (strong, nonatomic) IBOutlet UITableView *countriesTable;
@property (strong, nonatomic) UISearchBar *searchBar;
@property (strong, nonatomic) NSMutableArray *listOfCountries;
@property (nonatomic,assign) NSString *searchTitle;


@property (weak, nonatomic) IBOutlet NSLayoutConstraint *btmConstraint;

@end
 

