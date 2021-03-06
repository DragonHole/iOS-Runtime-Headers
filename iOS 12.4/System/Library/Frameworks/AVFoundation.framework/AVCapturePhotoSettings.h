/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCapturePhotoSettingsInternal, NSDictionary, NSString, NSURL, NSArray;

@interface AVCapturePhotoSettings : NSObject <NSCopying> {

	AVCapturePhotoSettingsInternal* _internal;

}

@property (readonly) long long uniqueID; 
@property (copy,readonly) NSDictionary * format; 
@property (readonly) NSString * processedFileType; 
@property (readonly) unsigned rawPhotoPixelFormatType; 
@property (readonly) NSString * rawFileType; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoRedEyeReductionEnabled,nonatomic) BOOL autoRedEyeReductionEnabled; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,getter=isAutoDualCameraFusionEnabled,nonatomic) BOOL autoDualCameraFusionEnabled; 
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) BOOL dualCameraDualPhotoDeliveryEnabled; 
@property (assign,getter=isHighResolutionPhotoEnabled,nonatomic) BOOL highResolutionPhotoEnabled; 
@property (assign,getter=isDepthDataDeliveryEnabled,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL embedsDepthDataInPhoto; 
@property (assign,getter=isDepthDataFiltered,nonatomic) BOOL depthDataFiltered; 
@property (assign,getter=isCameraCalibrationDataDeliveryEnabled,nonatomic) BOOL cameraCalibrationDataDeliveryEnabled; 
@property (assign,getter=isPortraitEffectsMatteDeliveryEnabled,nonatomic) BOOL portraitEffectsMatteDeliveryEnabled; 
@property (assign,nonatomic) BOOL embedsPortraitEffectsMatteInPhoto; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSURL * livePhotoMovieFileURL; 
@property (nonatomic,copy) NSString * livePhotoVideoCodecType; 
@property (nonatomic,copy) NSArray * livePhotoMovieMetadata; 
@property (nonatomic,readonly) NSArray * availablePreviewPhotoPixelFormatTypes; 
@property (nonatomic,copy) NSDictionary * previewPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableEmbeddedThumbnailPhotoCodecTypes; 
@property (nonatomic,copy) NSDictionary * embeddedThumbnailPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableRawEmbeddedThumbnailPhotoCodecTypes; 
@property (nonatomic,copy) NSDictionary * rawEmbeddedThumbnailPhotoFormat; 
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 ;
+(long long)uniqueID;
+(id)photoSettingsFromPhotoSettings:(id)arg1 ;
+(id)burstQualityPhotoSettings;
+(id)photoSettingsWithFormat:(id)arg1 ;
+(id)photoSettings;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(void)setDepthDataFiltered:(BOOL)arg1 ;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(unsigned)shutterSound;
-(unsigned)formatFourCC;
-(unsigned)rawPhotoPixelFormatType;
-(BOOL)embedsDepthDataInPhoto;
-(BOOL)isDepthDataFiltered;
-(BOOL)isBurstQualityCaptureEnabled;
-(BOOL)isEV0PhotoDeliveryEnabled;
-(BOOL)isDualCameraDualPhotoDeliveryEnabled;
-(id)photoFilters;
-(id)adjustedPhotoFilters;
-(NSString *)processedFileType;
-(NSString *)rawFileType;
-(BOOL)embedsPortraitEffectsMatteInPhoto;
-(id)livePhotoMovieFileURLForOriginalPhoto;
-(NSString *)livePhotoVideoCodecType;
-(NSArray *)livePhotoMovieMetadata;
-(id)livePhotoMovieMetadataForOriginalPhoto;
-(NSDictionary *)previewPhotoFormat;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(NSDictionary *)rawEmbeddedThumbnailPhotoFormat;
-(unsigned long long)userInitiatedPhotoRequestTime;
-(id)livePhotoContentIdentifier;
-(id)livePhotoContentIdentifierForOriginalPhoto;
-(id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned)arg3 rawFileType:(id)arg4 burstQualityCaptureEnabled:(BOOL)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7 ;
-(void)setDualCameraDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setRawEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(void)setTurboModeEnabled:(BOOL)arg1 ;
-(void)setLivePhotoContentIdentifier:(id)arg1 ;
-(void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1 ;
-(unsigned)embeddedThumbnailFormatFourCC;
-(unsigned)rawEmbeddedThumbnailFormatFourCC;
-(id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSArray *)availableRawEmbeddedThumbnailPhotoCodecTypes;
-(BOOL)isTurboModeEnabled;
-(BOOL)isAutoRedEyeReductionEnabled;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(BOOL)isAutoDualCameraFusionEnabled;
-(BOOL)isHighResolutionPhotoEnabled;
-(BOOL)isCameraCalibrationDataDeliveryEnabled;
-(BOOL)isPortraitEffectsMatteDeliveryEnabled;
-(BOOL)isSquareCropEnabled;
-(unsigned)previewFormatFourCC;
-(CGSize)previewCGSize;
-(CGSize)embeddedThumbnailCGSize;
-(CGSize)rawEmbeddedThumbnailCGSize;
-(long long)uniqueID;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(long long)flashMode;
-(long long)HDRMode;
-(void)setHDRMode:(long long)arg1 ;
-(void)setEV0PhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURL:(NSURL *)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(NSArray *)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(void)setEmbedsPortraitEffectsMatteInPhoto:(BOOL)arg1 ;
-(NSURL *)livePhotoMovieFileURL;
-(void)setHighResolutionPhotoEnabled:(BOOL)arg1 ;
-(void)setLivePhotoVideoCodecType:(NSString *)arg1 ;
-(void)setPhotoFilters:(id)arg1 ;
-(void)setAdjustedPhotoFilters:(id)arg1 ;
-(void)setEmbedsDepthDataInPhoto:(BOOL)arg1 ;
-(void)setAutoDualCameraFusionEnabled:(BOOL)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(NSArray *)availablePreviewPhotoPixelFormatTypes;
-(void)setPreviewPhotoFormat:(NSDictionary *)arg1 ;
-(NSArray *)availableEmbeddedThumbnailPhotoCodecTypes;
-(void)setEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)metadata;
-(NSDictionary *)format;
@end

