/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPSectionedCollection;

@interface MPCModelRadioGetTracksResponse : NSObject {

	long long _tracklistAction;
	MPSectionedCollection* _tracks;

}

@property (nonatomic,readonly) long long tracklistAction;                        //@synthesize tracklistAction=_tracklistAction - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * tracks;              //@synthesize tracks=_tracks - In the implementation block
-(MPSectionedCollection *)tracks;
-(id)initWithTracks:(id)arg1 tracklistAction:(long long)arg2 ;
-(long long)tracklistAction;
@end

