/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIView;

@interface PLUIAccessibilityMockSlider : UIAccessibilityElement {

	UIView* _view;
	id _mockSliderDelegate;

}

@property (nonatomic,retain) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id mockSliderDelegate;              //@synthesize mockSliderDelegate=_mockSliderDelegate - In the implementation block
-(id)mockSliderDelegate;
-(void)setMockSliderDelegate:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
@end

