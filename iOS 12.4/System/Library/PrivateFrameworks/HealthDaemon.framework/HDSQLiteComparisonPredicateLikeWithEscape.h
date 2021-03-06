/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSString;

@interface HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate {

	NSString* _escapeCharacter;

}

@property (nonatomic,readonly) NSString * escapeCharacter;              //@synthesize escapeCharacter=_escapeCharacter - In the implementation block
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 escapeCharacter:(id)arg3 ;
-(NSString *)escapeCharacter;
@end

