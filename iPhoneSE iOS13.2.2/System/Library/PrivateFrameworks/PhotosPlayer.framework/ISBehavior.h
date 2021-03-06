/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ISBehaviorDelegate;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISPlayerState;

@interface ISBehavior : NSObject {

	BOOL _active;
	id<ISBehaviorDelegate> _delegate;
	ISPlayerState* _initialLayoutInfo;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                       //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<ISBehaviorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ISPlayerState * initialLayoutInfo;                 //@synthesize initialLayoutInfo=_initialLayoutInfo - In the implementation block
@property (nonatomic,readonly) long long behaviorType; 
-(id<ISBehaviorDelegate>)delegate;
-(void)setDelegate:(id<ISBehaviorDelegate>)arg1 ;
-(BOOL)isActive;
-(void)becomeActive;
-(void)resignActive;
-(long long)behaviorType;
-(void)setVideoVolume:(float)arg1 ;
-(id)initWithInitialLayoutInfo:(id)arg1 ;
-(void)activeDidChange;
-(void)videoPlayerItemDidChange;
-(void)setOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setVideoPlayRate:(float)arg1 ;
-(BOOL)seekVideoPlayerToTime:(SCD_Struct_IS1)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)seekVideoPlayerToTime:(SCD_Struct_IS1)arg1 toleranceBefore:(SCD_Struct_IS1)arg2 toleranceAfter:(SCD_Struct_IS1)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)prerollVideoAtRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVideoForwardPlaybackEndTime:(SCD_Struct_IS1)arg1 ;
-(void)videoDidPlayToEnd;
-(void)videoWillPlayToPhoto;
-(void)videoWillPlayToEnd;
-(void)videoReadyForDisplayDidChange;
-(ISPlayerState *)initialLayoutInfo;
@end

