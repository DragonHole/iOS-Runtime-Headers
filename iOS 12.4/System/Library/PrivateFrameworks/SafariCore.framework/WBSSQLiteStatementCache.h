/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {

	WBSSQLiteDatabase* _database;
	NSMutableDictionary* _statements;

}
-(id)cachedStatementForQuery:(id)arg1 ;
-(id)_createStatementForQuery:(id)arg1 error:(id*)arg2 ;
-(void)setCachedStatement:(id)arg1 forQuery:(id)arg2 ;
-(id)statementForQuery:(id)arg1 error:(id*)arg2 ;
-(id)initWithDatabase:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end
