/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/ECLocalMessageAction.h>
#import <libobjc.A.dylib/ECTransferUndownloadedMessageActionBuilder.h>

@class NSURL, NSString, NSArray;

@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction <ECTransferUndownloadedMessageActionBuilder> {

	long long _transferType;
	NSURL* _sourceMailboxURL;
	NSURL* _destinationMailboxURL;
	NSString* _oldestPersistedRemoteID;
	NSArray* _itemsToDelete;

}

@property (assign,nonatomic) long long transferType;                            //@synthesize transferType=_transferType - In the implementation block
@property (nonatomic,retain) NSURL * sourceMailboxURL;                          //@synthesize sourceMailboxURL=_sourceMailboxURL - In the implementation block
@property (nonatomic,retain) NSURL * destinationMailboxURL;                     //@synthesize destinationMailboxURL=_destinationMailboxURL - In the implementation block
@property (nonatomic,copy) NSString * oldestPersistedRemoteID;                  //@synthesize oldestPersistedRemoteID=_oldestPersistedRemoteID - In the implementation block
@property (nonatomic,retain) NSArray * itemsToDelete;                           //@synthesize itemsToDelete=_itemsToDelete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
-(NSString *)description;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(NSArray *)itemsToDelete;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(NSString *)oldestPersistedRemoteID;
-(void)setOldestPersistedRemoteID:(NSString *)arg1 ;
-(long long)transferType;
-(void)setTransferType:(long long)arg1 ;
-(void)setSourceMailboxURL:(NSURL *)arg1 ;
-(void)setDestinationMailboxURL:(NSURL *)arg1 ;
-(void)setItemsToDelete:(NSArray *)arg1 ;
-(void)updateWithCompletedCopyItems:(id)arg1 ;
@end
