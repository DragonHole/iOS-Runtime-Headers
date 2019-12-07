/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MiroRandomNumberGenerator : NSObject {

	unsigned long long _seed;
	unsigned long long _index;

}

@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (assign) unsigned long long seed;                         //@synthesize seed=_seed - In the implementation block
+(double)mapValue:(double)arg1 fromRangeStart:(double)arg2 fromRangeEnd:(double)arg3 toRangeStart:(double)arg4 toRangeEnd:(double)arg5 clamp:(BOOL)arg6 ;
+(id)randomNumberGeneratorWithSeed:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(unsigned long long)seed;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setSeed:(unsigned long long)arg1 ;
-(double)randomNumberBetweenZeroAndOne;
-(double)randomNumberWithinRangeStart:(double)arg1 rangeEnd:(double)arg2 ;
@end
