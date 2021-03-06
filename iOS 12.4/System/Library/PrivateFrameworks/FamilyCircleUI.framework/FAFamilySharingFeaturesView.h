/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIButton, UIStackView;

@interface FAFamilySharingFeaturesView : UIView {

	long long _context;
	UIButton* _learnMoreButton;
	BOOL _shouldHideLocationSharing;
	UIStackView* _stack;

}
+(id)rowForIcon:(id)arg1 andLabel:(id)arg2 ;
-(void)_updateFonts;
-(id)initWithContext:(long long)arg1 hideLocationSharing:(BOOL)arg2 ;
-(id)_imageViewWithIconNamed:(id)arg1 addBorder:(BOOL)arg2 ;
-(id)_labelWithStringAtKey:(id)arg1 ;
-(void)_learnMoreButtonTapped:(id)arg1 ;
-(id)_contextSensitiveLocalizedStringWithKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

