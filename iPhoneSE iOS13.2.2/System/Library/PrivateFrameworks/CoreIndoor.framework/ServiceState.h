/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(void)setLastLocation:(CLGpsPosition *)arg1 ;
-(CLGpsPosition *)lastLocation;
-(IndoorProtocolProxy *)delegateProxy;
-(void)setDelegateProxy:(IndoorProtocolProxy *)arg1 ;
-(BOOL)pausedLocalization;
-(void)setPausedLocalization:(BOOL)arg1 ;
-(BOOL)updateLocation;
-(void)setUpdateLocation:(BOOL)arg1 ;
@end
