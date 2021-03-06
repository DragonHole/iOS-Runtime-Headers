/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PQLBindable.h>

@class NSMutableDictionary, NSDate, BRCServerChangeState, NSString;

@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable> {

	NSMutableDictionary* _pendingMigrations;
	long long _nextRank;
	NSDate* _lastSyncDownDate;
	BRCServerChangeState* _sharedDatabaseChangeState;

}

@property (nonatomic,retain) NSDate * lastSyncDownDate;                           //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (assign,nonatomic) long long nextRank;                                  //@synthesize nextRank=_nextRank - In the implementation block
@property (retain) BRCServerChangeState * sharedDatabaseChangeState;              //@synthesize sharedDatabaseChangeState=_sharedDatabaseChangeState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithState:(id)arg1 ;
-(void)saveToDB:(id)arg1 ;
-(NSDate *)lastSyncDownDate;
-(BRCServerChangeState *)sharedDatabaseChangeState;
-(void)setLastSyncDownDate:(NSDate *)arg1 ;
-(long long)nextRank;
-(void)setNextRank:(long long)arg1 ;
-(void)initiateMigrationQueryForContainerIDs:(id)arg1 key:(id)arg2 ;
-(id)migrationQueryKeyForContainerID:(id)arg1 continuationCursor:(id*)arg2 ;
-(id)dumpMigrationQueriesForContainerID:(id)arg1 ;
-(void)migrationQueryForContainerID:(id)arg1 key:(id)arg2 didCompleteWithContinuationCursor:(id)arg3 ;
-(BOOL)containerIDIsPendingMigration:(id)arg1 ;
-(void)setSharedDatabaseChangeState:(BRCServerChangeState *)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

