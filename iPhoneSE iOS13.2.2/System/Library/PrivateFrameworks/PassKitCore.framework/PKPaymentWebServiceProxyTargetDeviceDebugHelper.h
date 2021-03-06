/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class PKPaymentWebService, NSXPCListener, PKPaymentWebServiceLocalProxyTargetDevice, PKPaymentWebServiceRemoteProxyTargetDevice, NSString;

@interface PKPaymentWebServiceProxyTargetDeviceDebugHelper : NSObject <NSXPCListenerDelegate> {

	PKPaymentWebService* _webService;
	NSXPCListener* _remoteListener;
	PKPaymentWebServiceLocalProxyTargetDevice* _localTarget;
	PKPaymentWebServiceRemoteProxyTargetDevice* _remoteTarget;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webServiceWithProxiedTargetDevice:(id)arg1 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithWebService:(id)arg1 ;
-(id)localProxyTargetDevice;
@end

