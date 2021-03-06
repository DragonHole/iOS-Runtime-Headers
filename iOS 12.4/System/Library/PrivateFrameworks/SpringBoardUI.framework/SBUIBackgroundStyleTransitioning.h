/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBackgroundStyleTransitioning <NSObject>
@property (assign,nonatomic) long long backgroundStyle; 
@property (getter=isTransitioningBackgroundStyle,nonatomic,readonly) BOOL transitioningBackgroundStyle; 
@required
-(void)beginTransitionToBackgroundStyle:(long long)arg1;
-(void)completeTransitionToBackgroundStyle:(long long)arg1;
-(void)updateBackgroundStyleTransitionProgress:(double)arg1;
-(BOOL)isTransitioningBackgroundStyle;
-(void)setBackgroundStyle:(long long)arg1;
-(long long)backgroundStyle;

@end

