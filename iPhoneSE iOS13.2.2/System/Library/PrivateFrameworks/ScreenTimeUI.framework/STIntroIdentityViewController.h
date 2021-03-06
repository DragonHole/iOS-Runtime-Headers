/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class STIntroductionModel;

@interface STIntroIdentityViewController : OBWelcomeController {

	STIntroductionModel* _model;
	/*^block*/id _continueHandler;

}

@property (readonly) STIntroductionModel * model;              //@synthesize model=_model - In the implementation block
@property (copy,readonly) id continueHandler;                  //@synthesize continueHandler=_continueHandler - In the implementation block
-(STIntroductionModel *)model;
-(void)loadView;
-(id)continueHandler;
-(id)initWithIntroductionModel:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
-(void)_myDevice:(id)arg1 ;
-(void)_myChildsDevice:(id)arg1 ;
@end

