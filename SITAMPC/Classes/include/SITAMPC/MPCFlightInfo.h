//
//  MPCFlightInfo.h
//  MPC
//
//  Created by Apple on 03/06/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "XLFormViewController.h"

@interface MPCFlightInfo : XLFormViewController <UIGestureRecognizerDelegate>

//@property (strong, nonatomic) IBOutlet UITableView *tripsTable;
@property NSDictionary *selectedAirport;
@property NSDictionary *selectedAirline;

@property (strong, nonatomic) NSDictionary *flightScreenDict;
-(void)setAirline;
-(void)setAirport;



@end
