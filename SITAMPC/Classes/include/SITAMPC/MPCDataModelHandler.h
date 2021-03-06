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

typedef void (^MPCStatusBlock)(NSString *);
-(void)getConfigFromAPI:(MPCStatusBlock)statusHandler action:(NSString*)action;
 

-(NSMutableArray *)getFormsFromDB;

-(NSMutableDictionary*)parseTemplateXML;

-(NSArray *)getNatParamFromDB;
-(NSArray *)getNationality_Visa;

-(NSArray *)getNotices;


-(NSArray *)getTopCountries;

//-(NSArray *)getNationalities;
-(NSArray *)getAirlines;
-(NSArray *)getAirports;
-(BOOL)mixedSelectionAllowed;
-(BOOL)noManualEntry;
-(BOOL)noPhotoLibrary;
-(BOOL)singleProfile;
-(BOOL)customReceipt;

-(NSDictionary *)getAirlineDict:(NSString *)airlineCode;
-(NSDictionary *)getAirportDict:(NSString *)airportCode;

-(NSMutableArray *)introImages;

-(NSArray *)getMandatoryNotice;

-(void)setAssetAttributes;


-(NSString *)getAirlineCodeFromName:(NSString *)airlineName;


-(NSDictionary *)getConfigByFormId;
-(NSArray *)getBannedCountries;


@end
