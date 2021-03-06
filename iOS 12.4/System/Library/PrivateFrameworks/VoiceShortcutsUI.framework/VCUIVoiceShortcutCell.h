/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface VCUIVoiceShortcutCell : UITableViewCell {

	UIView* _cardView;

}

@property (assign,nonatomic,__weak) UIView * cardView;              //@synthesize cardView=_cardView - In the implementation block
-(UIView *)cardView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCardView:(UIView *)arg1 ;
-(void)configureWithVoiceShortcut:(id)arg1 ;
@end

