/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@interface IPFeatureSentenceFragment : NSObject {

	unsigned long long _clusterType;
	double _probability_None;
	double _probability_Rejection;
	double _probability_Proposal;
	double _probability_Confirmation;
	NSRange _range;

}

@property (assign) NSRange range;                                            //@synthesize range=_range - In the implementation block
@property (assign) unsigned long long clusterType;                           //@synthesize clusterType=_clusterType - In the implementation block
@property (nonatomic,readonly) unsigned long long mainPolarity; 
@property (assign) double probability_None;                                  //@synthesize probability_None=_probability_None - In the implementation block
@property (assign) double probability_Rejection;                             //@synthesize probability_Rejection=_probability_Rejection - In the implementation block
@property (assign) double probability_Proposal;                              //@synthesize probability_Proposal=_probability_Proposal - In the implementation block
@property (assign) double probability_Confirmation;                          //@synthesize probability_Confirmation=_probability_Confirmation - In the implementation block
+(id)fragmentWithRange:(NSRange)arg1 clusterType:(unsigned long long)arg2 ;
-(unsigned long long)clusterType;
-(unsigned long long)mainPolarity;
-(void)setProbability_None:(double)arg1 ;
-(void)setProbability_Rejection:(double)arg1 ;
-(void)setProbability_Proposal:(double)arg1 ;
-(void)setProbability_Confirmation:(double)arg1 ;
-(void)setClusterType:(unsigned long long)arg1 ;
-(double)probability_None;
-(double)probability_Rejection;
-(double)probability_Proposal;
-(double)probability_Confirmation;
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

