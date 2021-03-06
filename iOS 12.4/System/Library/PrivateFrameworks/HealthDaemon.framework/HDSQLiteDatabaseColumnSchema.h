/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject {

	BOOL _isAutoincrement;
	BOOL _isPrimaryKey;
	BOOL _isNullable;
	NSString* _name;
	NSString* _type;
	NSString* _defaultValue;
	NSString* _foreignKeyTargetTable;
	NSString* _foreignKeyTargetColumn;
	long long _deletionAction;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL isAutoincrement;                         //@synthesize isAutoincrement=_isAutoincrement - In the implementation block
@property (assign,nonatomic) BOOL isPrimaryKey;                            //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (assign,nonatomic) BOOL isNullable;                              //@synthesize isNullable=_isNullable - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                        //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetTable;               //@synthesize foreignKeyTargetTable=_foreignKeyTargetTable - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetColumn;              //@synthesize foreignKeyTargetColumn=_foreignKeyTargetColumn - In the implementation block
@property (assign,nonatomic) long long deletionAction;                     //@synthesize deletionAction=_deletionAction - In the implementation block
-(NSString *)foreignKeyTargetTable;
-(NSString *)foreignKeyTargetColumn;
-(BOOL)isNullable;
-(void)setIsNullable:(BOOL)arg1 ;
-(void)setIsPrimaryKey:(BOOL)arg1 ;
-(void)setForeignKeyTargetTable:(NSString *)arg1 ;
-(void)setForeignKeyTargetColumn:(NSString *)arg1 ;
-(void)setDeletionAction:(long long)arg1 ;
-(BOOL)isAutoincrement;
-(void)setIsAutoincrement:(BOOL)arg1 ;
-(BOOL)isPrimaryKey;
-(long long)deletionAction;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
@end

