/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HMMediaSessionDelegate.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMMediaSessionDelegate;
@class NSUUID, HMAudioControl, NSString, _HMMediaSession, HMMediaProfile;

@interface HMMediaSession : NSObject <_HMMediaSessionDelegate, HMObjectMerge, NSSecureCoding> {

	NSUUID* _uuid;
	long long _playbackState;
	HMAudioControl* _audioControl;
	NSString* _routeUID;
	id<HMMediaSessionDelegate> _delegate;
	_HMMediaSession* _mediaSession;
	HMMediaProfile* _mediaProfile;

}

@property (nonatomic,retain) _HMMediaSession * mediaSession;                //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (__weak) HMMediaProfile * mediaProfile;                           //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (nonatomic,readonly) NSString * routeUID;                         //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (__weak) id<HMMediaSessionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long playbackState;                               //@synthesize playbackState=_playbackState - In the implementation block
@property (readonly) HMAudioControl * audioControl;                         //@synthesize audioControl=_audioControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)routeUID;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)updatePlaybackState:(id)arg1 ;
-(void)configure:(id)arg1 messageTargetUUID:(id)arg2 ;
-(id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3 ;
-(void)mediaSession:(id)arg1 didUpdateRouteUID:(id)arg2 ;
-(void)refreshPlaybackStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMediaProfile:(HMMediaProfile *)arg1 ;
-(HMAudioControl *)audioControl;
-(id)playbackStateDescription;
-(void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2 ;
-(void)pauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)messageTargetUUID;
-(HMMediaProfile *)mediaProfile;
-(_HMMediaSession *)mediaSession;
-(long long)playbackState;
-(void)setMediaSession:(_HMMediaSession *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setDelegate:(id<HMMediaSessionDelegate>)arg1 ;
-(id<HMMediaSessionDelegate>)delegate;
-(NSUUID *)uniqueIdentifier;
@end
