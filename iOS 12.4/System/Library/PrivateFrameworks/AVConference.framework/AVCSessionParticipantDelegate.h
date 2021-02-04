/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCSessionParticipantDelegate <NSObject>
@optional
-(void)participant:(id)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(id)arg4;
-(void)participant:(id)arg1 remoteAudioEnabledDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteVideoEnabledDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteAudioPausedDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 remoteVideoPausedDidChange:(BOOL)arg2;
-(void)participant:(id)arg1 prominenceDidChange:(id)arg2;
-(void)participant:(id)arg1 mediaPrioritiesDidChange:(id)arg2;

@end
