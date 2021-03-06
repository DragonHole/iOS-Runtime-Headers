/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling> {

	BOOL _reasserting;
	BOOL _onDemandEnabled;
	NEVPNProtocol* _protocolConfiguration;
	NSArray* _appRules;

}

@property (retain) NEVPNProtocol * protocolConfiguration;              //@synthesize protocolConfiguration=_protocolConfiguration - In the implementation block
@property (assign) BOOL onDemandEnabled;                               //@synthesize onDemandEnabled=_onDemandEnabled - In the implementation block
@property (retain) NSArray * appRules;                                 //@synthesize appRules=_appRules - In the implementation block
@property (readonly) long long routingMethod; 
@property (assign) BOOL reasserting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(void)setProtocolConfiguration:(NEVPNProtocol *)arg1 ;
-(NEVPNProtocol *)protocolConfiguration;
-(void)setTunnelNetworkSettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)onDemandEnabled;
-(void)setReasserting:(BOOL)arg1 ;
-(BOOL)reasserting;
-(long long)routingMethod;
@end

