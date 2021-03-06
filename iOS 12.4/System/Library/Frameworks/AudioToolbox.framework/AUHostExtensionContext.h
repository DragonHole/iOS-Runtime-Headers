/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/AUAudioUnitHostProtocol.h>
#import <libobjc.A.dylib/_AURemoteParameterSynchronization.h>

@class NSExtension, NSUUID, AUAudioUnit_XH, NSXPCConnection;

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol, _AURemoteParameterSynchronization> {

	NSExtension* _extension;
	NSUUID* _requestIdentifier;
	AUAudioUnit_XH* _audioUnit;

}

@property (nonatomic,retain) NSExtension * extension;                               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSUUID * requestIdentifier;                            //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic,__weak) AUAudioUnit_XH * audioUnit;                     //@synthesize audioUnit=_audioUnit - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * xpcConnection; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(void)setAudioUnit:(AUAudioUnit_XH *)arg1 ;
-(void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned)arg5 ;
-(void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(BOOL)arg4 ;
-(AUAudioUnit_XH *)audioUnit;
-(NSXPCConnection *)xpcConnection;
-(NSUUID *)requestIdentifier;
-(void)propertiesChanged:(id)arg1 ;
-(void)dealloc;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
@end

