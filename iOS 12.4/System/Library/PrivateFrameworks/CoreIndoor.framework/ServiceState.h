/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLGpsPosition, IndoorProtocolProxy;

@interface ServiceState : NSObject {

	BOOL _pausedLocalization;
	BOOL _updateLocation;
	CLGpsPosition* _lastLocation;
	IndoorProtocolProxy* _delegateProxy;

}

@property (nonatomic,retain) CLGpsPosition * lastLocation;                     //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic) BOOL pausedLocalization;                          //@synthesize pausedLocalization=_pausedLocalization - In the implementation block
@property (assign,nonatomic) BOOL updateLocation;                              //@synthesize updateLocation=_updateLocation - In the implementation block
@property (nonatomic,retain) IndoorProtocolProxy * delegateProxy;              //@synthesize delegateProxy=_delegateProxy - In the implementation block
-(IndoorProtocolProxy *)delegateProxy;
-(void)setDelegateProxy:(IndoorProtocolProxy *)arg1 ;
-(void)setLastLocation:(CLGpsPosition *)arg1 ;
-(CLGpsPosition *)lastLocation;
-(BOOL)pausedLocalization;
-(void)setPausedLocalization:(BOOL)arg1 ;
-(void)setUpdateLocation:(BOOL)arg1 ;
-(BOOL)updateLocation;
@end

