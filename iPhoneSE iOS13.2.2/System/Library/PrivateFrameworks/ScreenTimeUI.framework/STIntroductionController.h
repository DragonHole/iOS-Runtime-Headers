/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, STIntroductionModel, UINavigationController, UIViewController;

@interface STIntroductionController : NSObject {

	BOOL _allowParentalControls;
	BOOL _forceParentalControls;
	BOOL _skipWelcome;
	BOOL _isModalPresentation;
	NSString* _childName;
	/*^block*/id _completionBlock;
	STIntroductionModel* _introductionModel;
	UINavigationController* _navigationController;

}

@property (readonly) STIntroductionModel * introductionModel;                  //@synthesize introductionModel=_introductionModel - In the implementation block
@property (assign,nonatomic) BOOL isModalPresentation;                         //@synthesize isModalPresentation=_isModalPresentation - In the implementation block
@property (retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign) BOOL allowParentalControls;                                 //@synthesize allowParentalControls=_allowParentalControls - In the implementation block
@property (assign) BOOL forceParentalControls;                                 //@synthesize forceParentalControls=_forceParentalControls - In the implementation block
@property (copy) NSString * childName;                                         //@synthesize childName=_childName - In the implementation block
@property (assign) BOOL skipWelcome;                                           //@synthesize skipWelcome=_skipWelcome - In the implementation block
@property (copy) id completionBlock;                                           //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) UIViewController * initialViewController; 
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(UIViewController *)initialViewController;
-(void)setForceParentalControls:(BOOL)arg1 ;
-(void)setSkipWelcome:(BOOL)arg1 ;
-(void)setAllowParentalControls:(BOOL)arg1 ;
-(BOOL)forceParentalControls;
-(void)presentOverViewController:(id)arg1 ;
-(void)setIsModalPresentation:(BOOL)arg1 ;
-(id)_viewControllerFollowingViewController:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(BOOL)isModalPresentation;
-(STIntroductionModel *)introductionModel;
-(void)_viewControllerCompleted:(id)arg1 ;
-(BOOL)skipWelcome;
-(NSString *)childName;
-(BOOL)allowParentalControls;
-(void)setChildName:(NSString *)arg1 ;
@end

