/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARReplaySensorProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source, ARSensorDelegate, ARReplaySensorDelegate;
@class NSMutableDictionary, NSObject, MOVReaderInterface, ARImageCroppingTechnique, NSSet, NSURL, NSString, ARParentImageSensorSettings, NSArray;

@interface ARReplaySensorPublic : NSObject <ARReplaySensorProtocol> {

	BOOL _manualCommandLineMode;
	NSMutableDictionary* _nextWrappedImageDataForStreamIdentifierMap;
	NSMutableDictionary* _metadataCache;
	double _recordTimestampToMovieTimestampDifference;
	NSObject*<OS_dispatch_queue> _replayQueue;
	NSObject*<OS_dispatch_source> _timer;
	double _startTime;
	long long _tick;
	double _frameRateScale;
	double _timestampWhenFramerateChanged;
	NSMutableDictionary* _imageTimestampOfStreamWhenFramerateChanged;
	BOOL _running;
	BOOL _interrupted;
	BOOL _replayStarted;
	AB _finishedReplaying;
	MOVReaderInterface* _reader;
	BOOL _displaySynchronizationMarker;
	long long _displaySynchronizationMarkerFrames;
	CVBufferRef _synchronizationMarker;
	CVPixelBufferPoolRef _synchronizationMarkerPool;
	OpaqueVTPixelTransferSessionRef _synchronizationTransferSession;
	ARImageCroppingTechnique* _croppingTechnique;
	NSSet* _availableVideoStreams;
	NSSet* _availableMetadataStreams;
	NSSet* _videoStreamsToReplay;
	BOOL _isReplayingManually;
	BOOL _synchronousMode;
	BOOL _recordingTimeToReplayTimeOffsetReset;
	float _advanceFramesPerSecondMultiplier;
	int _imageIndex;
	id<ARSensorDelegate> _delegate;
	id<ARReplaySensorDelegate> _replaySensorDelegate;
	NSURL* _sequenceURL;
	NSString* _deviceModel;
	NSString* _osVersion;
	NSString* _arkitVersion;
	double _nominalFrameRate;
	unsigned long long _recordedSensorTypes;
	NSSet* _recordedResultClasses;
	unsigned long long _forcePlaybackFramesPerSecond;
	long long _nextFrameIndex;
	NSSet* _customDataClasses;
	ARParentImageSensorSettings* _parentImageSensorSettings;
	NSString* _mainVideoStreamIdentifier;
	long long _targetFrameIndex;
	double _recordingTimeToReplayTimeOffset;
	CGSize _imageResolution;

}

@property (assign,nonatomic) int imageIndex;                                                       //@synthesize imageIndex=_imageIndex - In the implementation block
@property (assign) long long nextFrameIndex;                                                       //@synthesize nextFrameIndex=_nextFrameIndex - In the implementation block
@property (assign) long long targetFrameIndex;                                                     //@synthesize targetFrameIndex=_targetFrameIndex - In the implementation block
@property (assign,nonatomic) double recordingTimeToReplayTimeOffset;                               //@synthesize recordingTimeToReplayTimeOffset=_recordingTimeToReplayTimeOffset - In the implementation block
@property (assign,nonatomic) BOOL recordingTimeToReplayTimeOffsetReset;                            //@synthesize recordingTimeToReplayTimeOffsetReset=_recordingTimeToReplayTimeOffsetReset - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<ARReplaySensorDelegate> replaySensorDelegate;                                //@synthesize replaySensorDelegate=_replaySensorDelegate - In the implementation block
@property (nonatomic,readonly) NSURL * sequenceURL;                                                //@synthesize sequenceURL=_sequenceURL - In the implementation block
@property (nonatomic,readonly) NSString * deviceModel;                                             //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                                               //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * arkitVersion;                                            //@synthesize arkitVersion=_arkitVersion - In the implementation block
@property (nonatomic,readonly) CGSize imageResolution;                                             //@synthesize imageResolution=_imageResolution - In the implementation block
@property (nonatomic,readonly) double nominalFrameRate;                                            //@synthesize nominalFrameRate=_nominalFrameRate - In the implementation block
@property (nonatomic,readonly) unsigned long long recordedSensorTypes;                             //@synthesize recordedSensorTypes=_recordedSensorTypes - In the implementation block
@property (nonatomic,readonly) NSSet * recordedResultClasses;                                      //@synthesize recordedResultClasses=_recordedResultClasses - In the implementation block
@property (nonatomic,readonly) NSArray * recordedResultClassList; 
@property (nonatomic,readonly) BOOL isReplayingManually;                                           //@synthesize isReplayingManually=_isReplayingManually - In the implementation block
@property (getter=isSynchronousMode,nonatomic,readonly) BOOL synchronousMode;                      //@synthesize synchronousMode=_synchronousMode - In the implementation block
@property (assign,nonatomic) unsigned long long forcePlaybackFramesPerSecond;                      //@synthesize forcePlaybackFramesPerSecond=_forcePlaybackFramesPerSecond - In the implementation block
@property (assign) float advanceFramesPerSecondMultiplier;                                         //@synthesize advanceFramesPerSecondMultiplier=_advanceFramesPerSecondMultiplier - In the implementation block
@property (nonatomic,copy) NSSet * customDataClasses;                                              //@synthesize customDataClasses=_customDataClasses - In the implementation block
@property (nonatomic,retain) ARParentImageSensorSettings * parentImageSensorSettings;              //@synthesize parentImageSensorSettings=_parentImageSensorSettings - In the implementation block
@property (nonatomic,retain) NSString * mainVideoStreamIdentifier;                                 //@synthesize mainVideoStreamIdentifier=_mainVideoStreamIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL interrupted;                                                   //@synthesize interrupted=_interrupted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (nonatomic,readonly) BOOL finishedReplaying; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)interrupt;
-(double)currentTime;
-(BOOL)interrupted;
-(NSString *)osVersion;
-(NSString *)deviceModel;
-(void)advance;
-(double)nominalFrameRate;
-(void)endInterruption;
-(CGSize)imageResolution;
-(unsigned long long)providedDataTypes;
-(BOOL)isSynchronousMode;
-(ARParentImageSensorSettings *)parentImageSensorSettings;
-(id)initWithDataFromFile:(id)arg1 ;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2 ;
-(id)initWithSequenceURL:(id)arg1 manualReplay:(BOOL)arg2 synchronousMode:(BOOL)arg3 ;
-(void)advanceFrame;
-(void)advanceToFrameIndex:(long long)arg1 ;
-(id)replayTechniqueForResultDataClasses:(id)arg1 ;
-(id)customDataForTimestamp:(double)arg1 ;
-(id<ARReplaySensorDelegate>)replaySensorDelegate;
-(void)setReplaySensorDelegate:(id<ARReplaySensorDelegate>)arg1 ;
-(NSURL *)sequenceURL;
-(NSString *)arkitVersion;
-(unsigned long long)recordedSensorTypes;
-(NSSet *)recordedResultClasses;
-(NSArray *)recordedResultClassList;
-(BOOL)isReplayingManually;
-(BOOL)finishedReplaying;
-(unsigned long long)forcePlaybackFramesPerSecond;
-(void)setForcePlaybackFramesPerSecond:(unsigned long long)arg1 ;
-(long long)nextFrameIndex;
-(float)advanceFramesPerSecondMultiplier;
-(void)setAdvanceFramesPerSecondMultiplier:(float)arg1 ;
-(NSSet *)customDataClasses;
-(void)setCustomDataClasses:(NSSet *)arg1 ;
-(void)setParentImageSensorSettings:(ARParentImageSensorSettings *)arg1 ;
-(void)endReplay;
-(void)prepareForReplay;
-(void)startReplayIfNeeded;
-(void)setTargetFrameIndex:(long long)arg1 ;
-(void)setImageIndex:(int)arg1 ;
-(void)tick;
-(long long)targetFrameIndex;
-(int)imageIndex;
-(void)_didOutputSensorData:(id)arg1 ;
-(void)setNextFrameIndex:(long long)arg1 ;
-(void)readFileMetadata;
-(id)getResultDataForClasses:(id)arg1 upToRecordTime:(double)arg2 ;
-(/*^block*/id)keyedArchiveConverterForClasses:(id)arg1 ;
-(id)getItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(/*^block*/id)arg3 ;
-(SCD_Struct_AR57)currentCMTime;
-(id)peekNextWrappedImageDataForAllRequiredStreams;
-(void)_replaySensorFinishedReplayingData;
-(id)imageDataToReplayForTimestamp:(double)arg1 ;
-(id)getNextWrappedImageDataForReplay;
-(id)wrappedImageDataOrderedByTime:(id)arg1 ;
-(BOOL)recordingTimeToReplayTimeOffsetReset;
-(void)setRecordingTimeToReplayTimeOffsetReset:(BOOL)arg1 ;
-(void)setRecordingTimeToReplayTimeOffset:(double)arg1 ;
-(/*^block*/id)metadataWrapperConverter:(Class)arg1 ;
-(double)recordingTimeToReplayTimeOffset;
-(/*^block*/id)starDataConverter;
-(id)peekNextWrappedImageDataForStreamIdentifier:(id)arg1 ;
-(/*^block*/id)keyedArchiveConverter:(Class)arg1 ;
-(id)getWrappedItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(/*^block*/id)arg3 ;
-(id)getNextWrappedItemsFromStream:(id)arg1 converter:(/*^block*/id)arg2 ;
-(id)availableVideoFormatForDeviceType:(id)arg1 position:(long long)arg2 ;
-(NSString *)mainVideoStreamIdentifier;
-(void)setMainVideoStreamIdentifier:(NSString *)arg1 ;
@end
