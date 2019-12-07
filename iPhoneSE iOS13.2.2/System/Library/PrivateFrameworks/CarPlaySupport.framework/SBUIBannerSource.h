/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBannerSource <NSObject>
@optional
-(void)bannerViewWillAppear:(id)arg1;
-(void)bannerViewDidAppear:(id)arg1;
-(void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;

@required
-(id)peekNextBannerItemForTarget:(id)arg1;
-(id)dequeueNextBannerItemForTarget:(id)arg1;
-(id)newBannerViewForContext:(id)arg1;

@end
