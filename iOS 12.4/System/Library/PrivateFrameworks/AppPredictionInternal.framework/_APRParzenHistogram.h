/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXHistogramData, ATXHistogramBundleIdTable, NSString;

@interface _APRParzenHistogram : NSObject <NSSecureCoding> {

	ATXHistogramData* _arg1Hist;
	ATXHistogramData* _arg2Hist;
	ATXHistogramData* _arg12Hist;
	ATXHistogramBundleIdTable* _arg1Table;
	ATXHistogramBundleIdTable* _arg2Table;
	ATXHistogramBundleIdTable* _arg12Table;
	NSString* _prevKey;
	unsigned short _prevIndex;
	unsigned short _maxIndex;

}
+(BOOL)supportsSecureCoding;
-(void)addEvent:(id)arg1 ;
-(id)initWithArg1Hist:(id)arg1 arg2Hist:(id)arg2 arg12Hist:(id)arg3 arg1Table:(id)arg4 arg2Table:(id)arg5 arg12Table:(id)arg6 ;
-(void)pruneHistogram:(id)arg1 threshold:(float)arg2 ;
-(void)removeHistoryForAllBundleIds:(id)arg1 ;
-(void)pruneWithEvents:(id)arg1 ;
-(void)getIndicesForEvent:(id)arg1 intoBlock:(/*^block*/id)arg2 ;
-(void)pruneABHistogramForEvent:(id)arg1 ;
-(float)predict:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
