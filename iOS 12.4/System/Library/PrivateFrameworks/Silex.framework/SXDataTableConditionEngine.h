/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SXDataTableConditionEngine : NSObject {

	unsigned long long _conditionCount;
	unsigned long long _validConditionCount;

}

@property (assign,nonatomic) unsigned long long conditionCount;                   //@synthesize conditionCount=_conditionCount - In the implementation block
@property (assign,nonatomic) unsigned long long validConditionCount;              //@synthesize validConditionCount=_validConditionCount - In the implementation block
+(id)engine;
-(void)setConditionCount:(unsigned long long)arg1 ;
-(unsigned long long)isEvenInteger:(long long)arg1 ;
-(unsigned long long)validConditionCount;
-(void)setValidConditionCount:(unsigned long long)arg1 ;
-(unsigned long long)isOddInteger:(long long)arg1 ;
-(void)addConditionForEvenBoolean:(unsigned long long)arg1 withInteger:(unsigned long long)arg2 ;
-(void)addConditionForOddBoolean:(unsigned long long)arg1 withInteger:(unsigned long long)arg2 ;
-(void)addConditionForEqualInteger:(unsigned long long)arg1 withInteger:(unsigned long long)arg2 ;
-(void)addConditionForEqualString:(id)arg1 withString:(id)arg2 ;
-(unsigned long long)conditionCount;
-(id)description;
-(BOOL)isValid;
@end

