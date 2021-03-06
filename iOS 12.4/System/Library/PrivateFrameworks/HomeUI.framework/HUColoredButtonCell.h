/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@protocol HUColoredButtonCellDelegate;
@class HFItem, UIColor, HUColoredButton, NSString;

@interface HUColoredButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _buttonColorFollowsTintColor;
	HFItem* _item;
	id<HUColoredButtonCellDelegate> _delegate;
	UIColor* _buttonBackgroundColor;
	HUColoredButton* _button;

}

@property (nonatomic,retain) HUColoredButton * button;                                         //@synthesize button=_button - In the implementation block
@property (assign,nonatomic,__weak) id<HUColoredButtonCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL buttonColorFollowsTintColor;                                 //@synthesize buttonColorFollowsTintColor=_buttonColorFollowsTintColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonBackgroundColor;                                  //@synthesize buttonBackgroundColor=_buttonBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                  //@synthesize disabled=_disabled - In the implementation block
-(BOOL)isDisabled;
-(void)setButtonBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)buttonBackgroundColor;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)updateButtonColor;
-(void)setButtonColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)buttonColorFollowsTintColor;
-(void)setDelegate:(id<HUColoredButtonCellDelegate>)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(HFItem *)item;
-(id<HUColoredButtonCellDelegate>)delegate;
-(void)tintColorDidChange;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(HUColoredButton *)button;
-(void)setButton:(HUColoredButton *)arg1 ;
@end

