/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand {

	NSArray* _preferredIntervals;

}

@property (nonatomic,copy) NSArray * preferredIntervals;              //@synthesize preferredIntervals=_preferredIntervals - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setPreferredIntervals:(NSArray *)arg1 ;
-(id)newCommandEventWithInterval:(double)arg1 ;
-(NSArray *)preferredIntervals;
@end
