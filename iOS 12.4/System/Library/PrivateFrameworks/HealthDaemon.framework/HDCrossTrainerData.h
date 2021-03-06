/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>
#import <libobjc.A.dylib/HDDatumRendering.h>

@class NSDate, HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicInt16Field, HDFitnessMachineCharacteristicUInt8Field;

@interface HDCrossTrainerData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {

	HDFitnessMachineCharacteristicDoubleField* _instantaneousSpeedField;
	HDFitnessMachineCharacteristicDoubleField* _averageSpeedField;
	HDFitnessMachineCharacteristicUInt24Field* _totalDistanceField;
	HDFitnessMachineCharacteristicUInt16Field* _stepPerMinuteField;
	HDFitnessMachineCharacteristicUInt16Field* _averageStepRateField;
	HDFitnessMachineCharacteristicDoubleField* _strideCountField;
	HDFitnessMachineCharacteristicUInt16Field* _positiveElevationGainField;
	HDFitnessMachineCharacteristicUInt16Field* _negativeElevationGainField;
	HDFitnessMachineCharacteristicDoubleField* _inclinationField;
	HDFitnessMachineCharacteristicDoubleField* _rampSettingField;
	HDFitnessMachineCharacteristicDoubleField* _resistanceLevelField;
	HDFitnessMachineCharacteristicInt16Field* _instantaneousPowerField;
	HDFitnessMachineCharacteristicInt16Field* _averagePowerField;
	HDFitnessMachineCharacteristicUInt16Field* _totalEnergyField;
	HDFitnessMachineCharacteristicUInt16Field* _energyPerHourField;
	HDFitnessMachineCharacteristicUInt8Field* _energyPerMinuteField;
	HDFitnessMachineCharacteristicUInt8Field* _heartRateField;
	HDFitnessMachineCharacteristicUInt8Field* _metabolicEquivalentField;
	HDFitnessMachineCharacteristicUInt16Field* _elapsedTimeField;
	HDFitnessMachineCharacteristicUInt16Field* _remainingTimeField;

}

@property (nonatomic,readonly) NSDate * updateTime; 
@property (nonatomic,readonly) BOOL instantaneousSpeedIsSet; 
@property (nonatomic,readonly) double instantaneousSpeed; 
@property (nonatomic,readonly) BOOL averageSpeedIsSet; 
@property (nonatomic,readonly) double averageSpeed; 
@property (nonatomic,readonly) BOOL totalDistanceIsSet; 
@property (nonatomic,readonly) unsigned totalDistance; 
@property (nonatomic,readonly) BOOL stepPerMinuteIsSet; 
@property (nonatomic,readonly) unsigned short stepPerMinute; 
@property (nonatomic,readonly) BOOL averageStepRateIsSet; 
@property (nonatomic,readonly) unsigned short averageStepRate; 
@property (nonatomic,readonly) BOOL strideCountIsSet; 
@property (nonatomic,readonly) double strideCount; 
@property (nonatomic,readonly) BOOL positiveElevationGainIsSet; 
@property (nonatomic,readonly) unsigned short positiveElevationGain; 
@property (nonatomic,readonly) BOOL negativeElevationGainIsSet; 
@property (nonatomic,readonly) unsigned short negativeElevationGain; 
@property (nonatomic,readonly) BOOL inclinationIsSet; 
@property (nonatomic,readonly) double inclination; 
@property (nonatomic,readonly) BOOL rampSettingIsSet; 
@property (nonatomic,readonly) double rampSetting; 
@property (nonatomic,readonly) BOOL resistanceLevelIsSet; 
@property (nonatomic,readonly) double resistanceLevel; 
@property (nonatomic,readonly) BOOL instantaneousPowerIsSet; 
@property (nonatomic,readonly) short instantaneousPower; 
@property (nonatomic,readonly) BOOL averagePowerIsSet; 
@property (nonatomic,readonly) short averagePower; 
@property (nonatomic,readonly) BOOL totalEnergyIsSet; 
@property (nonatomic,readonly) unsigned short totalEnergy; 
@property (nonatomic,readonly) BOOL energyPerHourIsSet; 
@property (nonatomic,readonly) unsigned short energyPerHour; 
@property (nonatomic,readonly) BOOL energyPerMinuteIsSet; 
@property (nonatomic,readonly) unsigned char energyPerMinute; 
@property (nonatomic,readonly) BOOL heartRateIsSet; 
@property (nonatomic,readonly) unsigned char heartRate; 
@property (nonatomic,readonly) BOOL metabolicEquivalentIsSet; 
@property (nonatomic,readonly) unsigned char metabolicEquivalent; 
@property (nonatomic,readonly) BOOL elapsedTimeIsSet; 
@property (nonatomic,readonly) unsigned short elapsedTime; 
@property (nonatomic,readonly) BOOL remainingTimeIsSet; 
@property (nonatomic,readonly) unsigned short remainingTime; 
+(unsigned char)flagFieldLength;
+(id)uuid;
-(unsigned short)remainingTime;
-(id)allFields;
-(BOOL)instantaneousSpeedIsSet;
-(double)instantaneousSpeed;
-(BOOL)averageSpeedIsSet;
-(double)averageSpeed;
-(BOOL)totalDistanceIsSet;
-(BOOL)stepPerMinuteIsSet;
-(unsigned short)stepPerMinute;
-(BOOL)averageStepRateIsSet;
-(unsigned short)averageStepRate;
-(BOOL)strideCountIsSet;
-(double)strideCount;
-(BOOL)positiveElevationGainIsSet;
-(unsigned short)positiveElevationGain;
-(BOOL)negativeElevationGainIsSet;
-(unsigned short)negativeElevationGain;
-(BOOL)inclinationIsSet;
-(double)inclination;
-(BOOL)rampSettingIsSet;
-(double)rampSetting;
-(BOOL)resistanceLevelIsSet;
-(double)resistanceLevel;
-(BOOL)instantaneousPowerIsSet;
-(short)instantaneousPower;
-(BOOL)averagePowerIsSet;
-(BOOL)totalEnergyIsSet;
-(unsigned short)totalEnergy;
-(BOOL)energyPerHourIsSet;
-(unsigned short)energyPerHour;
-(BOOL)energyPerMinuteIsSet;
-(unsigned char)energyPerMinute;
-(BOOL)heartRateIsSet;
-(unsigned char)heartRate;
-(BOOL)metabolicEquivalentIsSet;
-(unsigned char)metabolicEquivalent;
-(BOOL)elapsedTimeIsSet;
-(BOOL)remainingTimeIsSet;
-(id)generateDatums:(id)arg1 ;
-(id)description;
-(unsigned)totalDistance;
-(unsigned short)elapsedTime;
-(id)_init;
-(short)averagePower;
@end

