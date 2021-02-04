/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol RTTUIServiceCellDelegate;
@class UITextView;

@interface RTTUIServiceUpdateCell : UITableViewCell {

	UITextView* _titleView;
	UITextView* _subtitleView;
	id<RTTUIServiceCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RTTUIServiceCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForWidth:(double)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)adjustTextViewSize;
-(id)serviceMessage;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setDelegate:(id<RTTUIServiceCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<RTTUIServiceCellDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateLayout;
@end
