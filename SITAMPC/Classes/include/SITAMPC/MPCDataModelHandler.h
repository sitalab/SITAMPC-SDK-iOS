//
//  MPCDataModelHandler.h
//  MPC
//
//  Created by Apple on 20/07/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MPCDataModelHandler : NSObject <NSXMLParserDelegate>

-(void)resetTables;

-(void)getConfigFromAPI;

-(NSMutableArray *)getFormsFromDB;

-(NSMutableDictionary*)parseTemplateXML;


-(NSArray *)getNotices;
-(NSArray *)getAppNotices;

-(NSArray *)getNationalities;
-(NSArray *)getAirlines;
-(NSArray *)getAirports;
-(BOOL)mixedSelectionAllowed;

-(NSDictionary *)getAirlineDict:(NSString *)airlineCode;
-(NSDictionary *)getAirportDict:(NSString *)airportCode;

-(NSMutableArray *)introImages;

@end
