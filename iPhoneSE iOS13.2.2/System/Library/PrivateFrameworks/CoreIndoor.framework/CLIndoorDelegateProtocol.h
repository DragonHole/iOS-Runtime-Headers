/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIndoorDelegateProtocol <NSObject>
@optional
-(void)indoorIsUncertainWithLocation:(id)arg1;
-(void)indoorGivesUpWithLocation:(id)arg1;
-(void)indoorAssetDownloadProgress:(float)arg1;
-(void)indoorDidFailWithError:(id)arg1;

@required
-(void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2;

@end

