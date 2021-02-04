/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFoundation/AVQueuePlayer.h>

@class ISRateCurveRequest;

@interface ISAVPlayer : AVQueuePlayer {

	ISRateCurveRequest* _currentRequest;

}
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)playToTime:(SCD_Struct_IS4)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)_cancelRateCurveRequest;
-(void)_setRate:(float)arg1 ;
-(void)dealloc;
-(void)setRate:(float)arg1 ;
@end
