/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentTemporalSnapshot : NSObject {

	NSMutableSet* __nodes;
	double __range;
	double __distance;

}

@property (nonatomic,readonly) NSMutableSet * nodes;              //@synthesize _nodes=__nodes - In the implementation block
@property (nonatomic,readonly) double range;                      //@synthesize _range=__range - In the implementation block
@property (nonatomic,readonly) double distance;                   //@synthesize _distance=__distance - In the implementation block
-(id)initWithNodes:(id)arg1 inRange:(double)arg2 ;
-(NSMutableSet *)nodes;
-(void)dealloc;
-(double)distance;
-(double)range;
@end

