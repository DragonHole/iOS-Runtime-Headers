/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@class AVDisplayCriteria, NSURL, NSArray;

@interface AVFigAssetInspector : AVAssetInspector {

	OpaqueFigAssetRef _figAsset;
	OpaqueFigFormatReaderRef _formatReader;
	long long _formatReaderOnce;
	long long _checkIsStreamingOnce;
	long long _makeDisplayCriteriaOnce;
	AVDisplayCriteria* _displayCriteria;
	BOOL _isStreaming;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (getter=_figAsset,nonatomic,readonly) OpaqueFigAssetRef figAsset; 
@property (getter=_formatReader,nonatomic,readonly) OpaqueFigFormatReaderRef formatReader; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * figChapterGroupInfo; 
@property (nonatomic,readonly) NSArray * figChapters; 
@property (nonatomic,readonly) NSURL * resolvedURL; 
@property (nonatomic,readonly) NSURL * originalNetworkContentURL; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (getter=_isStreaming,nonatomic,readonly) BOOL streaming; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
-(OpaqueFigAssetRef)_figAsset;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(CGSize)maximumVideoResolution;
-(id)availableVideoDynamicRanges;
-(id)preferredDisplayCriteria;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)_mediaSelectionGroupDictionaries;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(SCD_Struct_AV5)overallDurationHint;
-(BOOL)supportsAnalysisReporting;
-(id)_assetAnalysisMessages;
-(OpaqueFigFormatReaderRef)_formatReader;
-(NSArray *)figChapterGroupInfo;
-(NSArray *)figChapters;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(id)identifyingTagClass;
-(id)identifyingTag;
-(NSURL *)originalNetworkContentURL;
-(id)SHA1Digest;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)_nameForProxy;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)commonMetadata;
-(id)propertyListForProxy;
-(NSURL *)resolvedURL;
-(id)lyrics;
-(id)trackReferences;
-(BOOL)_isStreaming;
-(long long)trackCount;
-(unsigned long long)downloadToken;
-(float)preferredRate;
-(id)creationDate;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(BOOL)isPlayable;
-(id)_instanceIdentifier;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isReadable;
-(BOOL)hasProtectedContent;
-(id)availableMetadataFormats;
-(void)finalize;
-(int)naturalTimeScale;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_AV5)duration;
-(NSURL *)URL;
@end

