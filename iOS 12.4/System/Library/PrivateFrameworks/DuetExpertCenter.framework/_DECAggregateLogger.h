/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DECAggregateLogger : NSObject {

	NSMutableDictionary* _batchScalars;

}
+(void)logKey:(id)arg1 replaceScalarValueWith:(long long)arg2 ;
+(void)logIncrementKey:(id)arg1 ;
+(double)logKey:(id)arg1 blockTiming:(/*^block*/id)arg2 ;
+(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
+(void)logKey:(id)arg1 distValue:(double)arg2 ;
+(void)logWithCallback:(/*^block*/id)arg1 ;
-(void)logIncrementKey:(id)arg1 ;
-(id)initCallbackInstance;
-(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
-(void)logKey:(id)arg1 distValue:(double)arg2 ;
-(void)flush;
@end

