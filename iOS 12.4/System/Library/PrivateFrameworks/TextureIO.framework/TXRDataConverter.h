/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextureIO/TextureIO-Structs.h>
@interface TXRDataConverter : NSObject
+(id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 multiplyAlpha:(BOOL)arg4 gammaDegamma:(BOOL)arg5 error:(id*)arg6 ;
+(id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 gammaDegamma:(BOOL)arg4 error:(id*)arg5 ;
+(id)newPixelFormatSetForCGImage:(CGImageRef)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3 ;
@end
