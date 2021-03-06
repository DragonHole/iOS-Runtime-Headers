/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface _ICResultCache : NSObject {

	NSArray* _cachedResults;
	NSDate* _start;
	double _ttlInSeconds;

}
-(void)clear;
-(id)initWithTTL:(double)arg1 ;
-(void)addResults:(id)arg1 ;
-(id)searchWithTrigger:(id)arg1 ;
-(id)searchWithValue:(id)arg1 ;
-(BOOL)fuzzyMatchItem:(id)arg1 withValue:(id)arg2 ;
@end

