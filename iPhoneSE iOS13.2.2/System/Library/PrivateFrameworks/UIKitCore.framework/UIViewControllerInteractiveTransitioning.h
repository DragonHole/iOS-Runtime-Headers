/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIViewControllerInteractiveTransitioning <NSObject>
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@optional
-(double)completionSpeed;
-(long long)completionCurve;
-(BOOL)wantsInteractiveStart;

@required
-(void)startInteractiveTransition:(id)arg1;

@end

