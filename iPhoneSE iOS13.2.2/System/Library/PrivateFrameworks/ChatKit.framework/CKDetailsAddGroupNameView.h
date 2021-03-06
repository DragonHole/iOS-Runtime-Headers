/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol CKDetailsAddGroupNameViewDelegate;
@class NSString, UILabel, CKDetailsViewAddGroupNameViewUITextField;

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate> {

	BOOL _enabled;
	id<CKDetailsAddGroupNameViewDelegate> _delegate;
	NSString* _groupName;
	UILabel* _placeholderLabel;
	CKDetailsViewAddGroupNameViewUITextField* _inputField;

}

@property (nonatomic,retain) UILabel * placeholderLabel;                                         //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) CKDetailsViewAddGroupNameViewUITextField * inputField;              //@synthesize inputField=_inputField - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsAddGroupNameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                 //@synthesize groupName=_groupName - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeight;
-(void)setEnabled:(BOOL)arg1 ;
-(id<CKDetailsAddGroupNameViewDelegate>)delegate;
-(void)setDelegate:(id<CKDetailsAddGroupNameViewDelegate>)arg1 ;
-(BOOL)isEnabled;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(CKDetailsViewAddGroupNameViewUITextField *)inputField;
-(void)commitGroupName;
-(void)setInputField:(CKDetailsViewAddGroupNameViewUITextField *)arg1 ;
@end

