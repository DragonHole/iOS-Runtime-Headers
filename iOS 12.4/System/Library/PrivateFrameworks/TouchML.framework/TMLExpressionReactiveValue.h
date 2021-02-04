/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchML/TMLReactiveValue.h>

@class NSString, TMLContext, NSArray;

@interface TMLExpressionReactiveValue : TMLReactiveValue {

	NSString* _expression;
	TMLContext* _context;
	NSArray* _bindings;

}
-(id)initWithExpression:(id)arg1 context:(id)arg2 bindings:(id)arg3 valueType:(unsigned long long)arg4 ;
-(id)value;
@end
