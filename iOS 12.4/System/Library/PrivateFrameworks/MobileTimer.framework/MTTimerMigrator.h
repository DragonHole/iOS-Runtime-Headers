/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTTimer;

@interface MTTimerMigrator : NSObject {

	MTTimer* _timer;

}

@property (nonatomic,retain) MTTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(void)migrateFromOldStorage;
-(void)removeFromOldStorage;
-(void)setTimer:(MTTimer *)arg1 ;
-(MTTimer *)timer;
@end

