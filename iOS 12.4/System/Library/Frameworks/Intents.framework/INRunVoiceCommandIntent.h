/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INRunVoiceCommandIntentExport.h>

@class INSpeakableString, INVoiceCommandDeviceInformation, NSString;

@interface INRunVoiceCommandIntent : INIntent <INRunVoiceCommandIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * voiceCommand; 
@property (nonatomic,copy,readonly) INVoiceCommandDeviceInformation * originDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(id)_metadata;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(void)setParametersByName:(id)arg1 ;
-(void)setOriginDevice:(INVoiceCommandDeviceInformation *)arg1 ;
-(void)setVoiceCommand:(INSpeakableString *)arg1 ;
-(INVoiceCommandDeviceInformation *)originDevice;
-(INSpeakableString *)voiceCommand;
-(id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 ;
-(id)verb;
-(id)parametersByName;
-(void)setDomain:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
@end
