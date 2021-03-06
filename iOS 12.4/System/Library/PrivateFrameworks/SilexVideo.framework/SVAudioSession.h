/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMapTable;

@interface SVAudioSession : NSObject {

	BOOL _audioSessionActive;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSMapTable* _players;

}

@property (assign,getter=isAudioSessionActive,nonatomic) BOOL audioSessionActive;              //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;                     //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,readonly) NSMapTable * players;                                           //@synthesize players=_players - In the implementation block
+(id)sharedSession;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)addInterestForPlayer:(id)arg1 withMode:(int)arg2 ;
-(void)removeInterestForPlayer:(id)arg1 ;
-(NSMapTable *)players;
-(BOOL)isAudioSessionActive;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(void)setupAudioSessionCategory;
-(void)activateAudioSessionCategory;
-(void)deactivateAudioSessionCategory;
-(id)desiredAudioSessionCategory;
-(BOOL)needsToSetupAudioSessionCategory;
-(BOOL)shouldActivateAudioSession;
-(BOOL)canDeactivateAudioSession;
-(id)init;
@end

