/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, HDProfile, HDSQLiteDatabase;

@interface _HDAssociationInsertionContext : NSObject {

	BOOL _enforceSameSource;
	BOOL _permitPendingAssociations;
	NSUUID* _parentUUID;
	HDProfile* _profile;
	HDSQLiteDatabase* _database;

}

@property (nonatomic,copy,readonly) NSUUID * parentUUID;                    //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,readonly) BOOL enforceSameSource;                      //@synthesize enforceSameSource=_enforceSameSource - In the implementation block
@property (nonatomic,readonly) BOOL permitPendingAssociations;              //@synthesize permitPendingAssociations=_permitPendingAssociations - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDSQLiteDatabase * database;                 //@synthesize database=_database - In the implementation block
-(HDSQLiteDatabase *)database;
-(HDProfile *)profile;
-(id)initWithParentUUID:(id)arg1 enforceSameSource:(BOOL)arg2 permitPendingAssociations:(BOOL)arg3 profile:(id)arg4 database:(id)arg5 ;
-(BOOL)enforceSameSource;
-(BOOL)permitPendingAssociations;
-(NSUUID *)parentUUID;
@end

