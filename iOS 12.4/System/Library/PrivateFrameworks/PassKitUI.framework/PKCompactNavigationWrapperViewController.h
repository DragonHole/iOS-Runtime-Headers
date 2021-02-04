/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKWrapperViewController.h>

@interface PKCompactNavigationWrapperViewController : PKWrapperViewController {

	BOOL _hasExplicitTargetNavigationHeight;
	double _targetNavigationHeight;

}

@property (nonatomic,readonly) BOOL hasExplicitTargetNavigationHeight;              //@synthesize hasExplicitTargetNavigationHeight=_hasExplicitTargetNavigationHeight - In the implementation block
@property (assign,nonatomic) double targetNavigationHeight;                         //@synthesize targetNavigationHeight=_targetNavigationHeight - In the implementation block
-(CGRect)_wrappedViewControllerFrameForBounds:(CGRect)arg1 ;
-(void)setTargetNavigationHeight:(double)arg1 ;
-(BOOL)hasExplicitTargetNavigationHeight;
-(double)targetNavigationHeight;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
@end
