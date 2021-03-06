/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBNumberPadDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeNumberPadButton;
@class SBNumberPadWithDelegate, UIColor, UIControl, SBUIButton, NSArray, NSString;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate, CAAnimationDelegate> {

	SBNumberPadWithDelegate* _numberPad;
	UIColor* _customBackgroundColor;
	BOOL _useLightStyle;
	BOOL _visible;
	BOOL _showsBackspaceButton;
	BOOL _showsEmergencyCallButton;
	BOOL _showsCancelButton;
	id<SBUIPasscodeLockNumberPadDelegate> _delegate;
	double _ancillaryButtonOffset;
	UIControl*<SBUIPasscodeNumberPadButton> _downButton;
	SBUIButton* _emergencyCallButton;
	SBUIButton* _backspaceButton;
	SBUIButton* _cancelButton;
	UIColor* _reduceTransparencyButtonColor;

}

@property (nonatomic,retain) UIControl*<SBUIPasscodeNumberPadButton> downButton;                 //@synthesize downButton=_downButton - In the implementation block
@property (assign,nonatomic) double ancillaryButtonOffset;                                       //@synthesize ancillaryButtonOffset=_ancillaryButtonOffset - In the implementation block
@property (nonatomic,readonly) SBUIButton * emergencyCallButton;                                 //@synthesize emergencyCallButton=_emergencyCallButton - In the implementation block
@property (nonatomic,readonly) SBUIButton * backspaceButton;                                     //@synthesize backspaceButton=_backspaceButton - In the implementation block
@property (nonatomic,readonly) SBUIButton * cancelButton;                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIColor * reduceTransparencyButtonColor;                            //@synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIPasscodeLockNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsBackspaceButton;                                          //@synthesize showsBackspaceButton=_showsBackspaceButton - In the implementation block
@property (assign,nonatomic) BOOL showsEmergencyCallButton;                                      //@synthesize showsEmergencyCallButton=_showsEmergencyCallButton - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton;                                             //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * buttons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_inputButtonCircleSize;
+(UIEdgeInsets)_inputButtonCircleSpacing;
+(id)_buttonForCharacter:(unsigned)arg1 withLightStyle:(BOOL)arg2 ;
-(void)_cancelButtonHit;
-(void)_emergencyCallButtonHit;
-(BOOL)showsEmergencyCallButton;
-(SBUIButton *)emergencyCallButton;
-(double)_distanceToTopOfFirstButton;
-(id)initWithDefaultSizeAndLightStyle:(BOOL)arg1 ;
-(double)ancillaryButtonOffset;
-(void)setShowsBackspaceButton:(BOOL)arg1 ;
-(SBUIButton *)backspaceButton;
-(id)_fontForAncillaryButton;
-(void)_backspaceButtonHit;
-(void)setAncillaryButtonOffset:(double)arg1 ;
-(void)_configureAdditionalButtons;
-(void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2 ;
-(void)setDownButton:(UIControl*<SBUIPasscodeNumberPadButton>)arg1 ;
-(void)setReduceTransparencyButtonColor:(UIColor *)arg1 ;
-(BOOL)showsBackspaceButton;
-(UIControl*<SBUIPasscodeNumberPadButton>)downButton;
-(UIColor *)reduceTransparencyButtonColor;
-(NSArray *)buttons;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setDelegate:(id<SBUIPasscodeLockNumberPadDelegate>)arg1 ;
-(id<SBUIPasscodeLockNumberPadDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(SBUIButton *)cancelButton;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

