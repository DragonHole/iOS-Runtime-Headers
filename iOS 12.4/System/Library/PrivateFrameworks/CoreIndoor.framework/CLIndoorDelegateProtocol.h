/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
