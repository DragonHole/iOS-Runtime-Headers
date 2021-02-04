/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISObservable.h>

@class CADisplayLink, _ISAnimatedImageTimerForwardingProxy;

@interface ISAnimatedImageTimer : ISObservable {

	CADisplayLink* _displayLink;
	_ISAnimatedImageTimerForwardingProxy* _displayLinkProxy;
	double _timestamp;

}

@property (assign,setter=_setTimestamp:,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)sharedTimer;
-(id)mutableChangeObject;
-(void)_updateDisplayLink;
-(void)hasObserversDidChange;
-(void)_iosInitialization;
-(void)_iosDealloc;
-(void)_iosUpdateDisplayLink;
-(void)_fireTimerWithInterval:(double)arg1 ;
-(void)_iosAnimationTimerFired:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(double)timestamp;
-(void)_setTimestamp:(double)arg1 ;
@end
