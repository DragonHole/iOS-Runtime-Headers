/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMImageNode : AXMSourceNode
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)produceImage:(id)arg1 ;
-(void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)triggerWithPixelBuffer:(CVBufferRef)arg1 exifOrientation:(unsigned)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)triggerWithImageURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
@end

