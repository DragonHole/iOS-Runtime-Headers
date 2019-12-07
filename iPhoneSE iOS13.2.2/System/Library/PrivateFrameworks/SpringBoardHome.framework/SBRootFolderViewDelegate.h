/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRootFolderViewDelegate <SBFolderViewDelegate>
@optional
-(void)rootFolderView:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2;
-(double)distanceToTopOfSpotlightIconsForRootFolderView:(id)arg1;
-(double)maxExternalDockHeightForRootFolderView:(id)arg1;
-(double)externalDockHeightForRootFolderView:(id)arg1;
-(double)preferredExternalDockVerticalMarginForRootFolderView:(id)arg1;
-(id)backgroundViewForDockForRootFolderView:(id)arg1;
-(id)backgroundViewForEditingDoneButtonForRootFolderView:(id)arg1;
-(void)rootFolderView:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
-(void)rootFolderView:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
-(void)rootFolderView:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
-(void)rootFolderView:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2;

@end
