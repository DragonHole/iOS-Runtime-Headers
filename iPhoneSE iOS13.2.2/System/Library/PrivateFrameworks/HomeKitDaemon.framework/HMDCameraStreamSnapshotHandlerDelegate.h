/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDCameraStreamSnapshotHandlerDelegate <NSObject>
@optional
-(void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(BOOL)arg2;

@required
-(void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
-(void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;

@end

