/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotlight/SPQueryTask.h>

@class NSArray;

@interface SPZKWSearchQuery : SPQueryTask {

	NSArray* _mutableSections;
	unsigned long long _queryID;

}

@property (assign) unsigned long long queryID;              //@synthesize queryID=_queryID - In the implementation block
+(void)initialize;
-(void)setQueryID:(unsigned long long)arg1 ;
-(void)addApplicationResultsFromPredictionResponse:(id)arg1 toSection:(id)arg2 queryIdent:(unsigned long long)arg3 ;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
-(unsigned long long)queryID;
-(void)start;
@end
