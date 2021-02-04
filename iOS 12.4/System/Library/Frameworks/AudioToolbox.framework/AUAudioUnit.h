/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class NSString, NSArray, AUAudioUnitPreset, AUAudioUnitBusArray, AUParameterTree, NSDictionary;

@interface AUAudioUnit : NSObject {

	OpaqueAudioComponentRef _component;
	NSString* _componentName;
	unsigned _componentVersion;
	UIViewController* _cachedViewController;
	unsigned _maximumFramesToRender;
	long long _MIDIOutputBufferSizeHint;
	RealtimeState* _realtimeState;
	BOOL _renderResourcesAllocated;
	BOOL _allParameterValues;
	BOOL _shouldBypassEffect;
	BOOL _canProcessInPlace;
	BOOL _renderingOffline;
	BOOL _supportsMPE;
	NSString* _audioUnitShortName;
	long long _virtualMIDICableCount;
	/*^block*/id _MIDIOutputEventBlock;
	NSArray* _factoryPresets;
	AUAudioUnitPreset* _currentPreset;
	double _latency;
	double _tailTime;
	long long _renderQuality;
	/*^block*/id _musicalContextBlock;
	/*^block*/id _transportStateBlock;
	NSString* _contextName;
	NSArray* _channelMap;
	/*^block*/id _profileChangedBlock;
	AudioComponentDescription _componentDescription;

}

@property (nonatomic,readonly) id internalRenderBlock; 
@property (assign,nonatomic) long long MIDIOutputBufferSizeHint; 
@property (nonatomic,readonly) AudioComponentDescription componentDescription;                     //@synthesize componentDescription=_componentDescription - In the implementation block
@property (nonatomic,readonly) OpaqueAudioComponentRef component; 
@property (nonatomic,copy,readonly) NSString * componentName; 
@property (nonatomic,copy,readonly) NSString * audioUnitName; 
@property (nonatomic,copy,readonly) NSString * manufacturerName; 
@property (nonatomic,copy,readonly) NSString * audioUnitShortName;                                 //@synthesize audioUnitShortName=_audioUnitShortName - In the implementation block
@property (nonatomic,readonly) unsigned componentVersion; 
@property (nonatomic,readonly) BOOL renderResourcesAllocated;                                      //@synthesize renderResourcesAllocated=_renderResourcesAllocated - In the implementation block
@property (nonatomic,readonly) AUAudioUnitBusArray * inputBusses; 
@property (nonatomic,readonly) AUAudioUnitBusArray * outputBusses; 
@property (nonatomic,readonly) id renderBlock; 
@property (nonatomic,readonly) id scheduleParameterBlock; 
@property (assign,nonatomic) unsigned maximumFramesToRender; 
@property (nonatomic,readonly) AUParameterTree * parameterTree; 
@property (nonatomic,readonly) BOOL allParameterValues;                                            //@synthesize allParameterValues=_allParameterValues - In the implementation block
@property (getter=isMusicDeviceOrEffect,nonatomic,readonly) BOOL musicDeviceOrEffect; 
@property (nonatomic,readonly) long long virtualMIDICableCount;                                    //@synthesize virtualMIDICableCount=_virtualMIDICableCount - In the implementation block
@property (nonatomic,readonly) id scheduleMIDIEventBlock; 
@property (nonatomic,copy,readonly) NSArray * MIDIOutputNames; 
@property (nonatomic,readonly) BOOL providesUserInterface; 
@property (nonatomic,copy) id MIDIOutputEventBlock;                                                //@synthesize MIDIOutputEventBlock=_MIDIOutputEventBlock - In the implementation block
@property (nonatomic,copy) NSDictionary * fullState; 
@property (nonatomic,copy) NSDictionary * fullStateForDocument; 
@property (nonatomic,copy,readonly) NSArray * factoryPresets;                                      //@synthesize factoryPresets=_factoryPresets - In the implementation block
@property (nonatomic,retain) AUAudioUnitPreset * currentPreset;                                    //@synthesize currentPreset=_currentPreset - In the implementation block
@property (nonatomic,readonly) double latency;                                                     //@synthesize latency=_latency - In the implementation block
@property (nonatomic,readonly) double tailTime;                                                    //@synthesize tailTime=_tailTime - In the implementation block
@property (assign,nonatomic) long long renderQuality;                                              //@synthesize renderQuality=_renderQuality - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassEffect;                                              //@synthesize shouldBypassEffect=_shouldBypassEffect - In the implementation block
@property (nonatomic,readonly) BOOL canProcessInPlace;                                             //@synthesize canProcessInPlace=_canProcessInPlace - In the implementation block
@property (assign,getter=isRenderingOffline,nonatomic) BOOL renderingOffline;                      //@synthesize renderingOffline=_renderingOffline - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelCapabilities; 
@property (nonatomic,copy) id musicalContextBlock;                                                 //@synthesize musicalContextBlock=_musicalContextBlock - In the implementation block
@property (nonatomic,copy) id transportStateBlock;                                                 //@synthesize transportStateBlock=_transportStateBlock - In the implementation block
@property (nonatomic,copy) NSString * contextName;                                                 //@synthesize contextName=_contextName - In the implementation block
@property (nonatomic,readonly) BOOL supportsMPE;                                                   //@synthesize supportsMPE=_supportsMPE - In the implementation block
@property (nonatomic,copy) NSArray * channelMap;                                                   //@synthesize channelMap=_channelMap - In the implementation block
@property (nonatomic,copy) id profileChangedBlock;                                                 //@synthesize profileChangedBlock=_profileChangedBlock - In the implementation block
+(id)keyPathsForValuesAffectingAllParameterValues;
+(void)registerSubclass:(Class)arg1 asComponentDescription:(AudioComponentDescription)arg2 name:(id)arg3 version:(unsigned)arg4 ;
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)auAudioUnitForAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 ;
-(void)setContextName:(NSString *)arg1 ;
-(void)setCachedViewController:(UIViewController*)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)renderResourcesAllocated;
-(id)musicalContextBlock;
-(id)transportStateBlock;
-(id)MIDIOutputEventBlock;
-(void)setRenderResourcesAllocated:(BOOL)arg1 ;
-(long long)MIDIOutputBufferSizeHint;
-(AudioComponentDescription)componentDescription;
-(UIViewController*)cachedViewController;
-(id)internalRenderBlock;
-(id)parametersForOverviewWithCount:(long long)arg1 ;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)supportedViewConfigurations:(id)arg1 ;
-(void)selectViewConfiguration:(id)arg1 ;
-(BOOL)providesUserInterface;
-(id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 ;
-(BOOL)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 error:(id*)arg2 ;
-(void)addRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(void)removeRenderObserver:(/*function pointer*/void*)arg1 userData:(void*)arg2 ;
-(id)scheduleParameterBlock;
-(NSArray *)channelCapabilities;
-(void)setMusicalContextBlock:(id)arg1 ;
-(void)setTransportStateBlock:(id)arg1 ;
-(NSDictionary *)fullState;
-(void)setFullState:(NSDictionary *)arg1 ;
-(NSString *)audioUnitName;
-(AUEventSchedule*)eventSchedule;
-(NSArray *)MIDIOutputNames;
-(NSDictionary *)fullStateForDocument;
-(void)setFullStateForDocument:(NSDictionary *)arg1 ;
-(void)setMIDIOutputBufferSizeHint:(long long)arg1 ;
-(NSString *)audioUnitShortName;
-(BOOL)allParameterValues;
-(long long)virtualMIDICableCount;
-(NSArray *)factoryPresets;
-(double)tailTime;
-(long long)renderQuality;
-(void)setRenderQuality:(long long)arg1 ;
-(BOOL)shouldBypassEffect;
-(void)setShouldBypassEffect:(BOOL)arg1 ;
-(BOOL)canProcessInPlace;
-(BOOL)supportsMPE;
-(BOOL)shouldChangeToFormat:(id)arg1 forBus:(id)arg2 ;
-(void)setChannelMap:(NSArray *)arg1 ;
-(id)renderBlock;
-(AUParameterTree *)parameterTree;
-(BOOL)isMusicDeviceOrEffect;
-(id)scheduleMIDIEventBlock;
-(void)invalidateAudioUnit;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(AUAudioUnitBusArray *)inputBusses;
-(AUAudioUnitBusArray *)outputBusses;
-(unsigned)maximumFramesToRender;
-(void)setMaximumFramesToRender:(unsigned)arg1 ;
-(BOOL)isRenderingOffline;
-(void)setRenderingOffline:(BOOL)arg1 ;
-(long long)tokenByAddingRenderObserver:(/*^block*/id)arg1 ;
-(void)removeRenderObserver:(long long)arg1 ;
-(void)setMIDIOutputEventBlock:(id)arg1 ;
-(double)latency;
-(OpaqueAudioComponentRef)component;
-(NSString *)contextName;
-(void)setCurrentPreset:(AUAudioUnitPreset *)arg1 ;
-(AUAudioUnitPreset *)currentPreset;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)profileChangedBlock;
-(void)setProfileChangedBlock:(id)arg1 ;
-(NSString *)manufacturerName;
-(NSArray *)channelMap;
-(unsigned)componentVersion;
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)deallocateRenderResources;
-(NSString *)componentName;
@end
