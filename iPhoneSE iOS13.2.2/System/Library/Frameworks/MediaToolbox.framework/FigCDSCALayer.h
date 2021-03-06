/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigCDSCALayer : FigBaseCALayer {

	OpaqueFigCDSCALayerInternal* layerInternal;

}
-(id)init;
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)clear:(CGRect)arg1 ;
-(void)layoutSublayers;
-(void)setVideoBounds:(CGRect)arg1 ;
-(void)setCallbacks:(id)arg1 userEvent:(/*function pointer*/void*)arg2 viewportChanged:(/*function pointer*/void*)arg3 drawInContext:(/*function pointer*/void*)arg4 ;
@end

