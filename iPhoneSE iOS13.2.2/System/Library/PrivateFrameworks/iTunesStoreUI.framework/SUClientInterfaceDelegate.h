/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegate <NSObject>
@optional
-(void)clientInterfaceDidFinishLoading:(id)arg1;
-(void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
-(void)clientInterface:(id)arg1 financeInterruptionResolved:(BOOL)arg2;
-(void)clientInterface:(id)arg1 overrideCreditCardPresentationFromViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(void)clientInterface:(id)arg1 overrideRedeemCameraPerformAction:(long long)arg2 withObject:(id)arg3;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(long long)arg3;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(BOOL)arg3;
-(id)previewOverlayForClientInterface:(id)arg1;
-(void)returnToLibraryForClientInterface:(id)arg1;
-(id)scriptInterfaceForClientInterface:(id)arg1;
-(id)tabBarControllerForClientInterface:(id)arg1;

@end
