/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTAlarm, NSDate;


@protocol MTBedtimeDNDStateMachineInfoProvider <MTStateMachineInfoProvider>
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) NSDate * keepOffUntilDate; 
@property (nonatomic,readonly) BOOL inUserDefinedSleepWindow; 
@required
-(NSDate *)currentDate;
-(MTAlarm *)sleepAlarm;
-(NSDate *)keepOffUntilDate;
-(BOOL)inUserDefinedSleepWindow;
-(BOOL)isBedtimeDNDEnabled:(BOOL*)arg1;

@end

