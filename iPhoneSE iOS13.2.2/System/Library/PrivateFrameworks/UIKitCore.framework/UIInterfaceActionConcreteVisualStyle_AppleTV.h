/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionConcreteVisualStyle.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl.h>

@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_AppleTV : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(id)defaultScreen;
-(double)contentCornerRadius;
-(UIEdgeInsets)contentMargin;
-(double)horizontalImageContentSpacing;
-(double)verticalImageContentSpacing;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(double)actionSectionSpacing;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(CGSize)minimumActionContentSize;
-(BOOL)selectByPressGestureRequired;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingLabelStyling;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
@end
