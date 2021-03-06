/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSQLitePredicate;

@interface _HDDatabasePruningOperation : NSObject {

	Class _entityClass;
	HDSQLitePredicate* _predicate;

}

@property (nonatomic,readonly) Class entityClass;                          //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,readonly) HDSQLitePredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(Class)entityClass;
-(id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 ;
-(HDSQLitePredicate *)predicate;
@end

