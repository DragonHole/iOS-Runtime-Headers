/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoSkipLockObserving <NSObject>
@property (nonatomic,readonly) BOOL locked; 
@property (setter=onUnlock:,nonatomic,copy) id unlockBlock; 
@property (nonatomic,readonly) double countdown; 
@property (setter=onCountDown:,nonatomic,copy) id countdownBlock; 
@required
-(BOOL)locked;
-(double)countdown;
-(void)onUnlock:(/*^block*/id)arg1;
-(id)unlockBlock;
-(id)countdownBlock;
-(void)onCountDown:(/*^block*/id)arg1;

@end
