//
//  MPCAirportsModal.h
//  iTravel
//
//  Created by Apple on 6/5/15.
//  Copyright (c) 2015 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>




@interface MPCAirportsModal : UIViewController<UITableViewDelegate,UITableViewDataSource,UISearchBarDelegate>


@property (strong, nonatomic) IBOutlet UITableView *airportsTable;
@property (strong, nonatomic) IBOutlet UISearchBar *searchbar;
 
@property (strong, nonatomic) NSMutableArray* filteredTableData;
@property (assign, nonatomic) BOOL isFiltered;
@property (assign, nonatomic) NSString *flag;
@property NSString *departureCode;

@end


