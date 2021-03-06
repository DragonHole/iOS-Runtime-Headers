/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol PKRendererControllerProtocol;
@class NSArray;

@interface PKRendererTile : CALayer {

	Aq _renderCount;
	BOOL _outOfDate;
	id<PKRendererControllerProtocol> _rendererController;
	long long _level;
	NSArray* _renderedStrokes;
	CGPoint _offset;
	CGRect _drawingFrame;

}

@property (nonatomic,readonly) long long level;                                      //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) CGPoint offset;                                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) CGRect drawingFrame;                                  //@synthesize drawingFrame=_drawingFrame - In the implementation block
@property (nonatomic,copy) NSArray * renderedStrokes;                                //@synthesize renderedStrokes=_renderedStrokes - In the implementation block
@property (__weak) id<PKRendererControllerProtocol> rendererController;              //@synthesize rendererController=_rendererController - In the implementation block
@property (assign) BOOL outOfDate;                                                   //@synthesize outOfDate=_outOfDate - In the implementation block
@property (readonly) long long renderCount; 
+(double)tileSizeForLevel:(long long)arg1 ;
+(CGRect)layerFrameForLevel:(long long)arg1 offset:(CGPoint)arg2 ;
-(id<PKRendererControllerProtocol>)rendererController;
-(long long)renderCount;
-(NSArray *)renderedStrokes;
-(CGRect)drawingFrame;
-(void)setRenderedStrokes:(NSArray *)arg1 ;
-(void)setRendererController:(id<PKRendererControllerProtocol>)arg1 ;
-(void)setOutOfDate:(BOOL)arg1 ;
-(id)initWithLevel:(long long)arg1 offset:(CGPoint)arg2 drawingScale:(double)arg3 ;
-(BOOL)outOfDate;
-(void)updateFrameForScale:(double)arg1 ;
-(void)dealloc;
-(void)update;
-(id)description;
-(id)debugDescription;
-(void)cancel;
-(CGPoint)offset;
-(long long)level;
@end

