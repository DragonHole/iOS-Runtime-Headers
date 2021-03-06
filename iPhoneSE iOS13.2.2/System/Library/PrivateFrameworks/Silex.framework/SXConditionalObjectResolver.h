/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXConditionValidating;
@class SXJSONObjectMerger;

@interface SXConditionalObjectResolver : NSObject {

	SXJSONObjectMerger* _objectMerger;
	id<SXConditionValidating> _conditionValidator;

}

@property (nonatomic,readonly) id<SXConditionValidating> conditionValidator;              //@synthesize conditionValidator=_conditionValidator - In the implementation block
@property (nonatomic,readonly) SXJSONObjectMerger * objectMerger;                         //@synthesize objectMerger=_objectMerger - In the implementation block
-(id)initWithConditionValidator:(id)arg1 objectMerger:(id)arg2 ;
-(id<SXConditionValidating>)conditionValidator;
-(SXJSONObjectMerger *)objectMerger;
-(id)resolveObjects:(id)arg1 context:(id)arg2 ;
@end

