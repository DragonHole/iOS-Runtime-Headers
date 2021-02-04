/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUImageDownsamplingUtilities : NSObject
+(id)_uniqueTemporaryDirectory;
+(id)_preferredFileExtensionForContentType:(id)arg1 ;
+(void)_shouldFlattenEXIFOrientation:(BOOL*)arg1 andDownsample:(BOOL*)arg2 sourceContent:(id)arg3 ;
+(id)_flattenRotation:(BOOL)arg1 withDownsampling:(BOOL)arg2 sourceImage:(id)arg3 ;
+(id)_sourceContentType:(id)arg1 ;
+(id)_flattenEXIFOrientation:(BOOL)arg1 withDownsampling:(BOOL)arg2 sourceContent:(id)arg3 withUTI:(id)arg4 ;
+(id)_preferredFileDisplayNameForSourceContent:(id)arg1 ;
+(CGImageSourceRef)_newImageSourceWithSourceContent:(id)arg1 ;
+(double)_maxDimensionOfSize:(CGSize)arg1 fittingToArea:(double)arg2 ;
+(CGSize)_sizeFittingArea:(double)arg1 withSize:(CGSize)arg2 ;
+(BOOL)_flattenEXIFOrientationOfImage:(id)arg1 toDestination:(id)arg2 ;
@end
