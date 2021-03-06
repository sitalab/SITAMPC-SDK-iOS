//
//  MPCFlowManager.h
//  MPC
//
//  Created by Apple on 24/08/16.
//  Copyright © 2016 Apple. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
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


@protocol MPCFlowDelegate <NSObject>
- (void) showCustomReceipt:(NSDictionary *)receiptDic expiryDate:(NSDate *)expDate;
@end


@interface MPCFlowManager : NSObject <CLLocationManagerDelegate>


@property (nonatomic, assign) id <MPCFlowDelegate> delegate;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocation * currentLocation;
-(void)initializeLocManager;


@property CGRect buttonFrame;
@property float buttonHeight;
@property CGFloat bottomPadding;
@property float statusBarHeight;
@property float navHeight;
@property float totalBarHeight;


typedef void (^MPCListFormBlock)(NSArray *,NSString *);
-(void)listFormTemplates:(MPCListFormBlock)formListHandler;

typedef void (^MPCStatusBlock)(NSString *);
typedef void (^ResetCompletionBlock)(bool);

@property (strong, nonatomic) UIViewController *currentMPCView;
+(MPCFlowManager *) sharedManager;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic,retain) NSString *selectedLanguage;

@property (strong, nonatomic) UIImageView *backgroundImageView;
@property (strong, nonatomic) NSMutableDictionary *answeredQuest;

@property (strong, nonatomic) NSMutableDictionary *tableFormDict;
@property (strong, nonatomic) NSDictionary *summaryDict ;

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
@property NSString *MPC_selectedFormURL;
@property UIColor *MPCPrimaryColor;
@property UIColor *MPCSecondaryColor;
@property NSString *defaultImg;

@property NSDictionary *flifoDict; 

@property NSString *numPax;
@property NSMutableDictionary *inputOrOptionsQuest;


@property (strong, nonatomic) NSMutableDictionary *countriesVisitedDict;
@property (strong, nonatomic) NSMutableDictionary *countrySelectedDict;

@property (strong, nonatomic) NSMutableDictionary *signatureInfoDict;


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
-(void)navigateToNextScreen:(UIViewController *)viewCtrl executeCurrentControls:(bool)checkCurrentControls;
@property (strong, nonatomic) NSDictionary *completeTemplateDict;

-(void)setScreenIndex:(NSString *)screen_index;

@property (strong, nonatomic) NSMutableDictionary *postDict;

@property NSArray *receipts;
@property (strong, nonatomic) NSString *randomIdent;
@property (strong, nonatomic) NSString *receiptText;

@property (strong, nonatomic) NSMutableArray *orderedScreenId;
 
@property (strong, nonatomic) NSDictionary *paxScreenDict;

@property (strong, nonatomic)  NSDictionary *currentScreenDic;

-(void)resetApp:(ResetCompletionBlock)finished;
-(void)deleteTrip;
-(void)submitFormCheckBanned;
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

-(void)displayManageProfiles;


-(void)applyNavBarConstraints:(UIButton*)btn width:(CGFloat)width height:(CGFloat)height;
-(NSDictionary*) getTripReceipt;

#pragma-mark ERROR 
-(void)showErrorFlow:(NSString *)errorMsg;
    
@end

