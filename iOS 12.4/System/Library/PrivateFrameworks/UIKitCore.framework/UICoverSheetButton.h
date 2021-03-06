/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKitCore/_UIClickInteractionDelegate.h>

@class UIView, UIImageView, UIVisualEffectView, NSArray, _UIClickInteraction, UIImage, UIColor, NSString;

@interface UICoverSheetButton : UIControl <_UIClickInteractionDelegate> {

	UIView* _containerView;
	UIImageView* _contentView;
	UIVisualEffectView* _backgroundEffectView;
	NSArray* _backgroundEffects;
	NSArray* _selectedBackgroundEffects;
	UIView* _backgroundHighlightView;
	_UIClickInteraction* _clickInteraction;
	BOOL _interactive;
	BOOL _didActivateDuringInteraction;
	double _maxForceDuringInteraction;
	double _highlightProgress;
	BOOL _pronounced;
	UIImage* _image;
	UIImage* _selectedImage;
	UIColor* _selectedTintColor;
	NSString* _localizedAccessoryTitle;
	NSString* _backgroundEffectViewGroupName;
	NSString* _statisticsIdentifier;
	UIEdgeInsets _edgeInsets;

}

@property (assign,getter=isPronounced,nonatomic) BOOL pronounced;                 //@synthesize pronounced=_pronounced - In the implementation block
@property (assign,getter=isLatching,nonatomic) BOOL latching; 
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                             //@synthesize selectedImage=_selectedImage - In the implementation block
@property (nonatomic,retain) UIColor * selectedTintColor;                         //@synthesize selectedTintColor=_selectedTintColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                             //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,copy) NSString * localizedAccessoryTitle;                    //@synthesize localizedAccessoryTitle=_localizedAccessoryTitle - In the implementation block
@property (nonatomic,copy) NSString * backgroundEffectViewGroupName;              //@synthesize backgroundEffectViewGroupName=_backgroundEffectViewGroupName - In the implementation block
@property (nonatomic,copy) NSString * statisticsIdentifier;                       //@synthesize statisticsIdentifier=_statisticsIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(UIImage *)selectedImage;
-(id)highlightEffectForClickInteraction:(id)arg1 ;
-(void)clickInteractionDidEnd:(id)arg1 ;
-(BOOL)clickInteractionShouldBegin:(id)arg1 ;
-(void)clickInteractionDidClickUp:(id)arg1 ;
-(BOOL)isLatching;
-(void)setLatching:(BOOL)arg1 ;
-(NSString *)statisticsIdentifier;
-(void)setSelectedTintColor:(UIColor *)arg1 ;
-(id)_backgroundEffectsWithBrightness:(double)arg1 ;
-(void)layoutIfNeededAnimated;
-(BOOL)isPronounced;
-(UIColor *)selectedTintColor;
-(void)_animateEffectUpdateWithProgress:(double)arg1 ended:(BOOL)arg2 ;
-(id)_interactionDurationStat;
-(id)_firstActivationDurationStat;
-(id)_interactionCountStatWithActivation:(BOOL)arg1 ;
-(id)_maxForceStatWithActivation:(BOOL)arg1 ;
-(void)clickInteraction:(id)arg1 didObserveForce:(double)arg2 ;
-(void)setPronounced:(BOOL)arg1 ;
-(void)setBackgroundEffectViewGroupName:(NSString *)arg1 ;
-(NSString *)localizedAccessoryTitle;
-(void)setLocalizedAccessoryTitle:(NSString *)arg1 ;
-(NSString *)backgroundEffectViewGroupName;
-(void)setStatisticsIdentifier:(NSString *)arg1 ;
@end

