/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INRunVoiceCommandIntentResponseExport.h>

@class NSString, NSNumber, NSDictionary, INArchivedObject, NSArray, _INPBRunVoiceCommandIntentResponse;

@interface INRunVoiceCommandIntentResponse : INIntentResponse <INRunVoiceCommandIntentResponseExport> {

	_INPBRunVoiceCommandIntentResponse* _responseMessagePBRepresentation;

}

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * appBundleId; 
@property (assign,nonatomic) long long intentCategory; 
@property (nonatomic,copy) NSNumber * customResponsesDisabled; 
@property (nonatomic,copy) NSString * responseTemplate; 
@property (nonatomic,copy) NSDictionary * parameters; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) INArchivedObject * underlyingIntent; 
@property (nonatomic,copy) NSString * localizedAppName; 
@property (nonatomic,copy) INArchivedObject * underlyingIntentResponse; 
@property (assign,nonatomic) long long toggleState; 
@property (nonatomic,copy) NSNumber * continueRunning; 
@property (nonatomic,copy) NSNumber * interstitialDisabled; 
@property (nonatomic,copy) NSString * underlyingIntentTitle; 
@property (nonatomic,copy) NSArray * steps; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSArray *)steps;
-(void)setSteps:(NSArray *)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)_responseMessagePBRepresentation;
-(long long)_intentResponseCode;
-(void)setPropertiesByName:(id)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(NSNumber *)customResponsesDisabled;
-(NSString *)responseTemplate;
-(INArchivedObject *)underlyingIntent;
-(INArchivedObject *)underlyingIntentResponse;
-(NSNumber *)continueRunning;
-(NSNumber *)interstitialDisabled;
-(NSString *)underlyingIntentTitle;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setCustomResponsesDisabled:(NSNumber *)arg1 ;
-(void)setResponseTemplate:(NSString *)arg1 ;
-(void)setUnderlyingIntent:(INArchivedObject *)arg1 ;
-(void)setLocalizedAppName:(NSString *)arg1 ;
-(void)setUnderlyingIntentResponse:(INArchivedObject *)arg1 ;
-(void)setContinueRunning:(NSNumber *)arg1 ;
-(void)setInterstitialDisabled:(NSNumber *)arg1 ;
-(void)setUnderlyingIntentTitle:(NSString *)arg1 ;
-(id)propertiesByName;
-(NSString *)verb;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(void)setIntentCategory:(long long)arg1 ;
-(long long)intentCategory;
-(void)setToggleState:(long long)arg1 ;
-(long long)toggleState;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(NSDictionary *)parameters;
-(NSString *)localizedAppName;
-(void)setParameters:(NSDictionary *)arg1 ;
@end

