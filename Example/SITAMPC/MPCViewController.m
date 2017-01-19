//
//  MPCViewController.m
//  SITAMPC
//
//  Created by safaakhalaf on 01/17/2017.
//  Copyright (c) 2017 safaakhalaf. All rights reserved.
//

#import "MPCViewController.h"
#import "Constants.h"

@interface MPCViewController ()

@end

@implementation MPCViewController


UIButton *customButton;

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.navigationItem.title = @"MPC Beta";
    UIBarButtonItem *btn_Back = [[UIBarButtonItem alloc] initWithTitle:@"Back" style:UIBarButtonItemStylePlain target:nil action:nil];
    self.navigationItem.backBarButtonItem=btn_Back;
    
    CGRect screenRect = [[UIScreen mainScreen] bounds];
    float screenWidth = screenRect.size.width;
    float screenHeight = screenRect.size.height;
    
    self.view.frame = CGRectMake(0, 0, screenWidth, screenHeight);
    self.view.backgroundColor = [[UIColor alloc] initWithRed:0/255.0 green:85.0/255.0 blue:165/255.0 alpha:1.0];
   
    CGRect buttonFrame = CGRectMake(0, screenHeight - 50, screenWidth, 50);
    customButton = [[UIButton alloc]initWithFrame:buttonFrame];
    customButton.backgroundColor = [[UIColor alloc] initWithRed:224/255.0 green:22/255.0 blue:43/255.0 alpha:1.0];
    [customButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal ];
    [customButton addTarget:self action:@selector(runDemo) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:customButton];
    
    [self setButtonState];
    
    
    UIColor *txtColor = [[UIColor alloc] initWithRed:224/255.0 green:22/255.0 blue:43/255.0 alpha:1.0];
    UIColor *boxColor = [UIColor whiteColor];
    
    
    
    float btnHeight = 125;
    float btnY = screenHeight - 50 - btnHeight - 10;
    UIView *profBox = [[UIView alloc] initWithFrame:CGRectMake(10,btnY, (self.view.frame.size.width-30)/2, btnHeight)];
    profBox.layer.cornerRadius = 10;
    profBox.backgroundColor = boxColor;
    
    UIImageView *profImage = [[UIImageView alloc]initWithFrame:CGRectMake((profBox.frame.size.width-70)/2, 10, 70, 70)];
    [profImage setImage:[[UIImage imageNamed:@"Passengers" ]imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate]];
    [profImage setTintColor:txtColor];
    [profBox addSubview:profImage];
    
    NSUInteger paxCount = [[MPCFlowManager sharedManager] getSavedPassportsCount];
    
    NSString *txt = [NSString stringWithFormat:@"Edit Passengers (%lu)",(unsigned long)paxCount];
    UILabel *txtLabel = [[UILabel alloc] initWithFrame:CGRectMake(5,profBox.frame.size.height-10-30, profBox.frame.size.width - 10, 30)];
    [txtLabel setText:txt];
    [txtLabel setTextColor:txtColor];
    [txtLabel setFont:[UIFont fontWithName:HelNeueLight size:largeSize]];
    [txtLabel setAdjustsFontSizeToFitWidth:YES];
    txtLabel.textAlignment = NSTextAlignmentCenter;
    [profBox addSubview:txtLabel];
    [self.view addSubview:profBox];
    
    UITapGestureRecognizer *tap2 =
    [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(openPassengerScreen)];
    [profBox addGestureRecognizer:tap2];
    
    
    UIView *infoBox = [[UIView alloc] initWithFrame:CGRectMake(profBox.frame.size.width+20,btnY, (self.view.frame.size.width-30)/2, btnHeight)];
    infoBox.layer.cornerRadius = 10;
    infoBox.backgroundColor = boxColor;
    
    UIImageView *infoImage = [[UIImageView alloc]initWithFrame:CGRectMake((infoBox.frame.size.width-70)/2, 10, 70, 70)];
    [infoImage setImage:[[UIImage imageNamed:@"Info"]imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate ]];
    [infoImage setTintColor:txtColor];
    [infoBox addSubview:infoImage];
    
    NSString *sdk = [[MPCFlowManager sharedManager] getSDKversion];
    
    NSString *sdkText = [NSString stringWithFormat:@"SDK version (%@)",sdk];
    
    UILabel *sdkLabel = [[UILabel alloc] initWithFrame:CGRectMake(5 ,infoBox.frame.size.height-10-30, infoBox.frame.size.width - 10, 30)];
    [sdkLabel setText:sdkText];
    [sdkLabel setTextColor:txtColor];
    [sdkLabel setFont:[UIFont fontWithName:HelNeueLight size:largeSize]];
    [sdkLabel setAdjustsFontSizeToFitWidth:YES];
    sdkLabel.textAlignment = NSTextAlignmentCenter;
    [infoBox addSubview:sdkLabel];
    [self.view addSubview:infoBox];
    
}

-(void)setButtonState{
     NSString *sdkVer = [[MPCFlowManager sharedManager]getSDKversion];
    NSLog(@"sdkVer: %@",sdkVer);
    
    NSString *btnTitle = @"Run MPC Beta";
    
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
    
    [customButton setTitle:[btnTitle uppercaseString] forState:UIControlStateNormal];
    
}

-(void)viewWillAppear:(BOOL)animated{
    [self setButtonState];
}
- (void)runDemo{
    [[MPCFlowManager sharedManager]launch:self];
    [MPCFlowManager sharedManager].currentMPCView.navigationController.delegate = self;
}

-(void) openPassengerScreen{
    [[MPCFlowManager sharedManager] showSavedProfiles:self];
}

- (void)navigationController:(UINavigationController *)navigationController didShowViewController:(UIViewController *)viewController animated:(BOOL)animated{
    NSLog(@"didShowViewController: %@",viewController);
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
