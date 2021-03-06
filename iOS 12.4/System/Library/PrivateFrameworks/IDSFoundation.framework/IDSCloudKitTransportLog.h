/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKDatabase;

@interface IDSCloudKitTransportLog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKDatabase* _database;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * database;                        //@synthesize database=_database - In the implementation block
+(id)_messageFromRecord:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
-(id)_recordIDsToFetch;
-(id)_transportRecordZoneID;
-(void)fetchChangesSinceToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createZone:(/*^block*/id)arg1 ;
-(void)dropZone:(/*^block*/id)arg1 ;
-(void)disabled_fetchChangesSinceToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IDSCKDatabase *)database;
-(NSObject*<OS_dispatch_queue>)queue;
@end

