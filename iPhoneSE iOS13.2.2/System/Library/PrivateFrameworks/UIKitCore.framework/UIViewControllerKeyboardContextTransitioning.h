/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol UIViewControllerKeyboardContextTransitioning <NSObject>
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> mainContext; 
@property (nonatomic,readonly) UIView * fromKeyboard; 
@property (nonatomic,readonly) CGRect fromKeyboardFrame; 
@property (nonatomic,readonly) UIView * toKeyboard; 
@property (nonatomic,readonly) CGRect toKeyboardFrame; 
@required
-(UIView *)toKeyboard;
-(UIView *)fromKeyboard;
-(CGRect)fromKeyboardFrame;
-(CGRect)toKeyboardFrame;
-(id<UIViewControllerContextTransitioning>)mainContext;

@end

