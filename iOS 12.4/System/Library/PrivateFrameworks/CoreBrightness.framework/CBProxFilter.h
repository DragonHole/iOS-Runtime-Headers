/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CBFilter.h>

@interface CBProxFilter : CBFilter {

	float _proxReleaseTime;
	BOOL _proxHasJustBeenRemoved;
	float _proxTriggerDelay;
	BOOL _triggered;

}

@property (assign,getter=isTriggered,nonatomic) BOOL triggered;              //@synthesize triggered=_triggered - In the implementation block
-(id)handleALSEvent:(id)arg1 ;
-(id)handleProximityEvent:(id)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(BOOL)isTriggered;
-(void)setTriggered:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

