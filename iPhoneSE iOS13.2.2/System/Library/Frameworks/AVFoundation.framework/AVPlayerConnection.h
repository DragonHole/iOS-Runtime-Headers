/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVWeakReference, NSError;

@interface AVPlayerConnection : NSObject {

	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	long long _status;
	NSError* _error;

}

@property (nonatomic,readonly) long long status; 
-(void)dealloc;
-(id)description;
-(id)error;
-(long long)status;
-(id)player;
-(id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 ;
-(BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1 ;
-(void)removeItemFromPlayQueue;
-(id)playerItem;
@end

