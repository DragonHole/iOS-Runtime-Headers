/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DKSyncedFeatures : NSObject {

	BOOL _isDigitalHealthDisabledInitialized;
	BOOL _isDigitalHealthDisabledPreviousResult;
	BOOL _isSingleDevice;
	long long _screenTimeSyncState;

}

@property (assign) long long screenTimeSyncState;              //@synthesize screenTimeSyncState=_screenTimeSyncState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)description;
-(BOOL)isDigitalHealthDisabledWithIsSingleDevice:(BOOL)arg1 forTransports:(long long)arg2 ;
-(BOOL)isIDSMessageGatingDisabled;
-(BOOL)isSiriPortraitDisabled;
-(BOOL)isSupergreenDisabledForTransports:(long long)arg1 ;
-(long long)screenTimeSyncState;
-(void)setScreenTimeSyncState:(long long)arg1 ;
-(void)_fetchScreenTimeSyncState;
-(id)_stateStringWithState:(long long)arg1 ;
@end

