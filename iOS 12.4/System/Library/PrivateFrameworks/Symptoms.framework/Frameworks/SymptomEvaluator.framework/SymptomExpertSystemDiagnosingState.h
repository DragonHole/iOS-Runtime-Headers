/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomExpertSystemState.h>

@class NSDictionary;

@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState {

	NSDictionary* _triggeringSymptom;

}

@property (nonatomic,retain) NSDictionary * triggeringSymptom;              //@synthesize triggeringSymptom=_triggeringSymptom - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(void)createAndPostAWDMetric;
-(NSDictionary *)triggeringSymptom;
-(void)setTriggeringSymptom:(NSDictionary *)arg1 ;
@end
