/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _DECPredictionStoreQueuedResult : NSObject {

	unsigned long long _consumer;
	unsigned long long _category;
	NSData* _result;

}

@property (assign,nonatomic) unsigned long long consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSData * result;                          //@synthesize result=_result - In the implementation block
-(void)setResult:(NSData *)arg1 ;
-(NSData *)result;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(unsigned long long)consumer;
-(void)setConsumer:(unsigned long long)arg1 ;
@end
