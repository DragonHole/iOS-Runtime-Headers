/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface RateLimitAllowance : NSObject {

	NSDate* _lastCheckedAt;
	double _allowance;

}

@property (nonatomic,retain) NSDate * lastCheckedAt;              //@synthesize lastCheckedAt=_lastCheckedAt - In the implementation block
@property (assign,nonatomic) double allowance;                    //@synthesize allowance=_allowance - In the implementation block
-(NSDate *)lastCheckedAt;
-(void)setLastCheckedAt:(NSDate *)arg1 ;
-(double)allowance;
-(void)setAllowance:(double)arg1 ;
@end

