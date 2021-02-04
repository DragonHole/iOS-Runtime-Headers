/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDRep.h>

@interface TSDPartitionedPartialRep : TSDRep
-(CGRect)clipRect;
-(BOOL)directlyManagesLayerContent;
-(void)didUpdateLayer:(id)arg1 ;
-(CGRect)layerFrameInScaledCanvas;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)i_queueForTileProvider;
-(UIEdgeInsets)p_edgeInsetsForClipping;
-(CGImageRef)p_newImageForCachingBaseRep;
-(CGRect)p_clipRect;
-(CGRect)p_convertBaseToNaturalRect:(CGRect)arg1 ;
-(void)resetCachedPartitionedRendering;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
@end
