/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDSQLiteDatabase;

@interface HDDatabaseMigrationTransaction : NSObject {

	HDSQLiteDatabase* _unprotectedDatabase;
	HDSQLiteDatabase* _protectedDatabase;

}

@property (nonatomic,readonly) HDSQLiteDatabase * unprotectedDatabase;              //@synthesize unprotectedDatabase=_unprotectedDatabase - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * protectedDatabase;                //@synthesize protectedDatabase=_protectedDatabase - In the implementation block
@property (nonatomic,readonly) BOOL isProtectedMigration; 
+(id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1 ;
-(HDSQLiteDatabase *)protectedDatabase;
-(BOOL)isProtectedMigration;
-(HDSQLiteDatabase *)unprotectedDatabase;
-(id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 ;
-(id)databaseNameForProtectionClass:(long long)arg1 ;
@end

