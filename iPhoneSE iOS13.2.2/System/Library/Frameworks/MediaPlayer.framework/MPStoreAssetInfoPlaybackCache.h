/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface MPStoreAssetInfoPlaybackCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _accessOrderedRequests;
	NSMutableDictionary* _requestToCachedResponse;

}
+(id)sharedCache;
-(id)_init;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)addCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2 ;
@end

