/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConferenceXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCXPCClientShared : AVConferenceXPCClient {

	NSMutableDictionary* _registeredUUIDServiceBlocks;
	NSObject*<OS_dispatch_queue> _registeredBlocksQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * registeredUUIDServiceBlocks;              //@synthesize registeredUUIDServiceBlocks=_registeredUUIDServiceBlocks - In the implementation block
-(void)deregisterFromNotifications;
-(void)registerBlockWithUUID:(id)arg1 service:(char*)arg2 block:(/*^block*/id)arg3 ;
-(void)deregisterWithUUID:(id)arg1 service:(char*)arg2 ;
-(NSMutableDictionary *)registeredUUIDServiceBlocks;
-(id)init;
-(void)dealloc;
@end
