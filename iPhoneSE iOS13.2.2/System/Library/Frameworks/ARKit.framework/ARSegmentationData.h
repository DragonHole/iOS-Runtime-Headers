/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSString;

@interface ARSegmentationData : NSObject <ARResultData> {

	double _timestamp;
	CVBufferRef _segmentationBuffer;

}

@property (nonatomic,readonly) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CVBufferRef segmentationBuffer;              //@synthesize segmentationBuffer=_segmentationBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(double)timestamp;
-(CVBufferRef)segmentationBuffer;
-(id)initWithTimestamp:(double)arg1 segmentationBuffer:(CVBufferRef)arg2 ;
@end

