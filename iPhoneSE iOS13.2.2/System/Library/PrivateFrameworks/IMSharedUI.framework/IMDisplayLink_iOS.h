/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMDisplayLink.h>

@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink {

	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)schedule;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
@end
