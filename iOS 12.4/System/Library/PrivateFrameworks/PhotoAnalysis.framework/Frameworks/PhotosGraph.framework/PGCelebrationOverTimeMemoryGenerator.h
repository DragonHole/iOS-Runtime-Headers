/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate, NSSet;

@interface PGCelebrationOverTimeMemoryGenerator : PGMemoryGenerator {

	NSDate* _localDate;
	NSSet* _upcomingHolidayNames;

}

@property (nonatomic,retain) NSDate * localDate;                        //@synthesize localDate=_localDate - In the implementation block
@property (nonatomic,retain) NSSet * upcomingHolidayNames;              //@synthesize upcomingHolidayNames=_upcomingHolidayNames - In the implementation block
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(NSDate *)localDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)setUpcomingHolidayNames:(NSSet *)arg1 ;
-(id)_holidayNodeForMomentNodes:(id)arg1 ;
-(NSSet *)upcomingHolidayNames;
@end

