/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTKCharacterTimeView, CADisplayLink;

@interface NTKCharacterDisplayLink : NSObject {

	NTKCharacterTimeView* _timeView;
	CADisplayLink* _displayLink;

}
-(void)drawView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 loader:(id)arg2 ;
-(void)invalidate;
-(void)setPaused:(BOOL)arg1 ;
-(void)setAnimationFrameInterval:(long long)arg1 ;
@end

