/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassGroupViewReceiver <NSObject>
@optional
-(void)groupViewDidMoveToReceiver:(id)arg1;
-(void)groupViewWillBeAvailable:(id)arg1;
-(void)groupViewNeedsAnimating:(id)arg1 withVelocity:(double)arg2 dragging:(BOOL)arg3;
-(void)willDeletePass:(id)arg1;
-(void)didDeletePass:(id)arg1;
-(void)setTransitionDuration:(double)arg1;

@required
-(void)groupViewIsAvailable:(id)arg1;
-(void)leadingHeaderViewInterstitialIsAvailable:(id)arg1;
-(void)trailingHeaderViewInterstitialIsAvailable:(id)arg1;

@end

