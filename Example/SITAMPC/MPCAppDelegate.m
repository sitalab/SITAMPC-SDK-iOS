//
//  MPCAppDelegate.m
//  SITAMPC
//
//  Created by safaakhalaf on 01/17/2017.
//  Copyright (c) 2017 safaakhalaf. All rights reserved.
//

#import "MPCAppDelegate.h"
#import "MPCViewController.h"

@implementation MPCAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{    
    //    [MPCFlowManager sharedManager].MPC_host = <INSERT MPC_host>;
    //    [MPCFlowManager sharedManager].MPC_apiKey = <INSERT MPC_apiKey>;
    //    [MPCFlowManager sharedManager].MPC_cid = <INSERT MPC_cid>;
 
    [MPCFlowManager sharedManager].delegate = self;
    [[MPCFlowManager sharedManager]flowSetup];
    [[MPCFlowManager sharedManager] showIntroScreensOnRun:false];
    [MPCFlowManager sharedManager].showConsoleLogs = true;
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    
    MPCViewController *mainScreen = [[MPCViewController alloc]init];
    self.window.rootViewController = [[UINavigationController alloc]initWithRootViewController:mainScreen];
    [self.window makeKeyAndVisible];
    
    // Override point for customization after application launch.
    return YES;
}


#pragma-mark MPCFlowDelegate Function
- (void) showCustomReceipt:(NSDictionary *)receiptDic expiryDate:(NSDate *)expdate{
    NSLog(@"showCustomReceipt: %@\nexpdate: %@",receiptDic,expdate);
    
   
}

#pragma-mark AppDelegate
- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
