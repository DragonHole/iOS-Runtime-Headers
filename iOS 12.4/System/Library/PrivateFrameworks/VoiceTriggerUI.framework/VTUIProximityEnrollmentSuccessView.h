/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIProximityView.h>

@class NSString, VTUIProximityContainerView, UILabel, UIImageView, UIView, VTUIStyle, VTUIButton, UIButton, NSArray;

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {

	NSString* _languageCode;
	VTUIProximityContainerView* _containerView;
	UILabel* _titleLabel;
	UIImageView* _imageView;
	UIView* _imageViewContainer;
	UILabel* _subtitleLabel;
	VTUIStyle* _vtStyle;
	VTUIButton* _continueButton;
	UIButton* _dismissButton;
	NSArray* _viewConstraints;

}

@property (nonatomic,retain) NSArray * viewConstraints;                  //@synthesize viewConstraints=_viewConstraints - In the implementation block
@property (nonatomic,readonly) VTUIButton * continueButton;              //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                   //@synthesize dismissButton=_dismissButton - In the implementation block
-(VTUIButton *)continueButton;
-(NSArray *)viewConstraints;
-(void)setViewConstraints:(NSArray *)arg1 ;
-(void)_setImage:(id)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(void)_setupConstraintsToSize:(CGSize)arg1 ;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
@end
