/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol IMAssistantAudioPlayerDelegate;
@class NSString, AVAudioPlayer;

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	id<IMAssistantAudioPlayerDelegate> _delegate;
	NSString* _identifier;
	AVAudioPlayer* _player;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(void)stopPlaying;
-(long long)playerState;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(BOOL)setupAudioSession;
-(void)cleanupAudioSession;
-(BOOL)startPlayingAudioURL:(id)arg1 ;
-(NSString *)identifier;
@end
