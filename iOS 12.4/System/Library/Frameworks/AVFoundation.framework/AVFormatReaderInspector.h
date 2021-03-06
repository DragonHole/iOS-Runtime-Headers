/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector {

	OpaqueFigFormatReaderRef _formatReader;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (setter=_setFormatReader:,getter=_formatReader,nonatomic,retain) OpaqueFigFormatReaderRef formatReader; 
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(SCD_Struct_AV5)overallDurationHint;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_setFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)commonMetadata;
-(id)lyrics;
-(id)trackReferences;
-(long long)trackCount;
-(float)preferredRate;
-(CGSize)naturalSize;
-(CGAffineTransform)preferredTransform;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isReadable;
-(id)availableMetadataFormats;
-(void)finalize;
-(int)naturalTimeScale;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_AV5)duration;
@end

