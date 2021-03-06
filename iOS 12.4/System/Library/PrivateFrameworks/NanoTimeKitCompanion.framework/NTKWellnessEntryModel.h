/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CLKTimelineEntry.h>

@class HKQuantity, NSArray, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry> {

	BOOL _databaseLoading;
	BOOL _deviceLocked;
	HKQuantity* _activeEnergyTotal;
	HKQuantity* _activeEnergyGoal;
	double _briskMinutesTotal;
	double _briskMinutesGoal;
	long long _standHoursTotal;
	long long _standHoursGoal;
	NSArray* _moveChartData;
	NSArray* _exerciseChartData;
	NSArray* _standChartData;

}

@property (assign,nonatomic) BOOL databaseLoading;                         //@synthesize databaseLoading=_databaseLoading - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergyTotal;               //@synthesize activeEnergyTotal=_activeEnergyTotal - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergyGoal;                //@synthesize activeEnergyGoal=_activeEnergyGoal - In the implementation block
@property (assign,nonatomic) double briskMinutesTotal;                     //@synthesize briskMinutesTotal=_briskMinutesTotal - In the implementation block
@property (assign,nonatomic) double briskMinutesGoal;                      //@synthesize briskMinutesGoal=_briskMinutesGoal - In the implementation block
@property (assign,nonatomic) long long standHoursTotal;                    //@synthesize standHoursTotal=_standHoursTotal - In the implementation block
@property (assign,nonatomic) long long standHoursGoal;                     //@synthesize standHoursGoal=_standHoursGoal - In the implementation block
@property (nonatomic,retain) NSArray * moveChartData;                      //@synthesize moveChartData=_moveChartData - In the implementation block
@property (nonatomic,retain) NSArray * exerciseChartData;                  //@synthesize exerciseChartData=_exerciseChartData - In the implementation block
@property (nonatomic,retain) NSArray * standChartData;                     //@synthesize standChartData=_standChartData - In the implementation block
@property (nonatomic,readonly) BOOL userHasDoneActivitySetup; 
@property (nonatomic,readonly) BOOL deviceLocked;                          //@synthesize deviceLocked=_deviceLocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)idealizedEntryModel;
+(id)formattingManager;
+(id)lockedEntryModel;
+(id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2 ;
+(id)largeModular:(id)arg1 ;
+(id)largeUtility:(id)arg1 ;
+(id)_signatureCornerFromModel:(id)arg1 ;
+(id)_signatureBezelFromModel:(id)arg1 ;
+(id)_signatureRectangleFromModel:(id)arg1 ;
+(id)_LocalizedStringWithActiveEnergy:(id)arg1 ;
-(double)briskMinutesGoal;
-(void)setBriskMinutesGoal:(double)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(double)activeEnergyGoalCompletionPercentage;
-(double)briskMinuteGoalCompletionPercentage;
-(double)standHourGoalCompletionPercentage;
-(HKQuantity *)activeEnergyTotal;
-(double)briskMinutesTotal;
-(long long)standHoursTotal;
-(void)setActiveEnergyTotal:(HKQuantity *)arg1 ;
-(void)setActiveEnergyGoal:(HKQuantity *)arg1 ;
-(void)setStandHoursTotal:(long long)arg1 ;
-(void)setStandHoursGoal:(long long)arg1 ;
-(void)setBriskMinutesTotal:(double)arg1 ;
-(void)setMoveChartData:(NSArray *)arg1 ;
-(void)setExerciseChartData:(NSArray *)arg1 ;
-(void)setStandChartData:(NSArray *)arg1 ;
-(HKQuantity *)activeEnergyGoal;
-(long long)standHoursGoal;
-(BOOL)userHasDoneActivitySetup;
-(BOOL)deviceLocked;
-(BOOL)databaseLoading;
-(long long)availabilityState;
-(NSArray *)moveChartData;
-(NSArray *)exerciseChartData;
-(NSArray *)standChartData;
-(void)setDatabaseLoading:(BOOL)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)date;
-(void)setDate:(id)arg1 ;
@end

