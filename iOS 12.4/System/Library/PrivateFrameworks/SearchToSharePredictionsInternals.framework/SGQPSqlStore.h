/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PASSqliteErrorHandlerProtocol;
@class NSString, _PASSqliteDatabase, _PASDatabaseJournal, NSObject;

@interface SGQPSqlStore : NSObject {

	NSString* _dbPath;
	_PASSqliteDatabase* _db;
	_PASDatabaseJournal* _journal;
	id _lockStateNotificationToken;
	NSObject*<_PASSqliteErrorHandlerProtocol> _errorHandler;

}
+(id)inMemoryStoreForTesting;
+(id)storeWithPath:(id)arg1 errorHandler:(id)arg2 ;
+(id)storeWithPath:(id)arg1 ;
+(id)inMemoryStoreForTestingWithErrorHandler:(id)arg1 ;
-(BOOL)createSnapshot:(id)arg1 ;
-(BOOL)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned long long)arg2 inTransactionOnDb:(id)arg3 ;
-(long long)_migrateTo:(id)arg1 ;
-(id)dbForTesting;
-(id)initWithPath:(id)arg1 errorHandler:(id)arg2 ;
-(void)storeMessageWithUid:(id)arg1 conversationId:(id)arg2 content:(id)arg3 createdAt:(id)arg4 senderIsAccountOwner:(BOOL)arg5 ;
-(id)loadMessagesForConversation:(id)arg1 limit:(long long)arg2 ;
-(void)deleteMessagesForConversation:(id)arg1 ;
-(void)deleteMessagesWithUniqueIdentifiers:(id)arg1 ;
-(void)deleteMessagesBeforeDate:(id)arg1 ;
-(void)_runQuery:(id)arg1 withValues:(id)arg2 ;
-(BOOL)_createDbIfUnlocked;
-(void)_registerJournalUnlockHandler;
-(void)_setupJournalAndExecuteExistingJournalQueries;
-(void)stopJournalingAndExecuteQueries;
-(void)migrateForTesting:(id)arg1 ;
-(void)startJournaling;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

