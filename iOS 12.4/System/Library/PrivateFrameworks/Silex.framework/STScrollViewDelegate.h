/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STScrollViewDelegate <NSObject>
@optional
-(BOOL)scrollView:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
-(BOOL)accessibilityShouldScrollForScrollView:(id)arg1 defaultValue:(BOOL)arg2;
-(BOOL)accessibilityShouldScrollForScrollView:(id)arg1;

@required
-(void)didTouchScrollView:(id)arg1 withEvent:(id)arg2;
-(BOOL)shouldPreventDraggingForScrollView:(id)arg1;

@end

