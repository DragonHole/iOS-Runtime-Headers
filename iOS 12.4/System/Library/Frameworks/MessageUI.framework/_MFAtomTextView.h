/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView {

	unsigned long long _textStorageEditingDepth;
	MFComposeRecipientTextView* _hostRecipientView;

}

@property (readonly) NSArray * atoms; 
@property (assign) MFComposeRecipientTextView * hostRecipientView;              //@synthesize hostRecipientView=_hostRecipientView - In the implementation block
-(void)setHostRecipientView:(MFComposeRecipientTextView *)arg1 ;
-(void)enumerateAtoms:(/*^block*/id)arg1 ;
-(void)enumerateAtomAttachments:(/*^block*/id)arg1 ;
-(void)batchTextStorageUpdates:(/*^block*/id)arg1 ;
-(NSArray *)atoms;
-(BOOL)isEditingTextStorage;
-(void)enumerateAtomsInCharacterRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(MFComposeRecipientTextView *)hostRecipientView;
-(BOOL)_delegateSupportsKeyboardEvents;
-(long long)baseWritingDirection;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)undoManager;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(CGRect)convertGlyphRect:(CGRect)arg1 ;
@end

