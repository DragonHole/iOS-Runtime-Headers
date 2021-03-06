/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HFProcessedWallpaperSource.h>

@class NSArray, NSString;

@interface HUProcessedWallpaperFactory : NSObject <HFProcessedWallpaperSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * supportedVariants; 
@property (nonatomic,readonly) unsigned long long processVersionNumber; 
+(id)_defaultBackdropSettings;
-(id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3 ;
-(NSArray *)supportedVariants;
-(unsigned long long)processVersionNumber;
-(id)_processedImageForWallpaper:(id)arg1 image:(id)arg2 ;
-(id)_darkContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2 ;
-(id)_darkContentDarkModeBlurredImageForWallpaper:(id)arg1 image:(id)arg2 ;
-(id)_lightContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2 ;
-(CGRect)_scaledCropRectForBounds:(CGRect)arg1 wallpaper:(id)arg2 image:(id)arg3 ;
-(id)_croppedImageFromWallpaper:(id)arg1 image:(id)arg2 ;
-(id)_layerWithCompositingFilterType:(id)arg1 color:(id)arg2 ;
-(id)_imageByApplyingLayerEffects:(id)arg1 toImage:(id)arg2 ;
@end

