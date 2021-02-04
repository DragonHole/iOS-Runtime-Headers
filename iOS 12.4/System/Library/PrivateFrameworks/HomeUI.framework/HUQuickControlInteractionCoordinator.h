/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUQuickControlControllableView, HUQuickControlInteractionCoordinatorDelegate;
@class UIView;

@interface HUQuickControlInteractionCoordinator : NSObject {

	BOOL _viewVisible;
	BOOL _userInteractionEnabled;
	UIView*<HUQuickControlControllableView> _controlView;
	id<HUQuickControlInteractionCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic) BOOL viewVisible;                                                              //@synthesize viewVisible=_viewVisible - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                   //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (getter=isUserInteractionActive,nonatomic,readonly) BOOL userInteractionActive; 
@property (nonatomic,retain) id value; 
@property (nonatomic,readonly) UIView*<HUQuickControlControllableView> controlView;                         //@synthesize controlView=_controlView - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlInteractionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setViewVisible:(BOOL)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)initWithControlView:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isUserInteractionActive;
-(BOOL)viewVisible;
-(void)setDelegate:(id<HUQuickControlInteractionCoordinatorDelegate>)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id<HUQuickControlInteractionCoordinatorDelegate>)delegate;
-(BOOL)isUserInteractionEnabled;
-(UIView*<HUQuickControlControllableView>)controlView;
@end
