/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class VCVoiceShortcut, UIView;

@interface VCUIVoiceShortcutCell : UITableViewCell {

	VCVoiceShortcut* _voiceShortcut;
	UIView* _cardView;

}

@property (nonatomic,retain) VCVoiceShortcut * voiceShortcut;              //@synthesize voiceShortcut=_voiceShortcut - In the implementation block
@property (assign,nonatomic,__weak) UIView * cardView;                     //@synthesize cardView=_cardView - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)cardView;
-(void)setCardView:(UIView *)arg1 ;
-(void)setVoiceShortcut:(VCVoiceShortcut *)arg1 ;
-(VCVoiceShortcut *)voiceShortcut;
-(void)configureWithVoiceShortcut:(id)arg1 ;
-(void)updateCardView;
@end

