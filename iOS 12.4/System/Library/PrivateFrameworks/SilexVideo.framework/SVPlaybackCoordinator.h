/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVPlayerItemLoading;
@class SVPlayer;

@interface SVPlaybackCoordinator : NSObject {

	SVPlayer* _player;
	id<SVPlayerItemLoading> _playerItemLoader;

}

@property (nonatomic,readonly) SVPlayer * player;                                     //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) id<SVPlayerItemLoading> playerItemLoader;              //@synthesize playerItemLoader=_playerItemLoader - In the implementation block
-(SVPlayer *)player;
-(void)loadVideoIfNeeded;
-(id<SVPlayerItemLoading>)playerItemLoader;
-(id)initWithPlayer:(id)arg1 playerItemLoader:(id)arg2 ;
-(void)load;
-(void)play;
-(void)pause;
@end

