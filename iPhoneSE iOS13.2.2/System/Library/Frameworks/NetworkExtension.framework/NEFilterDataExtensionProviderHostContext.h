/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterDataExtensionProviderHostProtocol.h>

@class NSString;

@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)provideRemediationMap:(id)arg1 ;
-(void)provideURLAppendStringMap:(id)arg1 ;
-(void)fetchProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)providerControlSocketFileHandle:(id)arg1 ;
-(void)handleRulesChanged;
-(void)report:(id)arg1 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getSourceAppInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

