/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnitTimeEffect.h>

@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@property (assign,nonatomic) float overlap; 
-(void)setPitch:(float)arg1 ;
-(float)pitch;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
-(id)init;
-(void)setRate:(float)arg1 ;
-(float)rate;
@end

