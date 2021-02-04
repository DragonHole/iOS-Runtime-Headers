/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface GEOSortPriorityMapping : NSObject {

	NSArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(long long)resultTypeForACResultType:(int)arg1 ;
+(long long)resultSubtypeForACResultSubtype:(int)arg1 ;
+(id)sortPriorityMappingFromDefaultsValue:(id)arg1 ;
-(id)initWithAutocompleteResultSortPriorityMapping:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
-(NSArray *)entries;
@end
