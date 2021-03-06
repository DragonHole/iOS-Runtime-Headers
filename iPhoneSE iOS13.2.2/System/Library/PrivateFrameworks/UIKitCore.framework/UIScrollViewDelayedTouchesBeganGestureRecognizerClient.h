/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>
@property (nonatomic,readonly) BOOL delaysContentTouches; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) double scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) BOOL canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) BOOL canScrollY; 
@required
-(BOOL)_canScrollX;
-(BOOL)_canScrollY;
-(BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
-(BOOL)delaysContentTouches;
-(double)_touchDelayForScrollDetection;
-(double)_scrollHysteresis;

@end

