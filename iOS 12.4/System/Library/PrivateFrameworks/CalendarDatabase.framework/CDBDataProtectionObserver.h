/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject {

	/*^block*/id _stateChangedCallback;
	CalDeviceLockObserver* _deviceLockObserver;

}

@property (nonatomic,retain) CalDeviceLockObserver * deviceLockObserver;              //@synthesize deviceLockObserver=_deviceLockObserver - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                   //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (nonatomic,readonly) BOOL dataIsAccessible; 
+(id)stateChangedNotificationName;
-(void)_deviceLockStateChanged;
-(void)setDeviceLockObserver:(CalDeviceLockObserver *)arg1 ;
-(CalDeviceLockObserver *)deviceLockObserver;
-(void)setStateChangedCallback:(id)arg1 ;
-(BOOL)dataIsAccessible;
-(id)stateChangedCallback;
-(id)init;
@end
