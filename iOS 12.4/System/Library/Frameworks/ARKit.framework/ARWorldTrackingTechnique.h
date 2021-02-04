/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageBasedTechnique.h>

@protocol OS_dispatch_semaphore;
@class NSHashTable, NSObject, ARWorldTrackingReferenceAnchorData, ARWorldTrackingErrorData, ARWorldTrackingPoseData, NSDictionary, ARWorldTrackingOptions;

@interface ARWorldTrackingTechnique : ARImageBasedTechnique {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_semaphore> _observersSemaphore;
	map<CV3DVIOError, double, std::__1::less<CV3DVIOError>, std::__1::allocator<std::__1::pair<const CV3DVIOError, double> > >* _lastErrorLogTimestamp;
	BOOL _useFixedIntrinsics;
	long long _vioHandleState;
	NSObject*<OS_dispatch_semaphore> _vioHandleStateSemaphore;
	NSObject*<OS_dispatch_semaphore> _vioObjectDetectionSemaphore;
	ARWorldTrackingReferenceAnchorData* _anchorData;
	ARWorldTrackingErrorData* _errorData;
	ARWorldTrackingPoseData* _cachedPoseData;
	long long _reinitializationAttempts;
	long long _reinitializationAttemptsAtInitialization;
	double _lastRelocalizationTimestamp;
	double _lastQualityKeyframeTimestamp;
	long long _previousKeyframeCount;
	double _lastPoseTrackingMapTimestamp;
	double _lastMajorRelocalizationTimestamp;
	double _lastPoseMajorRelocalizationTimestamp;
	BOOL _relocalizingAfterSensorDataDrop;
	BOOL _didRelocalize;
	BOOL _didClearMap;
	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	double _minVergenceAngleCosine;
	double _resultLatency;
	BOOL _allowPoseGraphUpdates;
	CV3DSurfaceDetectionParameters _surfaceDetectionParameters;
	CV3DVIOSurfaceDetectionRuntimeConfiguration _surfaceDetectionConfiguration;
	CV3DMLModel* _mlModel;
	NSDictionary* _objectDetectionOptions;
	ARWorldTrackingOptions* _mutableOptions;
	CV3DVIOContextRef _vioHandle;

}

@property (retain) ARWorldTrackingOptions * mutableOptions;                        //@synthesize mutableOptions=_mutableOptions - In the implementation block
@property (assign,nonatomic) CV3DVIOContextRef vioHandle;                          //@synthesize vioHandle=_vioHandle - In the implementation block
@property (nonatomic,copy,readonly) ARWorldTrackingOptions * options; 
+(BOOL)supportsVideoResolution:(CGSize)arg1 ;
+(BOOL)isSupported;
-(unsigned long long)requiredSensorDataTypes;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(void)prepareResultData:(id)arg1 forContext:(id)arg2 ;
-(double)requiredTimeInterval;
-(long long)captureBehavior;
-(BOOL)deterministicMode;
-(id)resultDataClasses;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3 ;
-(ARWorldTrackingOptions *)mutableOptions;
-(void)setMutableOptions:(ARWorldTrackingOptions *)arg1 ;
-(long long)vioHandleState;
-(void)initializeSceneUnderstandingIfNeeded;
-(long long)_initializeVIOHandle;
-(void)_initializeSurfaceDetection;
-(BOOL)setupObjectDetection:(id)arg1 ;
-(void)_addIntrinsicsToDictionary:(SCD_Struct_AR5)arg1 dictionary:(CFDictionaryRef)arg2 ;
-(CV3DVIOContextRef)vioHandle;
-(void)_updatePoseDataTrackingState:(id)arg1 vioTrackingState:(int)arg2 stateDetails:(id)arg3 ;
-(long long)_mappingStatusFromStateDetails:(id)arg1 timestamp:(double)arg2 ;
-(id)_featurePointDataFromDictionary:(id)arg1 ;
-(SCD_Struct_AR16)cameraTransformAtTimestamp:(double)arg1 ;
-(id)serializeMapData;
-(void)clearMap;
-(id)serializeSurfaceData;
-(void)loadSurfaceData:(id)arg1 ;
-(void)addReferenceAnchors:(id)arg1 ;
-(void)removeReferenceAnchors:(id)arg1 ;
-(id)getObservers;
-(void)_updatePose:(double)arg1 frame:(CVBufferRef)arg2 rotationMatrix:(const double*)arg3 translationVector:(const double*)arg4 trackingState:(int)arg5 stateDetails:(id)arg6 ;
-(void)_reportError:(double)arg1 error:(int)arg2 ;
-(void)_reportSignificantEvent:(int)arg1 data:(id)arg2 ;
-(void)setVioHandle:(CV3DVIOContextRef)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(ARWorldTrackingOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)prepare;
@end
