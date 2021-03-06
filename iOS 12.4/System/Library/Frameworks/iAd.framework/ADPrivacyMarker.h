/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint;

@interface ADPrivacyMarker : UIButton {

	BOOL _isVideo;
	NSLayoutConstraint* _constraintHeight;
	NSLayoutConstraint* _constraintWidth;

}

@property (assign,nonatomic) BOOL isVideo;                                       //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * constraintHeight;              //@synthesize constraintHeight=_constraintHeight - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * constraintWidth;               //@synthesize constraintWidth=_constraintWidth - In the implementation block
+(id)localizedAdMarkerText;
+(id)bundleForLocalizedString;
+(id)deviceContentSize;
+(id)dimensionsForVideoMarker;
+(id)localizedLearnMoreText;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)resetBannerMarkerForVideoMarker;
-(void)setConstraintHeight:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintWidth:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)constraintHeight;
-(NSLayoutConstraint *)constraintWidth;
-(void)updateAdMarkerSpec;
-(void)updateBackgroundAndTintColor;
-(void)renderMarkerForBannerForCategory:(id)arg1 andLanguage:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(CGSize)intrinsicContentSize;
-(BOOL)isVideo;
@end

