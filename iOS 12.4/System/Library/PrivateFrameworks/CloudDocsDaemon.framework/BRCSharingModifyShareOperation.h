/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCServerZone, CKShare, BRCItemID, CKRecord, NSString;

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	CKShare* _share;
	BRCItemID* _itemID;
	CKRecord* _sharingIdentityPreparedRecord;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterGettingPublicSharingKeyForRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg1 wantRoutingKey:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3 ;
-(void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1 ;
-(void)performAfterPreparingSharingIdentityIfNecessary:(/*^block*/id)arg1 ;
-(void)main;
@end

