/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SecureChannel.framework/SecureChannel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecureChannel/SecureChannelService.h>

@protocol SecureChannelService;
@class NSXPCConnection, NSObject;

@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {

	NSXPCConnection* _connectionToService;
	NSObject*<SecureChannelService> _remoteObject;

}
+(id)sharedInstance;
-(void)callToActionForURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)runApproverFlowForURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
@end

