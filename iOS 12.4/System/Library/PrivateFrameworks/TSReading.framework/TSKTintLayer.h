/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer {

	CALayer* _contentsLayer;

}

@property (nonatomic,retain) CALayer * contentsLayer;              //@synthesize contentsLayer=_contentsLayer - In the implementation block
@property (assign) CGColorRef tintColor; 
-(void)setContentsLayer:(CALayer *)arg1 ;
-(CALayer *)contentsLayer;
-(void)dealloc;
-(void)setTintColor:(CGColorRef)arg1 ;
-(CGColorRef)tintColor;
-(void)setNeedsDisplay;
-(id)contents;
-(void)setContents:(id)arg1 ;
-(void)layoutSublayers;
@end
