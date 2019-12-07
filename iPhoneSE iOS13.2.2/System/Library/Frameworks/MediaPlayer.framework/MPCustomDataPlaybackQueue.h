/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString, NSData;

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSData *)data;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 data:(id)arg2 ;
@end
