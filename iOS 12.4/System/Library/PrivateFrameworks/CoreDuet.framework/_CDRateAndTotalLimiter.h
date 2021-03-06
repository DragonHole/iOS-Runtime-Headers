/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_CDRateLimiter.h>

@interface _CDRateAndTotalLimiter : _CDRateLimiter {

	long long _totalCount;
	long long _currentTotal;

}

@property (assign) long long currentTotal;              //@synthesize currentTotal=_currentTotal - In the implementation block
@property (readonly) long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3 ;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(BOOL)debited;
-(long long)currentTotal;
-(void)setCurrentTotal:(long long)arg1 ;
-(long long)totalCount;
-(BOOL)credit;
-(id)description;
@end

