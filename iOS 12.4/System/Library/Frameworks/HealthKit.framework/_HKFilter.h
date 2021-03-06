/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _HKFilter : NSObject <NSSecureCoding, NSCopying>
+(id)compoundFilterWithFilter:(id)arg1 otherFilter:(id)arg2 ;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterByCombiningFilters:(id)arg1 compoundType:(unsigned long long)arg2 ;
+(BOOL)filter:(id)arg1 acceptsDataObject:(id)arg2 ;
+(id)falseFilter;
+(id)trueFilter;
+(BOOL)supportsSecureCoding;
-(id)_subfilters;
-(id)_copyWithZone:(NSZone*)arg1 subfilters:(id)arg2 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(id)filterByApplyingTransformation:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

