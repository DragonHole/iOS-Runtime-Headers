/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SiriTestingContext;

@interface SASTestingInputController : NSObject {

	SiriTestingContext* _preloadedTestingInput;

}

@property (nonatomic,readonly) SiriTestingContext * preloadedTestingInput;              //@synthesize preloadedTestingInput=_preloadedTestingInput - In the implementation block
-(id)init;
-(void)dealloc;
-(id)dequeuePreloadedTestingContext;
-(void)_registerForTestingNotifications;
-(void)_testingStringsDidChange:(id)arg1 ;
-(void)_testingAudioInputPathsDidChange:(id)arg1 ;
-(SiriTestingContext *)preloadedTestingInput;
@end

