/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface VUIPlaybackPositionInfo : NSObject <NSCopying> {

	NSNumber* _bookmarkTime;
	NSNumber* _playCount;
	NSNumber* _hasBeenPlayed;

}

@property (nonatomic,retain) NSNumber * bookmarkTime;               //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,retain) NSNumber * playCount;                  //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,retain) NSNumber * hasBeenPlayed;              //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)bookmarkTime;
-(void)setBookmarkTime:(NSNumber *)arg1 ;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(NSNumber *)hasBeenPlayed;
-(NSNumber *)playCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

