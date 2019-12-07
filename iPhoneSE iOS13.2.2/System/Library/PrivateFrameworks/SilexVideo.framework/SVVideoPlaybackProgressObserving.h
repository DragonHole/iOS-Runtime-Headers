/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoPlaybackProgressObserving <NSObject>
@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double progress; 
@property (setter=onProgressChanged:,nonatomic,copy) id progressChangedBlock; 
@property (setter=onReset:,nonatomic,copy) id resetBlock; 
@required
-(double)progress;
-(double)duration;
-(double)time;
-(id)resetBlock;
-(id)progressChangedBlock;
-(void)onProgressChanged:(/*^block*/id)arg1;
-(void)onReset:(/*^block*/id)arg1;

@end
