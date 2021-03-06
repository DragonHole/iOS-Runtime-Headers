/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSTestingCoordinatorDelegate;
@interface SSTestingCoordinator : NSObject {

	id<SSTestingCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSTestingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SSTestingCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<SSTestingCoordinatorDelegate>)arg1 ;
-(BOOL)_runPPTRequestRequiresTakingScreenshot:(id)arg1 ;
-(void)_delayedHandleRunPPTRequest:(id)arg1 ;
-(void)handleRunPPTRequest:(id)arg1 ;
@end

