/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@protocol UITextViewDelegate;
@class TSKPlaceholderTextView, UIView, NSString;

@interface TSKEditableTextViewCell : UITableViewCell <UITextViewDelegate> {

	TSKPlaceholderTextView* mTextView;
	UIView* mInputView;
	BOOL mNumberHasDecimal;
	id<UITextViewDelegate> mSavedDelegate;

}

@property (nonatomic,retain) NSString * string; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNegative;
-(void)p_parseText:(id)arg1 ;
-(void)p_insertString:(id)arg1 ;
-(void)setTextTag:(long long)arg1 ;
-(void)setTextDelegate:(id)arg1 ;
-(void)parseText;
-(void)insertNumber:(long long)arg1 ;
-(void)insertDecimalSeparator;
-(void)toggleNegative;
-(void)dealloc;
-(NSString *)string;
-(void)layoutSubviews;
-(void)setPlaceholder:(id)arg1 ;
-(void)tintColorDidChange;
-(void)deleteBackward;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)beginEditing;
-(void)endEditing;
-(void)setString:(NSString *)arg1 ;
-(void)setInputView:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
@end

