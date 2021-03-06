/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@interface PFMediaUtilities : NSObject
+(long long)defaultRasterizationDPI;
+(BOOL)UTIRequiresRasterizationDPI:(id)arg1 ;
+(id)resourceModelUTIForExtension:(id)arg1 ;
+(id)UTIForExtension:(id)arg1 ;
+(BOOL)isMovieUTI:(id)arg1 ;
+(BOOL)isPdfUTI:(id)arg1 ;
+(BOOL)isImageUTI:(id)arg1 ;
+(id)UTIForURL:(id)arg1 error:(id*)arg2 ;
+(id)preferredExtensionForUTI:(id)arg1 ;
+(id)imagePropertiesFromImageSource:(CGImageSourceRef)arg1 ;
+(long long)rawSourceMaximumPixelCountForBackgroundProcessing;
+(BOOL)isRawUTI:(id)arg1 ;
+(id)mainVideoTrackForAsset:(id)arg1 ;
+(BOOL)isPsdUTI:(id)arg1 ;
+(BOOL)isPngUTI:(id)arg1 ;
+(BOOL)isGifUTI:(id)arg1 ;
+(BOOL)isTiffUTI:(id)arg1 ;
+(BOOL)isHeifUTI:(id)arg1 ;
+(BOOL)isJpeg2000UTI:(id)arg1 ;
+(BOOL)isJpegUTI:(id)arg1 ;
+(id)imagePropertiesFromImageSource:(CGImageSourceRef)arg1 atIndex:(unsigned long long)arg2 ;
+(BOOL)canGenerateImageDerivativesFromUTI:(id)arg1 ;
+(id)UTIForHFSType:(unsigned)arg1 ;
+(BOOL)isValidExtension:(id)arg1 forUTI:(id)arg2 ;
+(BOOL)isValidImageFileForURL:(id)arg1 ;
+(BOOL)isValidAVFileForURL:(id)arg1 ;
+(BOOL)isAudioUTI:(id)arg1 ;
+(BOOL)isQuicktimeMovieUTI:(id)arg1 ;
+(CGSize)maximumImageSizeFromProperties:(id)arg1 ;
+(BOOL)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)arg1 ;
+(long long)rawSourceMaximumPixelCountForInteractiveEditing;
@end

