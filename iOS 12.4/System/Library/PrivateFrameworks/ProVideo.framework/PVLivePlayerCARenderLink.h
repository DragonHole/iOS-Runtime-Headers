/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/PVLivePlayerRenderLink.h>

@class CADisplayLink;

@interface PVLivePlayerCARenderLink : PVLivePlayerRenderLink {

	long long _prefferedCADisplayFPS;
	CADisplayLink* _displayLink;

}

@property (assign,nonatomic) long long prefferedCADisplayFPS; 
-(void)rebuild;
-(long long)prefferedCADisplayFPS;
-(void)setPrefferedCADisplayFPS:(long long)arg1 ;
-(id)initWithCADisplayLinkFPS:(long long)arg1 ;
-(void)teardown;
-(void)displayLinkFired:(id)arg1 ;
@end
