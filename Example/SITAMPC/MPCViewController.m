//
//  MPCViewController.m
//  SITAMPC
//
//  Created by safaakhalaf on 01/17/2017.
//  Copyright (c) 2017 safaakhalaf. All rights reserved.
//

#import "MPCViewController.h"

@interface MPCViewController ()

@end

@implementation MPCViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

-(void)initializeMPCManager{
    NSBundle *bundle = [NSBundle bundleWithPath:[[NSBundle mainBundle]
                                                 pathForResource:@"SITAMPC"
                                                 ofType:@"bundle"]];
    
    NSLog(@"bundle: %@",bundle);
    
//    [MPCFlowManager sharedManager].MPC_host = <INSERT MPC_host>;
//    [MPCFlowManager sharedManager].MPC_apiKey = <INSERT MPC_apiKey>;
//    [MPCFlowManager sharedManager].MPC_cid = <INSERT MPC_cid>;
    
    
    
    [[MPCFlowManager sharedManager]flowSetup];
    
    NSString *sdkVer = [[MPCFlowManager sharedManager]getSDKversion];
    NSLog(@"sdkVer: %@",sdkVer);
    
    NSString *btnTitle = @"Run MIA MPC Beta";
    
    NSString *appState = [[MPCFlowManager sharedManager]getAppState];
    NSLog(@"appState: %@",appState);
    
    if([appState isEqualToString:@"form_prepared"]){
        btnTitle = @"Resume MPC Beta";
    }
    
    if([appState isEqualToString:@"form_confirmed"]){
        btnTitle = @"Resume MPC Beta";
    }
    
    if([appState isEqualToString:@"form_receipt"]){
        btnTitle = @"Show Trip Receipt";
    }
    
    [self.customButton setTitle:[btnTitle uppercaseString] forState:UIControlStateNormal];
    
}

-(void)viewWillAppear:(BOOL)animated{
    [self initializeMPCManager];
}

 

- (IBAction)runDemo:(id)sender {
    [[MPCFlowManager sharedManager]launch:self];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
