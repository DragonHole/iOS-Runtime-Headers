/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptAppleAccount;

@interface SUScriptFacebookSession : SUScriptObject {

	SUScriptAppleAccount* _account;

}

@property (readonly) id hasAccounts; 
@property (readonly) unsigned long long likeStatusFlagFriendCount; 
@property (readonly) unsigned long long likeStatusFlagFriends; 
@property (readonly) unsigned long long likeStatusFlagGlobalCount; 
@property (readonly) unsigned long long likeStatusFlagMe; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(id)hasAccounts;
-(void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 completionFunction:(id)arg3 ;
-(void)likeURL:(id)arg1 completionFunction:(id)arg2 ;
-(void)unlikeURL:(id)arg1 completionFunction:(id)arg2 ;
-(id)initWithAppleAccount:(id)arg1 ;
-(unsigned long long)likeStatusFlagFriendCount;
-(unsigned long long)likeStatusFlagFriends;
-(unsigned long long)likeStatusFlagGlobalCount;
-(unsigned long long)likeStatusFlagMe;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)dealloc;
@end
