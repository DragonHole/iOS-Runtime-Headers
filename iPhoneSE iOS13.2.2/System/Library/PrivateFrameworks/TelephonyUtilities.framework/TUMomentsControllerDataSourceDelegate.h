/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUMomentsControllerDataSourceDelegate <NSObject>
@required
-(void)dataSource:(id)arg1 didUpdateCapabilities:(id)arg2 forVideoStreamToken:(long long)arg3;
-(void)dataSource:(id)arg1 willCaptureRemoteRequestFromRequesterID:(id)arg2;
-(void)dataSource:(id)arg1 didReceiveLocallyRequestedMomentDescriptor:(id)arg2;
-(void)serverDiedForDataSource:(id)arg1;

@end

