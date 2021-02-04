/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCCachePolicy : NSObject <NSCopying> {

	unsigned long long _cachePolicy;
	double _maximumCachedAge;

}

@property (assign,nonatomic) unsigned long long cachePolicy;              //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) double maximumCachedAge;                     //@synthesize maximumCachedAge=_maximumCachedAge - In the implementation block
+(id)defaultCachePolicy;
+(id)cachePolicyWithSoftMaxAge:(double)arg1 ;
+(id)cachedOnlyCachePolicy;
+(id)ignoreCacheCachePolicy;
-(unsigned long long)cachePolicy;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setMaximumCachedAge:(double)arg1 ;
-(double)maximumCachedAge;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
