/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIKeyboardEmojiKeyDisplayController;


@protocol UIKeyboardEmojiCategoryUpdate <NSObject>
@property (assign,nonatomic) UIKeyboardEmojiKeyDisplayController * emojiKeyManager; 
@optional
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1;

@required
-(UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
-(void)setEmojiKeyManager:(id)arg1;
-(void)updateToCategory:(long long)arg1;

@end

