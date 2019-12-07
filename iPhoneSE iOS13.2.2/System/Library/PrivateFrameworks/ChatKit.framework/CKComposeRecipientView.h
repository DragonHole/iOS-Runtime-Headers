/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ContactsAutocompleteUI/CNComposeRecipientTextView.h>

@protocol CKComposeRecipientViewDelegate;
@interface CKComposeRecipientView : CNComposeRecipientTextView {

	id<CKComposeRecipientViewDelegate> layoutDelegate;

}

@property (assign,nonatomic,__weak) id<CKComposeRecipientViewDelegate> layoutDelegate; 
-(void)reset;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutDelegate:(id<CKComposeRecipientViewDelegate>)arg1 ;
-(void)atomTextViewDidBecomeFirstResponder:(id)arg1 ;
-(id<CKComposeRecipientViewDelegate>)layoutDelegate;
@end
