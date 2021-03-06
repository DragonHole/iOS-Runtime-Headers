/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, NSCalendar, NSDateComponents, HKValueRange;

@interface HKDateIntervalCache : NSObject {

	NSDate* _minAnchorDate;
	NSDate* _maxAnchorDate;
	double _previousTimeInterval;
	BOOL _datesInvalidated;
	NSArray* _cachedDates;
	NSCalendar* _currentCalendarOverride;
	unsigned long long _dateAnchorUnit;
	NSDateComponents* _referenceSpacingComponents;
	NSDateComponents* _dateSpacingComponents;
	NSDateComponents* _minorDateSpacingComponents;
	HKValueRange* _dateRange;

}

@property (assign,nonatomic) unsigned long long dateAnchorUnit;                          //@synthesize dateAnchorUnit=_dateAnchorUnit - In the implementation block
@property (nonatomic,retain) NSDateComponents * referenceSpacingComponents;              //@synthesize referenceSpacingComponents=_referenceSpacingComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateSpacingComponents;                   //@synthesize dateSpacingComponents=_dateSpacingComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * minorDateSpacingComponents;              //@synthesize minorDateSpacingComponents=_minorDateSpacingComponents - In the implementation block
@property (nonatomic,readonly) HKValueRange * dateRange;                                 //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) NSArray * datePoints; 
-(HKValueRange *)dateRange;
-(BOOL)setDateRange:(HKValueRange *)arg1 ;
-(void)_updateAnchorDates;
-(void)_invalidateCachedDates;
-(id)_minAnchorDateFromDate:(id)arg1 ;
-(id)_maxAnchorDateFromDate:(id)arg1 ;
-(id)_currentCalendar;
-(id)_generateCachedDates;
-(unsigned long long)_minimumCalendarUnitForComponents:(id)arg1 ;
-(id)_nextDateForDate:(id)arg1 components:(id)arg2 calendar:(id)arg3 ;
-(id)_firstDateAfter:(id)arg1 matchingComponents:(id)arg2 calendar:(id)arg3 ;
-(void)setDateAnchorUnit:(unsigned long long)arg1 ;
-(void)setReferenceSpacingComponents:(NSDateComponents *)arg1 ;
-(void)setDateSpacingComponents:(NSDateComponents *)arg1 ;
-(void)setMinorDateSpacingComponents:(NSDateComponents *)arg1 ;
-(void)_setCurrentCalendar:(id)arg1 ;
-(NSArray *)datePoints;
-(unsigned long long)dateAnchorUnit;
-(NSDateComponents *)referenceSpacingComponents;
-(NSDateComponents *)dateSpacingComponents;
-(NSDateComponents *)minorDateSpacingComponents;
-(id)init;
@end

