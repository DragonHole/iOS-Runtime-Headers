/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIView;


@protocol UIFocusEnvironment <NSObject>
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@optional
-(UIView *)preferredFocusedView;
-(id)soundIdentifierForFocusUpdateInContext:(id)arg1;

@required
-(void)setNeedsFocusUpdate;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;

@end

