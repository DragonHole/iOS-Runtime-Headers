/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableSet;

@interface _NACAudioRoutesRecord : NSObject {

	NSArray* _audioRoutes;
	NSArray* _deferredAudioRoutes;
	NSMutableSet* _observers;
	double _timestamp;

}

@property (nonatomic,retain) NSArray * audioRoutes;                      //@synthesize audioRoutes=_audioRoutes - In the implementation block
@property (nonatomic,retain) NSArray * deferredAudioRoutes;              //@synthesize deferredAudioRoutes=_deferredAudioRoutes - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
-(NSArray *)deferredAudioRoutes;
-(void)setDeferredAudioRoutes:(NSArray *)arg1 ;
-(NSArray *)audioRoutes;
-(void)setAudioRoutes:(NSArray *)arg1 ;
-(double)timestamp;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(void)setTimestamp:(double)arg1 ;
@end

