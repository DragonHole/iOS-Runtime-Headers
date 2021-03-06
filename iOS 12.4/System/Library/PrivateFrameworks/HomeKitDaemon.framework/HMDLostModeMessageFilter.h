/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>

@interface HMDLostModeMessageFilter : HMDMessageFilter {

	BOOL _deviceLost;

}

@property (assign,getter=isDeviceLost,nonatomic) BOOL deviceLost;              //@synthesize deviceLost=_deviceLost - In the implementation block
-(BOOL)isDeviceLost;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(void)setDeviceLost:(BOOL)arg1 ;
-(void)_deviceLostStateNotification:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

