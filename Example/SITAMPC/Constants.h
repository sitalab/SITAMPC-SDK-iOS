//
//  Constants.h
//  MPC
//
//  Created by Apple on 30/05/16.
//  Copyright © 2016 Apple. All rights reserved.
//

//Flags Resource: https://github.com/stevenrskelton/flag-icon

#ifndef Constants_h
#define Constants_h

//Google Analytics
#define kAllowTracking  @"allowTracking"
#define GATrackingID    @"UA-79510615-2"

#ifdef XSMPC
    #define GATrackingID    @"UA-79510615-3"
#endif

#define HelNeueFont @"HelveticaNeue"
#define HelNeueLight @"HelveticaNeue-Light"
#define HelNeueBold @"HelveticaNeue-Bold"
#define HelNeueMedium @"HelveticaNeue-Medium"

#define black_semi_transparent [[UIColor alloc] initWithRed:0/255.0 green:0/255.0 blue:0/255.0 alpha:0.5]

#define largeSize 20.0
#define passportExpiryMaxYears 20

#endif  
