/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMFeatureTrackingObserver <NSObject>
@required
-(void)visionEngine:(id)arg1 didBeginTrackingFeature:(id)arg2 appliedOrientation:(id)arg3;
-(void)visionEngine:(id)arg1 didFinishTrackingFeature:(id)arg2 appliedOrientation:(id)arg3;
-(void)visionEngine:(id)arg1 trackingFeatureLocationDidChange:(id)arg2 appliedOrientation:(id)arg3;

@end

