/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkListener.h>

@protocol OS_tcp_listener, OS_dispatch_queue;
@class NSString, NSObject;

@interface ATNetServiceListener : ATMessageLinkListener {

	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSObject*<OS_tcp_listener> _tcpListener;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _enableTLS;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) BOOL enableTLS;                      //@synthesize enableTLS=_enableTLS - In the implementation block
-(void)stop;
-(BOOL)start;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(BOOL)enableTLS;
-(void)setEnableTLS:(BOOL)arg1 ;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
@end

