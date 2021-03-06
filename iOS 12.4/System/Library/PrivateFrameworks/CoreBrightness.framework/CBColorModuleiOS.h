/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBContainer.h>
#import <libobjc.A.dylib/CBContainerProtocol.h>
#import <libobjc.A.dylib/CBHIDServiceProtocol.h>
#import <libobjc.A.dylib/NightShiftSupportProtocol.h>
#import <libobjc.A.dylib/CBStatusInfoProtocol.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NSObject, NSMutableDictionary, CBColorFilter, NSString;

@interface CBColorModuleiOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol> {

	NSMutableArray* _relevantServices;
	NSObject*<OS_dispatch_source> _rampTimer;
	NSMutableDictionary* _properties;
	SCD_Struct_CB19* _colorStruct;
	BOOL _fadeInProgress;
	BOOL _endRamp;
	SCD_Struct_CB20 _reportContext;
	BOOL _displayOn;
	unsigned _backlightService;
	NSMutableArray* _alsServices;
	NSMutableDictionary* _alsNodes;
	NSMutableArray* _filters;
	int _NSamples;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	BOOL _firstALSEventArrived;
	float _firstSampleTimeoutValue;
	BOOL _allALSEventsArrived;
	BOOL _forceColorUpdate;
	BOOL _potentiallyBustedALS;
	BOOL _continueWithFewerALSs;
	BOOL _sensorOverridden;
	SCD_Struct_CB16 _overrideColorSample;
	float _preStrobeDimPeriod;
	CBColorFilter* _colorFilter;
	int _registeredColorALSCount;
	unsigned long long _moduleType;

}

@property (readonly) unsigned long long moduleType;                 //@synthesize moduleType=_moduleType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(void)handleALSEvent:(id)arg1 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(void)sendNotificationForKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)displayBrightnessFactorPropertyHandler:(id)arg1 ;
-(unsigned long long)moduleType;
-(void)initColorStruct;
-(void)reportInitialize;
-(void)filterInitialize;
-(void)loadBacklightProperties;
-(BOOL)convertNSData:(id)arg1 toUint32:(unsigned*)arg2 ;
-(void)displayBrightnessFactorUpdate:(float)arg1 ;
-(void)processColorSample:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)armFirstALSSampleTimer;
-(void)cancelFirstSampleTimeout;
-(void)reportCommitWithStop:(BOOL)arg1 ;
-(void)BLRFactorUpdate:(float)arg1 ;
-(void)BLRFactorUpdate:(float)arg1 withPeriod:(float)arg2 shouldForceUpdate:(BOOL)arg3 ;
-(void)setPreferences:(id)arg1 forKey:(id)arg2 ;
-(void)updateActivity;
-(void)CAStrengthUpdate:(float)arg1 withPeriod:(float)arg2 ;
-(BOOL)parseAdaptationModeMappingDictionary:(id)arg1 strengths:(float*)arg2 strengthNum:(int)arg3 ;
-(id)newAdaptationModeMappingDictionary:(float*)arg1 strengthNum:(int)arg2 ;
-(id)newAdaptationModeMappingArray:(float*)arg1 strengthNum:(int)arg2 ;
-(BOOL)BLRFactorPropertyHandler:(id)arg1 ;
-(BOOL)BLRCCTTargetPropertyHandler:(id)arg1 ;
-(BOOL)BLRCCTRangePropertyHandler:(id)arg1 ;
-(BOOL)CALabShiftPropertyHandler:(id)arg1 ;
-(BOOL)CAEnabledPropertyHandler:(id)arg1 ;
-(BOOL)CAStrengthPropertyHandler:(id)arg1 ;
-(BOOL)CAFixedStrengthPropertyHandler:(id)arg1 ;
-(BOOL)CAWeakestColorAdaptationModePropertyHandler:(id)arg1 ;
-(BOOL)CAWeakestColorAdaptationModeAnimatedPropertyHandler:(id)arg1 ;
-(BOOL)CAModeMappingHandler:(id)arg1 ;
-(BOOL)CAStrengthRampPeriodTweakPropertyHandler:(id)arg1 ;
-(BOOL)CAFadesEnabledHandler:(id)arg1 ;
-(BOOL)CAAABSensorOverridePropertyHandler:(id)arg1 ;
-(BOOL)preStrobePropertyHandler:(id)arg1 ;
-(BOOL)preStrobeDimPeriodPropertyHandler:(id)arg1 ;
-(BOOL)colorFilterModeHandler:(id)arg1 ;
-(BOOL)carryLogEnabledHandler:(id)arg1 ;
-(BOOL)carryLogCommentHandler:(id)arg1 ;
-(BOOL)carryLogCommitHandler:(id)arg1 ;
-(void)inputAmbientColorSample:(SCD_Struct_CB18*)arg1 force:(BOOL)arg2 trust:(BOOL)arg3 ;
-(BOOL)handleHIDEvent:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(void)handleHIDEventInternal:(IOHIDEventRef)arg1 from:(IOHIDServiceClientRef)arg2 ;
-(id)getRegistryIDForHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(void)activateColorAdaptation;
-(BOOL)removeHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(BOOL)setPropertyInternal:(id)arg1 forKey:(id)arg2 ;
-(void)handleDisplayBrightnessFactorZero:(id)arg1 ;
-(BOOL)startNewTimerWithFreq:(float)arg1 ;
-(id)copyPreferencesForKey:(id)arg1 ;
-(BOOL)parseAdaptationModeMappingArray:(id)arg1 strengths:(float*)arg2 strengthNum:(int)arg3 ;
-(void)timerRoutine:(id)arg1 ;
-(void)reportResetTimerWithStop:(BOOL)arg1 ;
-(void)reportToAggd:(SCD_Struct_CB25*)arg1 ;
-(void)commitPowerLogReport:(SCD_Struct_CB25*)arg1 ;
-(id)newArrayFromDoubles:(double*)arg1 size:(int)arg2 ;
-(id)newArrayFromIntegers:(int*)arg1 size:(int)arg2 ;
-(void)firstALSSampleTimeout;
-(BOOL)addHIDServiceClient:(IOHIDServiceClientRef)arg1 ;
-(id)copyIdentifiers;
-(id)initWithBacklight:(unsigned)arg1 andModuleType:(unsigned long long)arg2 ;
-(void)debugPrintColorSampleAsRGB:(id)arg1 ;
-(int)getVid:(IOHIDServiceClientRef)arg1 ;
-(int)getPid:(IOHIDServiceClientRef)arg1 ;
-(void)colorRampRoutine:(const SCD_Struct_CB26*)arg1 ;
-(void)updateAvailability;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(BOOL)start;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
@end

