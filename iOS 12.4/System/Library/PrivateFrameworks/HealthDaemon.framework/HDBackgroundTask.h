/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSDate, NSDictionary;

@interface HDBackgroundTask : NSObject {

	NSObject*<OS_xpc_object> _job;

}

@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDictionary * userContext; 
@property (assign,nonatomic) BOOL shiftsDatesWithSystemClockChanges; 
@property (assign,nonatomic) BOOL allowsPowerOptimizedScheduling; 
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDictionary *)userContext;
-(id)_initWithJob:(id)arg1 ;
-(void)setShiftsDatesWithSystemClockChanges:(BOOL)arg1 ;
-(void)setAllowsPowerOptimizedScheduling:(BOOL)arg1 ;
-(id)_job;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(BOOL)shiftsDatesWithSystemClockChanges;
-(BOOL)allowsPowerOptimizedScheduling;
-(BOOL)taskValid;
-(BOOL)taskSatisfied;
-(BOOL)taskExpired;
-(id)init;
-(id)description;
@end
