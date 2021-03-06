/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptMediaItem, NSNumber;

@interface SUScriptMusicPlayerController : SUScriptObject {

	NSString* _playerType;

}

@property (readonly) double currentPlaybackTime; 
@property (readonly) SUScriptMediaItem * nowPlayingItem; 
@property (readonly) NSString * playbackState; 
@property (readonly) NSString * playerType; 
@property (copy) NSString * repeatMode; 
@property (copy) NSString * shuffleMode; 
@property (retain) NSNumber * volume; 
@property (readonly) NSString * playbackStateInterrupted; 
@property (readonly) NSString * playbackStatePaused; 
@property (readonly) NSString * playbackStatePlaying; 
@property (readonly) NSString * playbackStateSeekingBackward; 
@property (readonly) NSString * playbackStateSeekingForward; 
@property (readonly) NSString * playbackStateStopped; 
@property (readonly) NSString * repeatModeAll; 
@property (readonly) NSString * repeatModeDefault; 
@property (readonly) NSString * repeatModeNone; 
@property (readonly) NSString * repeatModeOne; 
@property (readonly) NSString * shuffleModeAlbums; 
@property (readonly) NSString * shuffleModeDefault; 
@property (readonly) NSString * shuffleModeOff; 
@property (readonly) NSString * shuffleModeSongs; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)scriptPlaybackStateForNativePlaybackState:(long long)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(void)setShuffleMode:(NSString *)arg1 ;
-(NSString *)shuffleMode;
-(SUScriptMediaItem *)nowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 ;
-(void)endSeeking;
-(double)currentPlaybackTime;
-(id)initWithPlayerType:(id)arg1 ;
-(NSString *)repeatModeAll;
-(NSString *)repeatModeDefault;
-(NSString *)repeatModeNone;
-(NSString *)repeatModeOne;
-(NSString *)shuffleModeAlbums;
-(NSString *)shuffleModeDefault;
-(NSString *)shuffleModeOff;
-(NSString *)shuffleModeSongs;
-(NSString *)playbackStateInterrupted;
-(NSString *)playbackStatePaused;
-(NSString *)playbackStatePlaying;
-(NSString *)playbackStateSeekingBackward;
-(NSString *)playbackStateSeekingForward;
-(NSString *)playbackStateStopped;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setQueueWithItemCollection:(id)arg1 ;
-(NSString *)playerType;
-(NSString *)repeatMode;
-(void)setRepeatMode:(NSString *)arg1 ;
-(NSString *)playbackState;
-(void)dealloc;
-(void)stop;
-(void)play;
-(void)setVolume:(NSNumber *)arg1 ;
-(NSNumber *)volume;
-(void)pause;
@end

