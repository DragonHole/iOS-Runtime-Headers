/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountStore, NSString, SUScriptAppleAccount;

@interface SUScriptAppleAccountStore : SUScriptObject {

	ACAccountStore* _accountStore;
	NSString* _effectiveBundleID;

}

@property (readonly) SUScriptAppleAccount * activeStoreAccount; 
@property (readonly) NSString * effectiveBundleID; 
@property (readonly) SUScriptAppleAccount * primaryAppleAccount; 
@property (readonly) NSString * accessPurposeRead; 
@property (readonly) NSString * accessPurposeReadWrite; 
@property (readonly) NSString * accessPurposeWrite; 
@property (readonly) NSString * accountTypeIdentifierFacebook; 
@property (readonly) NSString * accountTypeIdentifierSinaWeibo; 
@property (readonly) NSString * accountTypeIdentifierTwitter; 
@property (readonly) long long renewResultFailed; 
@property (readonly) long long renewResultRejected; 
@property (readonly) long long renewResultRenewed; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(id)accountTypeWithIdentifier:(id)arg1 ;
-(id)makeClientAccessInfoWithAccountType:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2 ;
-(SUScriptAppleAccount *)activeStoreAccount;
-(NSString *)effectiveBundleID;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(NSString *)accessPurposeRead;
-(NSString *)accessPurposeReadWrite;
-(NSString *)accessPurposeWrite;
-(NSString *)accountTypeIdentifierFacebook;
-(NSString *)accountTypeIdentifierSinaWeibo;
-(NSString *)accountTypeIdentifierTwitter;
-(long long)renewResultFailed;
-(long long)renewResultRejected;
-(long long)renewResultRenewed;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)_accountStoreChangeNotification:(id)arg1 ;
-(id)_accountStore;
-(SUScriptAppleAccount *)primaryAppleAccount;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

