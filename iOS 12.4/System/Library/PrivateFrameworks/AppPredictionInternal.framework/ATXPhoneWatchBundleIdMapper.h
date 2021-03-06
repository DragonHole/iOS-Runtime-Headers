/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSDictionary, LSApplicationProxy;

@interface ATXPhoneWatchBundleIdMapper : NSObject {

	NSSet* _blackListedWatchApps;
	NSSet* _sameBundleIdApps;
	NSDictionary* _phoneToWatch;
	NSDictionary* _watchToPhone;
	LSApplicationProxy* _mockApplicationProxy;

}

@property (nonatomic,retain) LSApplicationProxy * mockApplicationProxy;              //@synthesize mockApplicationProxy=_mockApplicationProxy - In the implementation block
-(id)watchBundleIdForPhoneBundleId:(id)arg1 ;
-(id)phoneBundleIdForWatchBundleId:(id)arg1 ;
-(id)initWithAssetClass:(Class)arg1 ;
-(LSApplicationProxy *)mockApplicationProxy;
-(void)setMockApplicationProxy:(LSApplicationProxy *)arg1 ;
-(id)init;
@end

