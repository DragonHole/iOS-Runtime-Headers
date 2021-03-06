/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeDeletedObjects;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;
	double _collectionInterval;

}

@property (nonatomic,retain) HKQueryAnchor * anchor;                  //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeDeletedObjects;              //@synthesize includeDeletedObjects=_includeDeletedObjects - In the implementation block
@property (assign,nonatomic) double collectionInterval;               //@synthesize collectionInterval=_collectionInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIncludeDeletedObjects:(BOOL)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(BOOL)includeDeletedObjects;
-(double)collectionInterval;
-(void)setCollectionInterval:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
@end

