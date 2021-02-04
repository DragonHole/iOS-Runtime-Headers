/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSString, NPKPassSyncStateItem;

@interface NPKPassSyncChange : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _changeUUID;
	NSData* _reconciledStateHash;
	unsigned long long _changeType;
	NSString* _uniqueID;
	NPKPassSyncStateItem* _syncStateItem;
	NSData* _passData;

}

@property (nonatomic,retain) NSUUID * changeUUID;                               //@synthesize changeUUID=_changeUUID - In the implementation block
@property (nonatomic,retain) NSData * reconciledStateHash;                      //@synthesize reconciledStateHash=_reconciledStateHash - In the implementation block
@property (assign,nonatomic) unsigned long long changeType;                     //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                               //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NPKPassSyncStateItem * syncStateItem;              //@synthesize syncStateItem=_syncStateItem - In the implementation block
@property (nonatomic,retain) NSData * passData;                                 //@synthesize passData=_passData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(unsigned long long)changeType;
-(void)setChangeType:(unsigned long long)arg1 ;
-(id)initWithProtoPassSyncChange:(id)arg1 ;
-(NSUUID *)changeUUID;
-(NSData *)passData;
-(void)setPassData:(NSData *)arg1 ;
-(NSData *)reconciledStateHash;
-(id)protoPassSyncChange;
-(void)setReconciledStateHash:(NSData *)arg1 ;
-(NPKPassSyncStateItem *)syncStateItem;
-(id)initWithChangeUUID:(id)arg1 reconciledStateHash:(id)arg2 changeType:(unsigned long long)arg3 uniqueID:(id)arg4 syncStateItem:(id)arg5 passData:(id)arg6 ;
-(BOOL)isEqualToChange:(id)arg1 ;
-(void)setChangeUUID:(NSUUID *)arg1 ;
-(void)setSyncStateItem:(NPKPassSyncStateItem *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
