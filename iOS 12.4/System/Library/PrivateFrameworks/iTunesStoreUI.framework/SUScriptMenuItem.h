/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject {

	BOOL _enabled;
	NSString* _title;
	id _userInfo;

}

@property (assign) BOOL enabled; 
@property (retain) NSString * title; 
@property (retain) id userInfo; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(void)_sendDidChange;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)enabled;
@end

