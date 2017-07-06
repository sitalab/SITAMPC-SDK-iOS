//
//  MPCFlowManager.h
//  MPC
//
//  Created by Apple on 24/08/16.
//  Copyright © 2016 Apple. All rights reserved.
//


#import <UIKit/UIKit.h>

#import <Foundation/Foundation.h>

#import "MPCProfileManager.h"
#import "MPCTripsManager.h"
#import "MPCDataModelHandler.h"
#import "MPCSummary.h"
#import "MPCReceiptPageControl.h"
#import "MPCForgetPasscode.h"
#import "MPCManageProfiles.h"
#import "MPCQuestionForm.h"
#import "MPCOptionsForm.h"
#import "MPCQueueView.h"

@interface MPCFlowManager : NSObject

typedef void (^MPCStatusBlock)(NSString *);
@property (strong, nonatomic) MPCStatusBlock statusBlock;

@property (strong, nonatomic) UIViewController *currentMPCView;
+(MPCFlowManager *) sharedManager;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic,retain) NSString *selectedLanguage;

@property (strong, nonatomic) UIImageView *backgroundImageView;
@property (strong, nonatomic) NSMutableDictionary *answeredQuest;

@property (strong, nonatomic) NSTimer *loadingTimer;
@property (strong, nonatomic) UIView *loadingView;
@property CGRect screenRect;
@property CGFloat screenWidth;
@property CGFloat screenHeight;

@property NSString *sdkVersion;


@property bool showConsoleLogs;
@property NSString *MPC_host;
@property NSString *MPC_apiKey;
@property NSString *MPC_cid;
@property NSString *MPC_keychain;
@property NSString *MPC_defaultAirport;
@property NSString *MPC_defaultAirline;
@property NSUInteger MPC_timeOut;
@property NSString *MPC_locale;

@property UIColor *MPCPrimaryColor;
@property UIColor *MPCSecondaryColor;
@property NSString *defaultImg;


@property NSDictionary *airportDict;
@property NSString *airportSelected;
@property NSString *airlineSelected;
@property NSString *flightNumSelected;

@property NSString *numPax;
@property NSMutableDictionary *inputOrOptionsQuest;

//@property NSString *purpose_visit;
@property NSString *ready_state;
@property NSDate *reminderDate;
 
@property NSString *notificationMsg;

@property NSMutableArray *selectedPaxArray;
@property NSMutableArray *scanVisaActions;


@property (strong, nonatomic) NSMutableArray *configQueueArray;
@property (strong, nonatomic) NSMutableArray *formQueueArray;
@property (strong, nonatomic) NSMutableArray *imagesQueueArray;

@property (nonatomic,retain) MPCDataModelHandler *dataHandler;
@property (strong, nonatomic) MPCProfileManager *profManager;
@property (strong, nonatomic) MPCTripsManager *tripsManager;
@property (strong, nonatomic) NSDictionary *selectedFormDict;

-(void)showIntroScreensOnRun:(bool)flag;
-(void)flowSetup;
-(void)initializeFormTemplate:(UIViewController *)currentViewCtrl;
-(NSString *)getAppState;
-(NSUInteger)getSavedPassportsCount;

-(void)showSavedProfiles:(UIViewController *)viewCtrl statusHandler:(MPCStatusBlock)statusHandler;

-(NSString *)getSDKversion;

-(void)launch:(UIViewController *)ctrl statusHandler:(MPCStatusBlock)statusHandler;

-(void)registerMPCNotification;


-(void)animateCell:(UITableViewCell *)cell;

-(void)addBlurEffect;
-(void)removeBlurEffect; 


@property (strong, nonatomic) NSArray *currentFlowScreens;
@property (strong, nonatomic) NSArray *currentFlowTemp;
@property  NSUInteger currentScreenIndex;


-(void)showLoadingIndicatorView:(NSString *)loaderMsg;
-(void)hideLoadingIndicatorView;
-(void)navigateToNextScreen:(UIViewController *)viewCtrl;
@property (strong, nonatomic) NSDictionary *completeTemplateDict;

-(void)setScreenIndex:(NSString *)screen_index;

@property (strong, nonatomic) NSMutableDictionary *postDict;
-(float)ISOconvertorToSeconds :(NSString*)ISOFormat;

@property NSArray *receipts;
@property (strong, nonatomic) NSString *randomIdent;
@property (strong, nonatomic) NSString *receiptText;

@property (strong, nonatomic) NSMutableArray *orderedScreenId;
 
@property (strong, nonatomic) NSDictionary *paxScreenDict;
 
-(void)tutorialDismissed;
  
-(void)appEnteredForeground;
-(void)appEnteredBackground;

-(void)showProfileFormPopulated:(NSDictionary *)scanPassDict statusHandler:(MPCStatusBlock)statusHandler;
-(void)populateScannedVisa:(NSDictionary *)scanVisaDict statusHandler:(MPCStatusBlock)statusHandler;
-(void)updateVisaRows;

@property (strong, nonatomic) NSBundle *rscBundle;
@property (strong, nonatomic) NSString *rscPath;

-(void)resetPasscodes;
-(void) authenticateUser:(UIViewController *)viewCtrl;

-(void)noticesAcknowledged;

-(void)changeLanguage;
-(NSArray *)getExpectedArray;

-(NSArray *)getSupportedLanguages;

@end
