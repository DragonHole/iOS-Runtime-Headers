/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@interface VUIUtilities : NSObject
+(id)randomColor;
+(double)imageCornerRadiusWithStyle:(long long)arg1 ;
+(long long)textAlignmentWithSemanticContentAttribute:(long long)arg1 ;
+(BOOL)contentSizeCategoryIsAccessibility:(id)arg1 ;
+(BOOL)isAXLargeEnabled:(id)arg1 ;
+(BOOL)shouldInvalidateLayoutWithPreviousTraitCollection:(id)arg1 newTraitCollection:(id)arg2 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 ;
+(CGSize)imageSizeWithAspectRatio:(double)arg1 scaleToSize:(CGSize)arg2 ;
+(BOOL)isIpadLayout;
+(TVCornerRadii)imageCornerRadiiWithStyle:(long long)arg1 ;
+(id)placeholderImageResourceName:(long long)arg1 ;
+(BOOL)isAXSmallEnabled:(id)arg1 ;
+(double)scaleContentSizeValue:(double)arg1 forTraitCollection:(id)arg2 maximumContentSizeCategory:(id)arg3 ;
+(long long)interfaceStyleFromTheme:(id)arg1 defaultInterfaceStyle:(long long)arg2 ;
+(id)VideosUIBundle;
+(double)libraryCategoryListWidth;
+(id)createImageProxyForResourceObject:(id)arg1 imageSize:(CGSize)arg2 ;
+(unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+(void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 properties:(id)arg3 configuration:(SCD_Struct_VU8*)arg4 ;
+(double)libraryListMarginToGrid;
+(id)colorFromRGBStr:(id)arg1 ;
+(id)colorFromHexStr:(id)arg1 ;
@end

