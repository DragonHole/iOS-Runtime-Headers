/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXLazyOperator.h>

@interface ATXLazyPercentile : ATXLazyOperator {

	double _percentile;

}

@property (assign,nonatomic) double percentile;              //@synthesize percentile=_percentile - In the implementation block
-(id)init;
-(double)opExecute;
-(id)init:(id)arg1 percentile:(double)arg2 ;
-(double)percentile;
-(void)setPercentile:(double)arg1 ;
@end
