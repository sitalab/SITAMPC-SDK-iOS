//
//  MPCCountryListViewController.h
//  SITAMPC
//
//  Created by Apple on 6/5/15.
//  Copyright (c) 2015 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XLForm.h" 

@protocol CountrySelDelegate;

@interface MPCCountryListViewController : UIViewController <UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate,UISearchBarDelegate,XLFormRowDescriptorViewController>


@property (nonatomic, assign) id <CountrySelDelegate> delegate;
@property (nonatomic,assign) NSUInteger secIndex;
@property (nonatomic,assign) NSUInteger rowIndex;

@property (strong, nonatomic) IBOutlet UITableView *countriesTable;
@property (strong, nonatomic) UISearchBar *searchBar;
@property (strong, nonatomic) NSMutableArray *listOfCountries;
@property (nonatomic,assign) NSString *searchTitle;
@property (nonatomic,assign) BOOL showPhoneCodes;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *btmConstraint;

@end
 


@protocol CountrySelDelegate <NSObject>
- (void) dialCodeSelected: (NSString *)dialCode secIndex:(NSUInteger)secIndex rowIndex:(NSUInteger)rowIndex;
@end
