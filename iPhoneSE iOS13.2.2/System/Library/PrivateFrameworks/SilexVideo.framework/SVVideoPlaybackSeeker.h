/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoPlaybackSeeking.h>

@class SVPlayer, NSString;

@interface SVVideoPlaybackSeeker : NSObject <SVVideoPlaybackSeeking> {

	SVPlayer* _player;

}

@property (nonatomic,readonly) SVPlayer * player;                   //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)seekToStart;
@end
