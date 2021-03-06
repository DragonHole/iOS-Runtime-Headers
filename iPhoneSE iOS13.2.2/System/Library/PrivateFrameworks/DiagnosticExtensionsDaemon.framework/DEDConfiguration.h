/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener;

@interface DEDConfiguration : NSObject {

	NSXPCListener* _anonymousListener;

}

@property (retain) NSXPCListener * anonymousListener;              //@synthesize anonymousListener=_anonymousListener - In the implementation block
+(id)sharedInstance;
-(id)identifier;
-(NSXPCListener *)anonymousListener;
-(id)platform;
-(unsigned long long)connectionType;
-(id)deviceName;
-(id)machServiceName;
-(id)deviceClass;
-(id)errorDomain;
-(id)deviceModel;
-(id)deviceColor;
-(id)deviceEnclosureColor;
-(const char*)loggingSubsystem;
-(id)deviceProductType;
-(id)dedDirectory;
-(void)setAnonymousListener:(NSXPCListener *)arg1 ;
-(id)uniqueDeviceSpecifier;
-(id)classClusterAPIVersion;
-(id)sharedAnonymousListener;
-(void)invalidateTestListeners;
@end

