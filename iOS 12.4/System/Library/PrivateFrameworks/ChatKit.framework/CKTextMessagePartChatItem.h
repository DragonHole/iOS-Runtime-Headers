/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKMessagePartChatItem.h>

@class UIItemProvider, NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem {

	UIItemProvider* _dragItemProvider;

}

@property (nonatomic,copy,readonly) NSAttributedString * text; 
@property (nonatomic,copy,readonly) NSAttributedString * fallbackCorruptText; 
@property (nonatomic,copy,readonly) NSAttributedString * subject; 
@property (nonatomic,readonly) BOOL containsHyperlink; 
-(id)composition;
-(Class)balloonViewClass;
-(id)loadTranscriptText;
-(id)pasteboardItems;
-(id)dragItemProvider;
-(id)_attributedTextWithTextColor:(id)arg1 ;
-(BOOL)shouldUseBigEmoji;
-(id)_fallbackCorruptMessageTextWithTextColor:(id)arg1 ;
-(BOOL)containsHyperlink;
-(BOOL)showMoneyResults;
-(id)_time;
-(Class)impactBalloonViewClass;
-(NSAttributedString *)fallbackCorruptText;
-(id)sendAnimationText;
-(NSAttributedString *)text;
-(NSAttributedString *)subject;
@end
