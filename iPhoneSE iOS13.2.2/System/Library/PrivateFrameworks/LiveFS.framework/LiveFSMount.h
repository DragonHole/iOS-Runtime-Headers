/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LiveFSMount
@required
-(void)LiveMountList:(/*^block*/id)arg1;
-(void)LiveMountListenerForVolume:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)LiveMountEjectVolume:(id)arg1 withFlags:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)LiveMountEjectDisk:(id)arg1 reply:(/*^block*/id)arg2;
-(void)LiveMountListenerForVolume:(id)arg1 reply:(/*^block*/id)arg2;
-(void)LiveMountSharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 reply:(/*^block*/id)arg4;
-(void)LiveMountAddVolume:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4 reply:(/*^block*/id)arg5;
-(void)LiveMountAddDisk:(id)arg1 reply:(/*^block*/id)arg2;
-(void)LiveMountAddVolume:(id)arg1 withListener:(id)arg2 andWithDescription:(id)arg3 reply:(/*^block*/id)arg4;
-(void)LiveMountCredentialTypes:(/*^block*/id)arg1;

@end

