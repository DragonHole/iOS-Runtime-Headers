/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HearingUtilities/HearingUtilities-Structs.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <libobjc.A.dylib/AXHADeviceProtocol.h>

@class NSString, NSMutableArray, NSDate, NSArray, AXHearingAidMode, AXDispatchTimer, NSMutableDictionary, CBPeripheral;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate, AXHADeviceProtocol> {

	double _leftVolume;
	double _rightVolume;
	double _leftMicrophoneVolume;
	double _rightMicrophoneVolume;
	double _leftStreamVolume;
	double _rightStreamVolume;
	char _leftTreble;
	char _rightTreble;
	char _leftBass;
	char _rightBass;
	BOOL _keepInSync;
	BOOL _finishedLoading;
	long long initialLoadToken;
	AXDispatchTimer* _propertyWriteTimer;
	BOOL _isListeningForStreamingChanges;
	OpaqueIOPSPowerSourceIDRef _leftPowerSouceID;
	OpaqueIOPSPowerSourceIDRef _rightPowerSourceID;
	NSMutableDictionary* _leftPowerSouceDictionary;
	NSMutableDictionary* _rightPowerSourceDictionary;
	BOOL isPaired;
	BOOL isConnecting;
	BOOL isPersistent;
	BOOL _supportsBinauralStreaming;
	BOOL _supportsCombinedPresets;
	BOOL _supportsCombinedVolumes;
	short _leftMicrophoneVolumeSteps;
	short _rightMicrophoneVolumeSteps;
	short _leftStreamVolumeSteps;
	short _rightStreamVolumeSteps;
	short _leftSensitivitySteps;
	short _rightSensitivitySteps;
	short _leftMixedVolumeSteps;
	short _rightMixedVolumeSteps;
	int _availableEars;
	unsigned leftProgramVersion;
	unsigned rightProgramVersion;
	unsigned _leftPresetBitmask;
	unsigned _rightPresetBitmask;
	NSString* leftUUID;
	NSString* rightUUID;
	NSString* name;
	NSMutableArray* manufacturer;
	NSMutableArray* model;
	NSString* leftFirmwareVersion;
	NSString* rightFirmwareVersion;
	NSString* leftHardwareVersion;
	NSString* rightHardwareVersion;
	double rightBatteryLevel;
	double leftBatteryLevel;
	NSArray* rightPrograms;
	NSArray* leftPrograms;
	AXHearingAidMode* currentRightProgram;
	AXHearingAidMode* currentLeftProgram;
	AXHearingAidMode* currentLeftStreamingProgram;
	AXHearingAidMode* currentRightStreamingProgram;
	CBPeripheral* leftPeripheral;
	CBPeripheral* rightPeripheral;
	AXHearingAidMode* _leftSelectedProgram;
	AXHearingAidMode* _rightSelectedProgram;
	AXHearingAidMode* _leftSelectedStreamingProgram;
	AXHearingAidMode* _rightSelectedStreamingProgram;
	double _leftSensitivity;
	double _rightSensitivity;
	double _leftMixedVolume;
	double _rightMixedVolume;
	unsigned long long leftLoadedProperties;
	unsigned long long rightLoadedProperties;
	NSMutableDictionary* leftPropertiesLoadCount;
	NSMutableDictionary* rightPropertiesLoadCount;
	NSString* leftPeripheralUUID;
	NSString* rightPeripheralUUID;
	unsigned long long leftWriteRequestProperties;
	unsigned long long rightWriteRequestProperties;
	unsigned long long _leftWriteResponseProperties;
	unsigned long long _rightWriteResponseProperties;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableArray * manufacturer; 
@property (nonatomic,retain) NSMutableArray * model; 
@property (nonatomic,retain) NSString * leftFirmwareVersion; 
@property (nonatomic,retain) NSString * rightFirmwareVersion; 
@property (nonatomic,retain) NSString * leftHardwareVersion; 
@property (nonatomic,retain) NSString * rightHardwareVersion; 
@property (nonatomic,retain) NSString * leftUUID; 
@property (nonatomic,retain) NSString * rightUUID; 
@property (nonatomic,retain) NSString * leftPeripheralUUID; 
@property (nonatomic,retain) NSString * rightPeripheralUUID; 
@property (assign,nonatomic) double rightBatteryLevel; 
@property (assign,nonatomic) double leftBatteryLevel; 
@property (nonatomic,copy) NSArray * rightPrograms; 
@property (nonatomic,copy) NSArray * leftPrograms; 
@property (nonatomic,retain) CBPeripheral * leftPeripheral; 
@property (nonatomic,retain) CBPeripheral * rightPeripheral; 
@property (assign,nonatomic) short leftMicrophoneVolumeSteps;                               //@synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightMicrophoneVolumeSteps;                              //@synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short leftStreamVolumeSteps;                                   //@synthesize leftStreamVolumeSteps=_leftStreamVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightStreamVolumeSteps;                                  //@synthesize rightStreamVolumeSteps=_rightStreamVolumeSteps - In the implementation block
@property (assign,nonatomic) short leftSensitivitySteps;                                    //@synthesize leftSensitivitySteps=_leftSensitivitySteps - In the implementation block
@property (assign,nonatomic) short rightSensitivitySteps;                                   //@synthesize rightSensitivitySteps=_rightSensitivitySteps - In the implementation block
@property (assign,nonatomic) short leftMixedVolumeSteps;                                    //@synthesize leftMixedVolumeSteps=_leftMixedVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightMixedVolumeSteps;                                   //@synthesize rightMixedVolumeSteps=_rightMixedVolumeSteps - In the implementation block
@property (assign,nonatomic) BOOL supportsBinauralStreaming;                                //@synthesize supportsBinauralStreaming=_supportsBinauralStreaming - In the implementation block
@property (assign,nonatomic) BOOL supportsCombinedPresets;                                  //@synthesize supportsCombinedPresets=_supportsCombinedPresets - In the implementation block
@property (assign,nonatomic) BOOL supportsCombinedVolumes;                                  //@synthesize supportsCombinedVolumes=_supportsCombinedVolumes - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * currentRightStreamingProgram; 
@property (nonatomic,retain) AXHearingAidMode * currentLeftStreamingProgram; 
@property (nonatomic,retain) AXHearingAidMode * currentRightProgram; 
@property (nonatomic,retain) AXHearingAidMode * currentLeftProgram; 
@property (assign,nonatomic) BOOL isConnecting; 
@property (assign,nonatomic) unsigned long long leftLoadedProperties; 
@property (assign,nonatomic) unsigned long long rightLoadedProperties; 
@property (assign,nonatomic) unsigned long long leftWriteRequestProperties; 
@property (assign,nonatomic) unsigned long long rightWriteRequestProperties; 
@property (assign,nonatomic) unsigned long long leftWriteResponseProperties;                //@synthesize leftWriteResponseProperties=_leftWriteResponseProperties - In the implementation block
@property (assign,nonatomic) unsigned long long rightWriteResponseProperties;               //@synthesize rightWriteResponseProperties=_rightWriteResponseProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftPropertiesLoadCount; 
@property (nonatomic,retain) NSMutableDictionary * rightPropertiesLoadCount; 
@property (assign,nonatomic) unsigned leftProgramVersion; 
@property (assign,nonatomic) unsigned rightProgramVersion; 
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                                   //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                                  //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
@property (assign,nonatomic) BOOL isPaired; 
@property (assign,nonatomic) BOOL keepInSync;                                               //@synthesize keepInSync=_keepInSync - In the implementation block
@property (assign,nonatomic) BOOL isPersistent; 
@property (assign,nonatomic) double rightMicrophoneVolume;                                  //@synthesize rightMicrophoneVolume=_rightMicrophoneVolume - In the implementation block
@property (assign,nonatomic) double leftMicrophoneVolume;                                   //@synthesize leftMicrophoneVolume=_leftMicrophoneVolume - In the implementation block
@property (assign,nonatomic) double rightStreamVolume;                                      //@synthesize rightStreamVolume=_rightStreamVolume - In the implementation block
@property (assign,nonatomic) double leftStreamVolume;                                       //@synthesize leftStreamVolume=_leftStreamVolume - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedProgram;                        //@synthesize leftSelectedProgram=_leftSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedProgram;                       //@synthesize rightSelectedProgram=_rightSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedStreamingProgram;               //@synthesize leftSelectedStreamingProgram=_leftSelectedStreamingProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedStreamingProgram;              //@synthesize rightSelectedStreamingProgram=_rightSelectedStreamingProgram - In the implementation block
@property (assign,nonatomic) unsigned leftPresetBitmask;                                    //@synthesize leftPresetBitmask=_leftPresetBitmask - In the implementation block
@property (assign,nonatomic) unsigned rightPresetBitmask;                                   //@synthesize rightPresetBitmask=_rightPresetBitmask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int availableEars;                                             //@synthesize availableEars=_availableEars - In the implementation block
@property (assign,nonatomic) double rightSensitivity;                                       //@synthesize rightSensitivity=_rightSensitivity - In the implementation block
@property (assign,nonatomic) double leftSensitivity;                                        //@synthesize leftSensitivity=_leftSensitivity - In the implementation block
@property (assign,nonatomic) double rightMixedVolume;                                       //@synthesize rightMixedVolume=_rightMixedVolume - In the implementation block
@property (assign,nonatomic) double leftMixedVolume;                                        //@synthesize leftMixedVolume=_leftMixedVolume - In the implementation block
@property (assign,nonatomic) char rightTreble;                                              //@synthesize rightTreble=_rightTreble - In the implementation block
@property (assign,nonatomic) char leftTreble;                                               //@synthesize leftTreble=_leftTreble - In the implementation block
@property (assign,nonatomic) char rightBass;                                                //@synthesize rightBass=_rightBass - In the implementation block
@property (assign,nonatomic) char leftBass;                                                 //@synthesize leftBass=_leftBass - In the implementation block
@property (nonatomic,retain,readonly) NSString * deviceUUID; 
+(id)characteristicsUUIDs;
-(BOOL)hasConnection;
-(double)leftBatteryLevel;
-(double)rightBatteryLevel;
-(void)setManufacturer:(NSMutableArray *)arg1 ;
-(NSMutableArray *)manufacturer;
-(BOOL)isConnected;
-(void)setIsPaired:(BOOL)arg1 ;
-(void)setModel:(NSMutableArray *)arg1 ;
-(BOOL)isConnecting;
-(void)updateName;
-(int)availableEars;
-(BOOL)leftAvailable;
-(BOOL)rightAvailable;
-(AXHearingAidMode *)leftSelectedProgram;
-(AXHearingAidMode *)rightSelectedProgram;
-(id)selectedPrograms;
-(AXHearingAidMode *)leftSelectedStreamingProgram;
-(AXHearingAidMode *)rightSelectedStreamingProgram;
-(NSArray *)leftPrograms;
-(NSArray *)rightPrograms;
-(void)selectProgram:(id)arg1 forEar:(int)arg2 ;
-(void)setLeftPrograms:(NSArray *)arg1 ;
-(void)setRightPrograms:(NSArray *)arg1 ;
-(void)setAvailableEars:(int)arg1 ;
-(void)setLeftPeripheralUUID:(NSString *)arg1 ;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(void)setRightPeripheralUUID:(NSString *)arg1 ;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(void)setLeftSelectedProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedProgram:(AXHearingAidMode *)arg1 ;
-(void)setLeftSelectedStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setLeftBatteryLowDate:(NSDate *)arg1 ;
-(void)setRightBatteryLowDate:(NSDate *)arg1 ;
-(short)leftMixedVolumeSteps;
-(short)rightMixedVolumeSteps;
-(short)leftMicrophoneVolumeSteps;
-(short)rightMicrophoneVolumeSteps;
-(short)leftStreamVolumeSteps;
-(short)rightStreamVolumeSteps;
-(short)leftSensitivitySteps;
-(short)rightSensitivitySteps;
-(BOOL)supportsCombinedVolumes;
-(BOOL)supportsCombinedPresets;
-(id)programs;
-(void)_writeAllProgramSelectionsToPeripheral;
-(BOOL)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftBatteryLevel:(double)arg1 ;
-(void)setRightBatteryLevel:(double)arg1 ;
-(void)setLeftSensitivitySteps:(short)arg1 ;
-(void)setRightSensitivitySteps:(short)arg1 ;
-(void)setLeftMicrophoneVolumeSteps:(short)arg1 ;
-(void)setRightMicrophoneVolumeSteps:(short)arg1 ;
-(void)setLeftStreamVolumeSteps:(short)arg1 ;
-(void)setRightStreamVolumeSteps:(short)arg1 ;
-(void)setLeftMixedVolumeSteps:(short)arg1 ;
-(void)setRightMixedVolumeSteps:(short)arg1 ;
-(void)setSupportsCombinedPresets:(BOOL)arg1 ;
-(void)setSupportsCombinedVolumes:(BOOL)arg1 ;
-(void)setSupportsBinauralStreaming:(BOOL)arg1 ;
-(void)setLeftTreble:(char)arg1 ;
-(void)setRightTreble:(char)arg1 ;
-(void)setLeftBass:(char)arg1 ;
-(void)setRightBass:(char)arg1 ;
-(double)leftMicrophoneVolume;
-(double)rightMicrophoneVolume;
-(double)leftStreamVolume;
-(double)rightStreamVolume;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(BOOL)isBluetoothPaired;
-(double)leftSensitivity;
-(double)rightSensitivity;
-(double)leftMixedVolume;
-(double)rightMixedVolume;
-(BOOL)supportsBinauralStreaming;
-(id)initWithPersistentRepresentation:(id)arg1 ;
-(void)disconnectAndUnpair:(BOOL)arg1 ;
-(BOOL)containsPeripheralWithUUID:(id)arg1 ;
-(BOOL)didLoadBasicProperties;
-(id)selectedProgramIndexes;
-(BOOL)keepInSync;
-(void)setKeepInSync:(BOOL)arg1 ;
-(NSString *)leftPeripheralUUID;
-(NSString *)rightPeripheralUUID;
-(void)setRightMicrophoneVolume:(double)arg1 ;
-(void)setLeftMicrophoneVolume:(double)arg1 ;
-(void)setRightStreamVolume:(double)arg1 ;
-(void)setLeftStreamVolume:(double)arg1 ;
-(void)setRightSensitivity:(double)arg1 ;
-(void)setLeftSensitivity:(double)arg1 ;
-(void)setRightMixedVolume:(double)arg1 ;
-(void)setLeftMixedVolume:(double)arg1 ;
-(char)rightTreble;
-(char)leftTreble;
-(char)rightBass;
-(char)leftBass;
-(void)setIsConnecting:(BOOL)arg1 ;
-(void)setLeftPropertiesLoadCount:(NSMutableDictionary *)arg1 ;
-(void)setRightPropertiesLoadCount:(NSMutableDictionary *)arg1 ;
-(void)setCurrentLeftProgram:(AXHearingAidMode *)arg1 ;
-(void)setCurrentRightProgram:(AXHearingAidMode *)arg1 ;
-(void)setCurrentLeftStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setCurrentRightStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setLeftPeripheral:(CBPeripheral *)arg1 ;
-(void)peripheral:(id)arg1 didUpdateCharacteristic:(id)arg2 ;
-(void)setIsPersistent:(BOOL)arg1 ;
-(CBPeripheral *)leftPeripheral;
-(AXHearingAidMode *)currentLeftProgram;
-(unsigned long long)leftLoadedProperties;
-(void)setLeftLoadedProperties:(unsigned long long)arg1 ;
-(void)setRightPeripheral:(CBPeripheral *)arg1 ;
-(CBPeripheral *)rightPeripheral;
-(AXHearingAidMode *)currentRightProgram;
-(unsigned long long)rightLoadedProperties;
-(void)setRightLoadedProperties:(unsigned long long)arg1 ;
-(AXHearingAidMode *)currentRightStreamingProgram;
-(AXHearingAidMode *)currentLeftStreamingProgram;
-(void)setLeftPresetBitmask:(unsigned)arg1 ;
-(void)setRightPresetBitmask:(unsigned)arg1 ;
-(NSMutableDictionary *)rightPropertiesLoadCount;
-(NSMutableDictionary *)leftPropertiesLoadCount;
-(id)persistentRepresentation;
-(void)setNotify:(BOOL)arg1 forPeripheral:(id)arg2 ;
-(void)loadProperties:(unsigned long long)arg1 forPeripheral:(id)arg2 withRetryPeriod:(double)arg3 ;
-(void)loadBasicProperties;
-(BOOL)peripheral:(id)arg1 didLoadProperty:(unsigned long long)arg2 ;
-(id)peripheral:(id)arg1 characteristicForProperty:(unsigned long long)arg2 ;
-(unsigned long long)peripheral:(id)arg1 propertyForCharacteristic:(id)arg2 ;
-(void)loadFailedProperties;
-(void)readValueForCharacteristic:(id)arg1 fromPeripheral:(id)arg2 ;
-(void)updateNameWithAdvertisingData:(id)arg1 ;
-(unsigned char)volumeValueForProperty:(unsigned long long)arg1 andPeripheral:(id)arg2 ;
-(void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3 ;
-(char)signedValueForProperty:(unsigned long long)arg1 andPeripheral:(id)arg2 ;
-(void)writeSignedInt:(char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3 ;
-(void)writeValueForProperty:(unsigned long long)arg1 ;
-(void)_sendDelayedWrites;
-(unsigned long long)leftWriteResponseProperties;
-(void)setLeftWriteResponseProperties:(unsigned long long)arg1 ;
-(unsigned long long)rightWriteResponseProperties;
-(void)setRightWriteResponseProperties:(unsigned long long)arg1 ;
-(void)delayWriteProperty:(unsigned long long)arg1 forPeripheral:(id)arg2 ;
-(void)setMixedVolume:(double)arg1 forLeft:(BOOL)arg2 ;
-(BOOL)deviceSupportsProperty:(unsigned long long)arg1 ;
-(void)setTreble:(char)arg1 forLeft:(BOOL)arg2 ;
-(void)setBass:(char)arg1 forLeft:(BOOL)arg2 ;
-(unsigned long long)availablePropertiesForPeripheral:(id)arg1 ;
-(void)updateBatteryServiceForPeripheral:(id)arg1 ;
-(void)mateWithDevice:(id)arg1 ;
-(unsigned)rightPresetBitmask;
-(unsigned)leftPresetBitmask;
-(void)readProperty:(unsigned long long)arg1 fromPeripheral:(id)arg2 ;
-(unsigned)rightProgramVersion;
-(unsigned)leftProgramVersion;
-(id)peripheral:(id)arg1 characteristicForUUID:(id)arg2 ;
-(void)pairingDidCompleteForPeripheral:(id)arg1 ;
-(id)initWithPeripheral:(id)arg1 ;
-(id)initWithLeftDevice:(id)arg1 andRightDevice:(id)arg2 ;
-(void)connectionDidChange;
-(BOOL)didLoadPersistentProperties;
-(int)connectedEars;
-(id)deviceDescription;
-(void)peripheral:(id)arg1 didInvalidateServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didFinishPairingWithResult:(id)arg2 ;
-(void)peripheralDidUnpair:(id)arg1 ;
-(BOOL)isPartiallyBluetoothPaired;
-(BOOL)addPeripheral:(id)arg1 ;
-(unsigned long long)leftWriteRequestProperties;
-(void)setLeftWriteRequestProperties:(unsigned long long)arg1 ;
-(unsigned long long)rightWriteRequestProperties;
-(void)setRightWriteRequestProperties:(unsigned long long)arg1 ;
-(void)setLeftProgramVersion:(unsigned)arg1 ;
-(void)setRightProgramVersion:(unsigned)arg1 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheralDidUpdateName:(id)arg1 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(NSString *)deviceUUID;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2 ;
-(BOOL)isPaired;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(void)connect;
-(void)_init;
-(NSMutableArray *)model;
-(BOOL)isPersistent;
-(id)valueForProperty:(unsigned long long)arg1 ;
@end

