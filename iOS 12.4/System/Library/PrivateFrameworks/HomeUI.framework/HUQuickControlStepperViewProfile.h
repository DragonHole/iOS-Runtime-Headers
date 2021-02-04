/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>

@class NSArray;

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile {

	BOOL _showSegmentTitles;
	unsigned long long _numberOfSegments;
	unsigned long long _stepperBehavior;
	NSArray* _segmentTitles;

}

@property (assign,nonatomic) unsigned long long numberOfSegments;              //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
@property (assign,nonatomic) unsigned long long stepperBehavior;               //@synthesize stepperBehavior=_stepperBehavior - In the implementation block
@property (assign,nonatomic) BOOL showSegmentTitles;                           //@synthesize showSegmentTitles=_showSegmentTitles - In the implementation block
@property (nonatomic,copy) NSArray * segmentTitles;                            //@synthesize segmentTitles=_segmentTitles - In the implementation block
-(void)setNumberOfSegments:(unsigned long long)arg1 ;
-(BOOL)showSegmentTitles;
-(unsigned long long)stepperBehavior;
-(void)setStepperBehavior:(unsigned long long)arg1 ;
-(void)setShowSegmentTitles:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)numberOfSegments;
-(void)setSegmentTitles:(NSArray *)arg1 ;
-(NSArray *)segmentTitles;
@end
