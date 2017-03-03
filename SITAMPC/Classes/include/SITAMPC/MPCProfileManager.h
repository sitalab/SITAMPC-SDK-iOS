//
//  MPCProfileManager.h
//  MPC
//
//  Created by Apple on 30/05/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h> 

@interface MPCProfileManager : NSObject

- (NSMutableArray *) getCountriesArray;
-(NSString *)getCountryNameByISO:(NSString*)iso;
-(NSString *)getCountryISOByName:(NSString*)countryName;
-(NSString *)getCountryAbbrevByName:(NSString*)countryNam;

- (bool) isPassportAccepted:(NSString *)ISO;
-(NSArray *)getCountryISOArray:(NSArray*)countries;

- (NSString*)formatDate:(NSDate*)date;


- (NSMutableArray *)getPassports;
- (NSMutableArray *)getValidPassports;
- (NSMutableArray *)getExpiredPassports;
- (NSMutableArray *)getExpiredPassportImages;


- (bool)savePassport: (NSDictionary *)passportDict;
- (bool)updatePassport: (NSDictionary *)newPassInfo : (NSDictionary*)initialPassDict;
- (bool)deletePassport: (NSDictionary *)passDict;
- (bool)passportExist: (NSDictionary *)cardDict;
- (void)deleteKeychainValue:(NSString *)identifier;


- (NSMutableArray *)getSavedTrips;
- (bool)saveTrip: (NSDictionary *)tripDict;
- (bool)updateTrip: (NSDictionary *)newTripInfo : (NSDictionary*)initialTripDict;

@end
