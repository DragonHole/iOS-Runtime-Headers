/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTPeerRemoteConnectionDelegate.h>

@protocol OS_dispatch_queue, VTPhraseSpotterControlRemoteDelegate;
@class NSObject, VTPeerRemoteConnection, NSString;

@interface VTPhraseSpotterControlRemote : NSObject <VTPeerRemoteConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	VTPeerRemoteConnection* _peerConnection;
	id<VTPhraseSpotterControlRemoteDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)remoteConnection:(id)arg1 handleMessageType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end
