/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface ASBackgroundObserver : NSObject {

	UIViewController* _viewController;
	/*^block*/id _block;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) id block;                                              //@synthesize block=_block - In the implementation block
-(void)dealloc;
-(id)block;
-(UIViewController *)viewController;
-(void)_hostDidEnterBackground:(id)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg1 ;
-(id)initWithViewController:(id)arg1 block:(/*^block*/id)arg2 ;
@end

