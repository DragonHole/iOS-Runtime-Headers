/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AUAudioUnitBusArray.h>

@interface AUAudioUnitBusArray_XH : AUAudioUnitBusArray {

	BOOL _countWritable;

}
-(id)initWithOwner:(id)arg1 scope:(unsigned)arg2 busses:(id)arg3 countWritable:(BOOL)arg4 ;
-(BOOL)isCountChangeable;
-(BOOL)setBusCount:(unsigned long long)arg1 error:(id*)arg2 ;
@end
