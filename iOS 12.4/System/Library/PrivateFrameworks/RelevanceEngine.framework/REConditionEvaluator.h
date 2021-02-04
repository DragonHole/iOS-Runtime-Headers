/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RECondition;

@interface REConditionEvaluator : NSObject {

	unsigned long long _mode;
	RECondition* _condition;

}

@property (nonatomic,readonly) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) RECondition * condition;              //@synthesize condition=_condition - In the implementation block
-(BOOL)acceptsFeatureMap:(id)arg1 ;
-(BOOL)compareFeatureMap:(id)arg1 toFeatureMap:(id)arg2 ;
-(unsigned long long)mode;
-(id)initWithCondition:(id)arg1 ;
-(RECondition *)condition;
@end
