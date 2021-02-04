/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICDelegateAccountStoreWriter.h>

@class ICSQLiteConnection, NSString;

@interface ICDelegateAccountStoreSQLWriter : NSObject <ICDelegateAccountStoreWriter> {

	ICSQLiteConnection* _connection;
	BOOL _isValid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAllTokensWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTokenForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_removeAccountForIdentityKey:(id)arg1 ;
-(BOOL)_removeTokenForIdentityKey:(id)arg1 ;
-(void)_setToken:(id)arg1 forIdentityKey:(id)arg2 ;
-(void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
-(void)invalidate;
@end
