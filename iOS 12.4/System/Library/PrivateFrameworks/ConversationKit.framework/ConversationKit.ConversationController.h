/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVCRemoteVideoClientDelegate.h>
#import <libobjc.A.dylib/TUAudioFrequencyControllerDelegate.h>

@class NSString;

@interface ConversationKit.ConversationController : NSObject <AVCRemoteVideoClientDelegate, TUAudioFrequencyControllerDelegate> {

	 localParticipant;
	 remoteParticipants;
	 includeLocalParticipantInVisibleParticipants;
	 audioFrequencyController;
	 audioCallbackQueue;
	 recentPresentationContexts;
	 conversationState;
	 deviceOrientation;
	 broadcastingState;
	 didAddVisibleParticipant;
	 didRemoveVisibleParticipant;
	 didUpdateVisibleParticipant;
	 visibleParticipantDidBecomeActive;
	 didStartVideoForVisibleParticipant;
	 participantsMediaPrioritiesDidChange;
	 participantAudioPowerDidChange;
	 audioRouteDidChange;
	 carPlayConnectedDidChange;
	 didUpdateLocalParticipant;
	 didStartVideoForLocalParticipant;
	 conversationStateDidChange;
	 enableVideoOnJoin;
	 participantMediaProviderCreator;
	 callCenter;
	 call;
	 conversationUUID;
	 availableParticipantColors;

}

@property (readonly,nonatomic) NSString * description; 
-(void)handleLocalVideoPreviewFirstFrameArrived:(id)arg1 ;
-(void)handleScreenConnectionDidUpdate:(id)arg1 ;
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidSuspend:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2 ;
-(void)frequencyController:(id)arg1 audioPowerChanged:(float)arg2 forParticipantWithStreamToken:(unsigned long long)arg3 ;
-(id)init;
-(NSString *)description;
@end

