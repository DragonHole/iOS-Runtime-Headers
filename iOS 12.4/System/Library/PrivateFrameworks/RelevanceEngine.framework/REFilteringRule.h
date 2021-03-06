/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERule.h>
#import <libobjc.A.dylib/REIndentedDescription.h>

@class REConditionEvaluator, RECondition, NSString;

@interface REFilteringRule : RERule <REIndentedDescription> {

	REConditionEvaluator* _conditionEvaluator;
	RECondition* _condition;
	unsigned long long _type;

}

@property (nonatomic,readonly) REConditionEvaluator * conditionEvaluator; 
@property (nonatomic,readonly) RECondition * condition;                                //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithCondition:(id)arg1 type:(unsigned long long)arg2 ;
-(REConditionEvaluator *)conditionEvaluator;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithCondition:(id)arg1 ;
-(RECondition *)condition;
@end

