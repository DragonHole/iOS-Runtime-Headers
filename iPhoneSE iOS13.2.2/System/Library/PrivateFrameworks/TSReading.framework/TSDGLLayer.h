/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@protocol TSDGLLayerDelegate, TSDGLLayerContext;
@class NSObject, CADisplayLink;

@interface TSDGLLayer : CAEAGLLayer {

	NSObject*<TSDGLLayerDelegate> mDelegate;
	id<TSDGLLayerContext> mContext;
	CADisplayLink* mDisplayLink;

}

@property (assign,nonatomic) NSObject*<TSDGLLayerDelegate> animationDelegate; 
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)teardown;
-(void)startAnimation;
-(void)stopAnimation;
-(void)pauseAnimation;
-(void)setAnimationDelegate:(NSObject*<TSDGLLayerDelegate>)arg1 ;
-(NSObject*<TSDGLLayerDelegate>)animationDelegate;
-(void)resumeAnimation;
-(void)p_drawFrameAtLayerTime:(double)arg1 ;
-(void)p_drawFrameFromDisplayLink:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 isOpaque:(BOOL)arg2 delegate:(id)arg3 ;
-(void)setCurrentContext;
-(void)displayAtCurrentLayerTime;
@end
