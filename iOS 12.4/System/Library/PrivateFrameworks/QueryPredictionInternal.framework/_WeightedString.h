/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _WeightedString : NSObject {

	NSString* _string;
	unsigned long long _weight;

}

@property (nonatomic,retain) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long weight;              //@synthesize weight=_weight - In the implementation block
+(id)weightedStringFrom:(id)arg1 withWeight:(unsigned long long)arg2 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(unsigned long long)weight;
-(void)setWeight:(unsigned long long)arg1 ;
@end

