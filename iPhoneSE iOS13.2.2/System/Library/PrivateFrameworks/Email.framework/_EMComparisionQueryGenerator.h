/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMSearchableIndexQueryGenerator.h>

@class NSString;

@interface _EMComparisionQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_attributesForPredicate:(id)arg1 propertyMapper:(id)arg2 ;
-(id)_comparisonOperatorForPredicate:(id)arg1 ;
-(unsigned long long)_modifiersForPredicate:(id)arg1 ;
-(id)_patternMatchStringForPredicate:(id)arg1 ;
-(id)queryExpressionFromPredicate:(id)arg1 propertyMapper:(id)arg2 languages:(id)arg3 ;
@end

