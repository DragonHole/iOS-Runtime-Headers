/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKPulseAnimationControllerProtocol.h>

@protocol TSKHighlightArrayControllerProtocol;
@class NSMutableArray, NSArray;

@interface TSKHighlightArrayController : NSObject <TSKPulseAnimationControllerProtocol> {

	NSMutableArray* _layers;
	NSMutableArray* _controllers;
	double _zOrder;
	id<TSKHighlightArrayControllerProtocol> _delegate;
	BOOL _creatingLayers;
	CGAffineTransform _canvasTransform;
	CGAffineTransform _layerTransform;
	BOOL _shouldPulsate;
	BOOL _pulsating;
	BOOL _autohide;
	double _viewScale;

}

@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) double viewScale;                         //@synthesize viewScale=_viewScale - In the implementation block
@property (nonatomic,readonly) NSArray * layers;                       //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) BOOL shouldPulsate;                       //@synthesize shouldPulsate=_shouldPulsate - In the implementation block
@property (assign,nonatomic) BOOL pulsating;                           //@synthesize pulsating=_pulsating - In the implementation block
@property (assign,nonatomic) BOOL autohide;                            //@synthesize autohide=_autohide - In the implementation block
-(void)pulseAnimationDidStopForPulse:(id)arg1 ;
-(BOOL)pulsating;
-(void)setPulsating:(BOOL)arg1 ;
-(BOOL)autohide;
-(void)setAutohide:(BOOL)arg1 ;
-(double)viewScale;
-(void)setCanvasTransform:(CGAffineTransform)arg1 layerTransform:(CGAffineTransform)arg2 ;
-(void)setViewScale:(double)arg1 ;
-(id)initWithZOrder:(double)arg1 delegate:(id)arg2 ;
-(id)buildHighlightsForSearchReferences:(id)arg1 contentsScaleForLayers:(double)arg2 ;
-(BOOL)shouldPulsate;
-(void)setShouldPulsate:(BOOL)arg1 ;
-(void)dealloc;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)reset;
-(CGAffineTransform)transform;
-(void)stop;
-(NSArray *)layers;
-(void)startAnimating;
-(void)disconnect;
@end

