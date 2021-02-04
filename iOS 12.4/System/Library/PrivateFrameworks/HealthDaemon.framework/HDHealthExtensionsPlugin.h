/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDHealthPlugin.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol HDHealthDaemon;
@class NSString, HDXPCListener;

@interface HDHealthExtensionsPlugin : NSObject <HDXPCListenerDelegate, HDHealthPlugin, HDDiagnosticObject> {

	HDXPCListener* _listener;
	id<HDHealthDaemon> _healthDaemon;

}

@property (nonatomic,__weak,readonly) id<HDHealthDaemon> healthDaemon;              //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
-(NSString *)pluginIdentifier;
-(id<HDHealthDaemon>)healthDaemon;
-(id)diagnosticDescription;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(id)serverWithClient:(id)arg1 error:(id*)arg2 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(void)dealloc;
-(void)activate;
@end
