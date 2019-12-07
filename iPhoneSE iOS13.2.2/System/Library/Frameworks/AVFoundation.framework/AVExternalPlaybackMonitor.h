/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject {

	AVExternalPlaybackMonitorInternal* _ivars;

}

@property (getter=isAirPlayVideoActive,readonly) BOOL airPlayVideoActive; 
@property (getter=isAirPlayVideoPlaying,readonly) BOOL airPlayVideoPlaying; 
+(void)initialize;
+(id)longFormVideoExternalPlaybackMonitor;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isAirPlayVideoActive;
-(id)initWithFigRoutingSessionManager:(OpaqueFigRoutingSessionManagerRef)arg1 ;
-(BOOL)isAirPlayVideoPlaying;
@end
