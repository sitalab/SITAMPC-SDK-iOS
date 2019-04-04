//
//  MPCAirportsModal.h
//  SITAMPC
//
//  Created by Apple on 6/5/15.
//  Copyright (c) 2015 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>



@protocol AirportDelegate;

@interface MPCAirportsModal : UIViewController<UITableViewDelegate,UITableViewDataSource,UISearchBarDelegate>


@property (nonatomic, assign) id <AirportDelegate> delegate;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *btmConstraint;

@property (strong, nonatomic) IBOutlet UITableView *airportsTable;
@property (strong, nonatomic) UISearchBar *searchbar;
 
@property (strong, nonatomic) NSMutableArray* filteredTableData;
@property (assign, nonatomic) BOOL isFiltered;
@property (assign, nonatomic) NSString *flag;
@property NSString *departureCode;

@property NSString *cellTag;
@property NSString *search_placeholder;
@end



@protocol AirportDelegate <NSObject>
- (void) airportSelected: (NSDictionary *)airportDic cellTag:(NSString *)cellTag;
@end
