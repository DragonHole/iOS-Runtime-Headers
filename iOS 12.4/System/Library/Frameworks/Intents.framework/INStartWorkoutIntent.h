/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartWorkoutIntentExport.h>

@class INSpeakableString, NSNumber, NSString;

@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * workoutName; 
@property (nonatomic,copy,readonly) NSNumber * goalValue; 
@property (nonatomic,readonly) long long workoutGoalUnitType; 
@property (nonatomic,readonly) long long workoutLocationType; 
@property (nonatomic,copy,readonly) NSNumber * isOpenEnded; 
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
-(id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2 ;
-(void)setWorkoutName:(INSpeakableString *)arg1 ;
-(long long)workoutGoalUnitType;
-(NSNumber *)isOpenEnded;
-(void)setIsOpenEnded:(NSNumber *)arg1 ;
-(void)setWorkoutGoalUnitType:(long long)arg1 ;
-(void)setWorkoutLocationType:(long long)arg1 ;
-(long long)workoutLocationType;
-(id)initWithWorkoutName:(id)arg1 goalValue:(id)arg2 workoutGoalUnitType:(long long)arg3 workoutLocationType:(long long)arg4 isOpenEnded:(id)arg5 ;
-(id)verb;
-(id)parametersByName;
-(INSpeakableString *)workoutName;
-(long long)_intentCategory;
-(void)setDomain:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(NSNumber *)goalValue;
-(void)setGoalValue:(NSNumber *)arg1 ;
-(id)domain;
@end

