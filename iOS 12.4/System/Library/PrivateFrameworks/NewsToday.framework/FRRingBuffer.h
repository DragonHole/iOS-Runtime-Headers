/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary;

@interface FRRingBuffer : NSObject {

	unsigned long long _capacity;
	NSMutableArray* _values;
	unsigned long long _position;
	double _min;
	double _max;

}

@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                  //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double min;                               //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                               //@synthesize max=_max - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
-(double)min;
-(double)max;
-(id)initWithCapacity:(unsigned long long)arg1 dictionary:(id)arg2 ;
-(void)insertValue:(double)arg1 ;
-(void)setMin:(double)arg1 ;
-(void)setMax:(double)arg1 ;
-(NSDictionary *)dictionary;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(void)setValues:(NSMutableArray *)arg1 ;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
-(NSMutableArray *)values;
@end

