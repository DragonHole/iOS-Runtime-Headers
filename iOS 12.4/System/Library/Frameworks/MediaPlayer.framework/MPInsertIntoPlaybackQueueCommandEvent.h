/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSArray, MPRemotePlaybackQueue, NSString;

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent {

	NSArray* _supportedInsertionPositions;
	long long _insertionPosition;
	MPRemotePlaybackQueue* _playbackQueue;
	NSString* _insertAfterContentItemID;
	long long _destinationOffset;

}

@property (nonatomic,copy) NSArray * supportedInsertionPositions;                  //@synthesize supportedInsertionPositions=_supportedInsertionPositions - In the implementation block
@property (nonatomic,readonly) long long insertionPosition;                        //@synthesize insertionPosition=_insertionPosition - In the implementation block
@property (nonatomic,readonly) MPRemotePlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) NSString * insertAfterContentItemID;                //@synthesize insertAfterContentItemID=_insertAfterContentItemID - In the implementation block
@property (nonatomic,readonly) long long destinationOffset;                        //@synthesize destinationOffset=_destinationOffset - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(MPRemotePlaybackQueue *)playbackQueue;
-(long long)destinationOffset;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 options:(id)arg3 ;
-(NSArray *)supportedInsertionPositions;
-(void)setSupportedInsertionPositions:(NSArray *)arg1 ;
-(long long)insertionPosition;
-(NSString *)insertAfterContentItemID;
@end

