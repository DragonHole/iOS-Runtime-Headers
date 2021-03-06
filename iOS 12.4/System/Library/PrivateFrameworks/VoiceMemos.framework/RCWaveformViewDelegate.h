/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCWaveformViewDelegate <NSObject>
@required
-(void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(BOOL)arg3;
-(void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1;
-(void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1;
-(void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(SCD_Struct_RC1)arg2;

@end

