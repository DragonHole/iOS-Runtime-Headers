/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteDatabase.h>

@interface MSCLAccountDatabase : SSSQLiteDatabase
+(id)sharedDatabase;
-(void)_createDatabaseSchema;
-(void)_migrateToSchemaVersion2;
-(void)_migrateToSchemaVersion3;
-(void)_migrateToSchemaVersion4;
-(id)init;
@end

