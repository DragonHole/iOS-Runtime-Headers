/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCPlayerRateCommand <MPCPlayerCommand>
@property (nonatomic,readonly) float minimumValue; 
@property (nonatomic,readonly) float maximumValue; 
@required
-(id)changeValue:(float)arg1;
-(float)minimumValue;
-(float)maximumValue;

@end
