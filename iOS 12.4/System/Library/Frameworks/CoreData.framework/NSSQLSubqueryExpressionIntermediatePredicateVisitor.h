/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLIntermediate;

@interface NSSQLSubqueryExpressionIntermediatePredicateVisitor : NSObject {

	NSSQLIntermediate* _scope;
	BOOL _foundKeypath;

}
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(id)initWithScope:(id)arg1 ;
-(BOOL)checkPredicate:(id)arg1 ;
-(void)dealloc;
@end

