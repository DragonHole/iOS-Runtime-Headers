/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, _PASNotificationToken;

@interface PPSentiment : NSObject {

	float _weightBucketSize;
	float _intercept;
	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(float)sentimentScoreForText:(id)arg1 ;
-(BOOL)_loadAssetData;
-(float)_idxToFloat:(unsigned long long)arg1 ;
@end

