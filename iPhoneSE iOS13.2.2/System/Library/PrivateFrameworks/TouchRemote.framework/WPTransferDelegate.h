/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPTransferDelegate <NSObject>
@required
-(void)transferDidFailToStartAdvertising:(id)arg1;
-(void)transferDidFailToStartScanning:(id)arg1;
-(void)transferDidFailWithError:(id)arg1;
-(id)transferDidReceiveData:(id)arg1;
-(void)transferComplete;
-(void)transferDidUpdateAdvertiserState:(id)arg1;
-(void)transferDidUpdateScannerState:(id)arg1;

@end

