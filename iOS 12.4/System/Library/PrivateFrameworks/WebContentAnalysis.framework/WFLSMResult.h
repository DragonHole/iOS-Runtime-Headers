/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@class NSMutableArray, NSNumber;

@interface WFLSMResult : NSObject {

	NSMutableArray* categoryJudgements;
	NSNumber* threshold;

}

@property (copy) NSNumber * threshold; 
+(id)LSMResultWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
+(id)extractScoresFromLSMResults:(LSMResultRef)arg1 ;
-(void)setThreshold:(NSNumber *)arg1 ;
-(NSNumber *)threshold;
-(id)initWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
-(long long)bestMatchingCategory;
-(float)scoreForCategory:(long long)arg1 ;
-(void)setScore:(float)arg1 forCategory:(long long)arg2 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(long long)numberOfCategories;
-(BOOL)isRestricted;
@end
