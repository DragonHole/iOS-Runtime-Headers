/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, NSArray;


@protocol WFDragCoordinator <NSObject>
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) NSArray * participatingViewControllers; 
@property (nonatomic,readonly) NSArray * scrollViewsAffectingDrag; 
@property (nonatomic,readonly) id<WFModuleDelegate> moduleDelegate; 
@required
-(UIView *)containerView;
-(NSArray *)participatingViewControllers;
-(NSArray *)scrollViewsAffectingDrag;
-(id<WFModuleDelegate>)moduleDelegate;

@end

