/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIStackView, NSArray, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarMultilineStringView : UIView <_UIStatusBarDisplayable> {

	long long _numberOfLines;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;                                                //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                                                //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) NSArray * stringViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)numberOfLines;
-(UIStackView *)stackView;
-(id)viewForLastBaselineLayout;
-(void)setStackView:(UIStackView *)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)applyStyleAttributes:(id)arg1 ;
-(NSArray *)stringViews;
@end
