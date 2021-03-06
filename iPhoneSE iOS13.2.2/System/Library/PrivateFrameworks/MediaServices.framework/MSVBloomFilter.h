/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MSVBloomFilter : NSObject <NSSecureCoding> {

	CFBitVectorRef _vector;
	long long _vectorCapacity;
	unsigned long long _murmurSeed;
	long long _hashCount;
	float _falsePositiveTolerance;
	long long _capacity;

}

@property (nonatomic,readonly) long long capacity;                          //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) float falsePositiveTolerance;                //@synthesize falsePositiveTolerance=_falsePositiveTolerance - In the implementation block
@property (nonatomic,readonly) float falsePositiveProbability; 
@property (nonatomic,readonly) long long estimatedCount; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)addObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)capacity;
-(float)falsePositiveProbability;
-(id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 ;
-(id)_vectorIndexSetForObject:(id)arg1 ;
-(unsigned long long)_fnvHashObject:(id)arg1 ;
-(unsigned long long)_murmur2HashObject:(id)arg1 ;
-(id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 murmurSeed:(unsigned long long)arg3 ;
-(long long)estimatedCount;
-(float)falsePositiveTolerance;
@end

