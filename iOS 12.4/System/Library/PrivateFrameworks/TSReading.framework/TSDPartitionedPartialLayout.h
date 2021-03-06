/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDLayout.h>

@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout {

	CGRect mBounds;
	TSDDefaultPartitioner* mPartitioner;

}

@property (nonatomic,readonly) TSDDefaultPartitioner * partitioner; 
@property (nonatomic,readonly) CGRect bounds; 
-(TSDDefaultPartitioner *)partitioner;
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)initWithInfo:(id)arg1 bounds:(CGRect)arg2 partitioner:(id)arg3 ;
-(CGRect)bounds;
@end

