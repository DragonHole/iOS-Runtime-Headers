/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@interface CUIPSDLayerRef : CUIPSDLayerBaseRef
-(id)image;
-(id)gradient;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(CGImageRef)createCGImage;
-(id)imageIsZeroSizeImage:(BOOL*)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 ;
-(id)imageFromSlice:(unsigned)arg1 isEmptyImage:(BOOL*)arg2 ;
-(id)patternFromSlice:(unsigned)arg1 ;
-(id)patternFromSlice:(unsigned)arg1 isZeroSizeImage:(BOOL*)arg2 ;
-(id)maskFromSlice:(unsigned)arg1 ;
-(id)fillSample;
-(id)layerEffects;
-(id)colorFill;
@end
