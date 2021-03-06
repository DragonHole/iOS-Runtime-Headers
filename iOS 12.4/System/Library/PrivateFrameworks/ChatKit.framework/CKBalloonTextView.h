/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@protocol CKBalloonTextViewInteractionDelegate;
@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {

	NSAttributedString* _attributedText;
	id<CKBalloonTextViewInteractionDelegate> _interactionDelegate;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                                                //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic,__weak) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textView;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 ;
-(id)_textWithHyphenationAppliedForAttributedText:(id)arg1 ;
-(NSString *)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)didMoveToWindow;
-(NSAttributedString *)attributedText;
-(void)_interactionStartedFromPreviewItemController:(id)arg1 ;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1 ;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)setInteractionDelegate:(id<CKBalloonTextViewInteractionDelegate>)arg1 ;
-(id<CKBalloonTextViewInteractionDelegate>)interactionDelegate;
@end

