/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString;

@interface SUScriptRedeemViewController : SUScriptViewController {

	long long _category;
	NSString* _initialCode;

}

@property (nonatomic,copy) NSString * initialCode; 
@property (nonatomic,readonly) long long redeemCategoryApps; 
@property (nonatomic,readonly) long long redeemCategoryBooks; 
@property (nonatomic,readonly) long long redeemCategoryMedia; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(id)newNativeViewController;
-(void)setRedeemStyle:(long long)arg1 ;
-(long long)redeemCategoryApps;
-(long long)redeemCategoryBooks;
-(long long)redeemCategoryMedia;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)initialCode;
-(void)setInitialCode:(NSString *)arg1 ;
@end

