/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMPerfProfiler : NSObject {

	NSMutableArray* _sinks;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(void)addSink:(id)arg1 withBehavior:(id)arg2 ;
-(void)logMeasurement:(IMPerfMeasurement_t*)arg1 ;
@end

