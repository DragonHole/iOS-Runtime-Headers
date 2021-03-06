/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFContactlessPaymentSessionCallbacks <NFContactlessSessionCallbacks>
@optional
-(void)didSelectValueAddedService:(BOOL)arg1;
-(void)didPerformValueAddedServiceTransactions:(id)arg1;
-(void)didReceivePendingServerRequest;
-(void)didExpressModeStateChange:(unsigned)arg1 withObject:(id)arg2;
-(void)didReceiveActivityTimeout:(id)arg1;

@required
-(void)didFelicaStateChange:(id)arg1;
-(void)didReceiveButtonPressForApplet:(id)arg1;
-(void)didExpireTransactionForApplet:(id)arg1;
-(void)didStartTransaction:(id)arg1;
-(void)didEndTransaction:(id)arg1;
-(void)didFailDeferredAuthorization;

@end

