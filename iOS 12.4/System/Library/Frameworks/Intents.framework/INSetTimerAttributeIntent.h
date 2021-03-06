/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetTimerAttributeIntentExport.h>

@class INTimer, NSString;

@interface INSetTimerAttributeIntent : INIntent <INSetTimerAttributeIntentExport>

@property (nonatomic,copy,readonly) INTimer * targetTimer; 
@property (nonatomic,readonly) double toDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(id)_metadata;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(void)setParametersByName:(id)arg1 ;
-(void)setTargetTimer:(INTimer *)arg1 ;
-(INTimer *)targetTimer;
-(void)setToDuration:(double)arg1 ;
-(double)toDuration;
-(id)initWithTargetTimer:(id)arg1 toDuration:(double)arg2 ;
-(id)verb;
-(id)parametersByName;
-(long long)_intentCategory;
-(void)setDomain:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
@end

