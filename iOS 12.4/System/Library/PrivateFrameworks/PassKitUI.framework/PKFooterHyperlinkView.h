/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, UIColor;

@interface PKFooterHyperlinkView : UITableViewHeaderFooterView <UITextViewDelegate> {

	UITextView* _textView;
	NSString* _text;
	UIColor* _linkTextColor;
	/*^block*/id _action;
	NSRange _linkRange;

}

@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) NSRange linkRange;                     //@synthesize linkRange=_linkRange - In the implementation block
@property (nonatomic,retain) UIColor * linkTextColor;               //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (nonatomic,copy) id action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(void)setLinkRange:(NSRange)arg1 ;
-(void)_updateText;
-(BOOL)_isLinkRangeValid;
-(NSRange)linkRange;
-(UIColor *)linkTextColor;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(id)action;
-(void)setAction:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
@end

