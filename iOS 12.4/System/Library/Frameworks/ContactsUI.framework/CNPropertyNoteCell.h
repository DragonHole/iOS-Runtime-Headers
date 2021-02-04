/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>

@class UITextView, UILabel;

@interface CNPropertyNoteCell : CNPropertyCell {

	UITextView* _textView;
	UILabel* _labelLabel;

}

@property (nonatomic,readonly) UILabel * labelLabel;              //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,retain) UITextView * textView;               //@synthesize textView=_textView - In the implementation block
-(void)performDefaultAction;
-(void)setValueTextAttributes:(id)arg1 ;
-(BOOL)allowsCellSelection;
-(BOOL)supportsTintColorValue;
-(void)textViewChanged:(id)arg1 ;
-(void)textViewEditingDidEnd:(id)arg1 ;
-(void)setProperty:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
-(UILabel *)labelLabel;
-(void)dealloc;
-(BOOL)shouldIndentWhileEditing;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
-(id)valueView;
@end
