/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface MFOfflineCacheReplayContext : NSObject {

	NSString* _selectedMailboxID;
	NSMutableDictionary* _translatedIDsByTemporaryID;
	NSMutableDictionary* _failureSnapshotsByTemporaryID;

}

@property (nonatomic,copy) NSString * selectedMailboxID;                                         //@synthesize selectedMailboxID=_selectedMailboxID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * translatedIDsByTemporaryID;                 //@synthesize translatedIDsByTemporaryID=_translatedIDsByTemporaryID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * failureSnapshotsByTemporaryID;              //@synthesize failureSnapshotsByTemporaryID=_failureSnapshotsByTemporaryID - In the implementation block
-(NSString *)selectedMailboxID;
-(void)setSelectedMailboxID:(NSString *)arg1 ;
-(NSMutableDictionary *)translatedIDsByTemporaryID;
-(NSMutableDictionary *)failureSnapshotsByTemporaryID;
-(id)init;
-(void)dealloc;
@end

