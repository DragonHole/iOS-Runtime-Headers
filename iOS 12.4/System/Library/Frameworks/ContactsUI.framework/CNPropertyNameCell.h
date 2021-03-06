/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>

@protocol CNPropertyCellDelegate;
@class UITextField, UIResponder, CNPropertyGroupItem;

@interface CNPropertyNameCell : CNContactCell {

	UITextField* _textField;
	UIResponder* _firstResponderItem;
	id<CNPropertyCellDelegate> _delegate;

}

@property (nonatomic,retain) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UITextField * textField;                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIResponder * firstResponderItem;                      //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(CNPropertyGroupItem *)propertyItem;
-(id)variableConstraints;
-(void)setCardGroupItem:(id)arg1 ;
-(id)constantConstraints;
-(UIResponder *)firstResponderItem;
-(void)textFieldChanged:(id)arg1 ;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
-(UITextField *)textField;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

