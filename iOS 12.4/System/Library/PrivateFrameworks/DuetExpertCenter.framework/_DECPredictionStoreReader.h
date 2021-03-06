/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
@class NSString, _PASSqliteDatabase;

@interface _DECPredictionStoreReader : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	_PASSqliteDatabase* _parentDb;

}
-(id)dateOfLastPredictionForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 ;
-(id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithSqliteDatabase:(id)arg1 ;
-(id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 ;
-(BOOL)_tryLoadDb;
-(id)initWithInMemoryStore;
-(unsigned long long)schemaVersion;
-(id)init;
-(void)dealloc;
-(void)close;
-(id)initWithPath:(id)arg1 ;
@end

