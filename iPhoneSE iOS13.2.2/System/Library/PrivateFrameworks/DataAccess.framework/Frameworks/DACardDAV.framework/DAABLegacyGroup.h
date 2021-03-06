/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACardDAV/DAGroup.h>

@class NSString;

@interface DAABLegacyGroup : NSObject <DAGroup> {

	void* _group;

}

@property (nonatomic,readonly) void* group;                         //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void*)group;
-(id)initWithGroup:(void*)arg1 ;
-(BOOL)isGroup;
-(BOOL)isContact;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(BOOL)isContainer;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)asGroup;
-(id)eTag;
-(void)setETag:(id)arg1 ;
-(void*)asABGroup;
@end

