/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemoteCommand.h>

@interface MPSkipTrackCommand : MPRemoteCommand {

	SCD_Struct_MP6 _skipLimit;

}

@property (assign,nonatomic) SCD_Struct_MP6 skipLimit;              //@synthesize skipLimit=_skipLimit - In the implementation block
-(SCD_Struct_MP6)skipLimit;
-(void)setSkipLimit:(SCD_Struct_MP6)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
@end
