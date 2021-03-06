/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@interface TopoProgressBar : CALayer {

	id _owningView;
	float _progressValue;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) float progressValue;              //@synthesize progressValue=_progressValue - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
-(float)progressValue;
-(CGSize)preferredFrameSize;
-(void)setProgressValue:(float)arg1 ;
-(CGImageRef)composeProgressBar;
-(void)dealloc;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(id)initWithOwningView:(id)arg1 ;
-(void)layoutSublayers;
@end

