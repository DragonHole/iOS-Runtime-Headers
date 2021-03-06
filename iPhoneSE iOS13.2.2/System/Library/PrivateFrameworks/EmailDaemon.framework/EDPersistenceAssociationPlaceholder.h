/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EFSQLColumnSchema, NSString;

@interface EDPersistenceAssociationPlaceholder : NSObject {

	EFSQLColumnSchema* _column;
	NSString* _tableName;

}

@property (nonatomic,readonly) EFSQLColumnSchema * column;              //@synthesize column=_column - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;               //@synthesize tableName=_tableName - In the implementation block
-(id)description;
-(NSString *)tableName;
-(EFSQLColumnSchema *)column;
-(id)initWithColumn:(id)arg1 tableName:(id)arg2 ;
-(BOOL)resolveWithSchema:(id)arg1 ;
@end

