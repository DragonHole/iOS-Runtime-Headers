/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMStepCounterProxy;

@interface CMStepCounter : NSObject {

	CMStepCounterProxy* _stepcounterProxy;

}

@property (nonatomic,readonly) CMStepCounterProxy * stepcounterProxy;              //@synthesize stepcounterProxy=_stepcounterProxy - In the implementation block
@property (assign) BOOL enabled; 
+(BOOL)isStepCountingAvailable;
-(CMStepCounterProxy *)stepcounterProxy;
-(void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)stopStepCountingUpdates;
-(void)getTotalCountToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)deleteHistory;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
@end
