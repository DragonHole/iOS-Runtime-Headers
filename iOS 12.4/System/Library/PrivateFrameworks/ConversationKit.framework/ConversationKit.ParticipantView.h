/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIImageView, UILabel;

@interface ConversationKit.ParticipantView : UIView {

	 participantIdentifier;
	 lastConfigurationHashValue;
	 contentView;
	 associatedVideoProvider;
	 videoTransform;
	 audioVisualizationView;
	 contactGlowView;
	 contactView;
	 videoView;
	 pausedVideoView;
	 loggingIdentifier;
	 overlayBackdropView;
	 overlaySpinner;
	 overlayIconView;
	 overlaySubtitleLabel;
	 overlayTitleLabelContainerView;
	 bottomBar;
	 bottomBarLabel;
	 bottomBarButton;
	 squareLayoutGuide;
	 avatarToLabelLayoutGuide;
	 overlayViewTopLayoutGuide;
	 overlayViewBottomLayoutGuide;
	 overlayConstraints;
	 labelState;
	 overallLayoutState;
	 backgroundBackdropView;
	 debugProminenceLabel;
	 bottomBarHideTimer;
	 style;
	 delegate;

}

@property (readonly,nonatomic) UIVisualEffectView * overlayBackdropView; 
@property (readonly,nonatomic) UIImageView * overlayIconView; 
@property (readonly,nonatomic) UILabel * overlaySubtitleLabel; 
@property (readonly,nonatomic) UIVisualEffectView * bottomBar; 
@property (readonly,nonatomic) UILabel * bottomBarLabel; 
@property (assign,nonatomic) long long style; 
-(UIVisualEffectView *)bottomBar;
-(UIVisualEffectView *)overlayBackdropView;
-(UIImageView *)overlayIconView;
-(UILabel *)overlaySubtitleLabel;
-(UILabel *)bottomBarLabel;
-(void)didTapExpandButton;
-(BOOL)accessibilityIsShowingVideo;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
@end
