/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSSession, NSString;

@interface IDSSession : NSObject {

	_IDSSession* _internal;

}

@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) NSString * sessionID; 
@property (nonatomic,readonly) NSString * destination; 
@property (assign,nonatomic) BOOL isAudioEnabled; 
@property (assign,nonatomic) BOOL isMuted; 
@property (assign,nonatomic) long long invitationTimeOut; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
-(id)_internal;
-(void)cancelInvitation;
-(void)sendInvitationWithOptions:(id)arg1 ;
-(unsigned)sessionEndedReason;
-(unsigned long long)initialLinkType;
-(void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2 ;
-(void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned)arg1 ;
-(void)cancelInvitationWithData:(id)arg1 ;
-(void)acceptInvitationWithData:(id)arg1 ;
-(void)declineInvitationWithData:(id)arg1 ;
-(void)endSessionWithData:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2 ;
-(void)sendAllocationRequest:(id)arg1 ;
-(BOOL)sendData:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldUseSocketForTransport;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 ;
-(id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 ;
-(void)setStreamPreferences:(id)arg1 ;
-(id)_streamPreferences;
-(void)setInvitationTimeOut:(long long)arg1 ;
-(long long)invitationTimeOut;
-(BOOL)isMuted;
-(void)declineInvitation;
-(BOOL)isAudioEnabled;
-(void)setIsAudioEnabled:(BOOL)arg1 ;
-(void)setIsMuted:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(unsigned long long)MTUForAddressFamily:(unsigned long long)arg1 ;
-(void)sendInvitationWithData:(id)arg1 ;
-(int)socket;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(void)acceptInvitation;
-(void)sendInvitation;
-(void)dealloc;
-(id)description;
-(unsigned)state;
-(NSString *)destination;
-(void)endSession;
-(NSString *)sessionID;
-(void)setPreferences:(id)arg1 ;
@end

