/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHistogramData;

@interface ATXGuardedHistData : NSObject {

	ATXHistogramData* _histogramData;
	unsigned short _bucketCount;
	BOOL _filter;

}
-(id)initWithHistogramData:(id)arg1 bucketCount:(unsigned short)arg2 filter:(BOOL)arg3 ;
@end
