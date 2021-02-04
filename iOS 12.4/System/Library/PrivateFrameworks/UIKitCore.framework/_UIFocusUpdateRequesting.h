/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFocusSystem, _UIFocusInputDeviceInfo, UIFocusAnimationCoordinator;


@protocol _UIFocusUpdateRequesting <NSObject>
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem; 
@property (nonatomic,readonly) BOOL shouldPlayFocusSound; 
@property (nonatomic,readonly) BOOL requiresNextFocusedItem; 
@property (nonatomic,readonly) BOOL requiresEnvironmentValidation; 
@property (nonatomic,readonly) BOOL allowsFocusingCurrentItem; 
@property (nonatomic,readonly) BOOL allowsDeferral; 
@property (nonatomic,readonly) BOOL allowsFocusRestoration; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) UIFocusAnimationCoordinator * animationCoordinator; 
@required
-(UIFocusAnimationCoordinator *)animationCoordinator;
-(BOOL)allowsFocusRestoration;
-(UIFocusSystem *)focusSystem;
-(BOOL)allowsDeferral;
-(BOOL)shouldPlayFocusSound;
-(BOOL)shouldPerformHapticFeedback;
-(BOOL)requiresNextFocusedItem;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(BOOL)allowsFocusingCurrentItem;
-(BOOL)requiresEnvironmentValidation;

@end
