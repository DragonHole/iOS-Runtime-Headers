/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DevicePINControllerDelegate <NSObject>
@optional
-(void)didAcceptEnteredPIN:(id)arg1;
-(void)didCancelEnteringPIN;
-(void)devicePINControllerDidDismissPINPane:(id)arg1;
-(void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
-(void)didAcceptSetPIN;
-(void)devicePINController:(id)arg1 didFailToChangePinWithError:(id)arg2;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
-(void)didAcceptChangedPIN;
-(void)willAcceptEnteredPIN;
-(void)didAcceptEnteredPIN;
-(void)didAcceptRemovePIN;
-(void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)willCancelEnteringPIN;

@end

