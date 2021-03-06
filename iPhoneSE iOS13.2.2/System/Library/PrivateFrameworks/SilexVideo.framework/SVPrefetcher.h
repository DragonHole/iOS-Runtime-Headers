/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVPrefetcher.h>

@protocol SVPrefetcher <NSObject>
@end


@protocol SVVideoBufferObserving, SVVideoLoadingStateObserving, SVVideoLoadingProgressObserving, SVVideoPlaybackProgressObserving;
@class SVPlaybackCoordinator, NSString;

@interface SVPrefetcher : NSObject <SVPrefetcher> {

	unsigned long long _prefetchPolicy;
	SVPlaybackCoordinator* _playbackCoordinator;
	id<SVVideoBufferObserving> _bufferObserver;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;
	id<SVVideoLoadingProgressObserving> _loadingProgressObserver;
	id<SVVideoPlaybackProgressObserving> _playbackProgressObserver;

}

@property (nonatomic,readonly) unsigned long long prefetchPolicy;                                          //@synthesize prefetchPolicy=_prefetchPolicy - In the implementation block
@property (nonatomic,readonly) SVPlaybackCoordinator * playbackCoordinator;                                //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (nonatomic,readonly) id<SVVideoBufferObserving> bufferObserver;                                  //@synthesize bufferObserver=_bufferObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserving> loadingStateObserver;                      //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingProgressObserving> loadingProgressObserver;                //@synthesize loadingProgressObserver=_loadingProgressObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackProgressObserving> playbackProgressObserver;              //@synthesize playbackProgressObserver=_playbackProgressObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoPlaybackProgressObserving>)playbackProgressObserver;
-(id)initWithPrefetchPolicy:(unsigned long long)arg1 playbackCoordinator:(id)arg2 bufferObserver:(id)arg3 loadingStateObserver:(id)arg4 loadingProgressObserver:(id)arg5 playbackProgressObserver:(id)arg6 ;
-(id<SVVideoLoadingProgressObserving>)loadingProgressObserver;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(void)prefetchingConditionsChanged;
-(unsigned long long)prefetchPolicy;
-(id<SVVideoBufferObserving>)bufferObserver;
-(SVPlaybackCoordinator *)playbackCoordinator;
@end

