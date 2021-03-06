/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAssistantCore/IMAssistantMessageQueryHandler.h>
#import <IMAssistantCore/IMAssistantAudioPlayerDelegate.h>
#import <libobjc.A.dylib/INPlayAudioMessageIntentHandling.h>

@class IMAssistantAudioPlayer, NSString;

@interface IMAssistantMessagePlayAudioHandler : IMAssistantMessageQueryHandler <IMAssistantAudioPlayerDelegate, INPlayAudioMessageIntentHandling> {

	IMAssistantAudioPlayer* _audioPlayer;
	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePlayAudioMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmPlayAudioMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)imAssistantAudioPlayer:(id)arg1 didUpdateState:(long long)arg2 ;
-(id)createAudioPlayerWithIdentifier:(id)arg1 ;
-(void)queryAudioMessageURLForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)activeAudioPlayer;
@end

