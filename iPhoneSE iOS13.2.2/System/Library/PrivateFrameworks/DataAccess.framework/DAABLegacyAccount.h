/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAContactsAccount.h>

@class NSString;

@interface DAABLegacyAccount : NSObject <DAContactsAccount> {

	void* _account;

}

@property (nonatomic,readonly) void* account;                       //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)identifier;
-(void*)account;
-(BOOL)isGroup;
-(BOOL)isContact;
-(int)legacyIdentifier;
-(id)externalIdentifier;
-(BOOL)isContainer;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)initWithABAccout:(void*)arg1 ;
@end

