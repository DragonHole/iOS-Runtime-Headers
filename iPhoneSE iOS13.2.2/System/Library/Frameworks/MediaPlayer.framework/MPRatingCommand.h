/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPRatingCommand : MPRemoteCommand {

	float _minimumRating;
	float _maximumRating;

}

@property (assign,nonatomic) float minimumRating;              //@synthesize minimumRating=_minimumRating - In the implementation block
@property (assign,nonatomic) float maximumRating;              //@synthesize maximumRating=_maximumRating - In the implementation block
-(float)maximumRating;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setMinimumRating:(float)arg1 ;
-(void)setMaximumRating:(float)arg1 ;
-(id)newCommandEventWithRating:(float)arg1 ;
-(float)minimumRating;
@end

