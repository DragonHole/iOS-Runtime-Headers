/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <libobjc.A.dylib/PKDrawingGestureRecognizerProtocol.h>

@protocol PKDrawingGestureTarget;
@class UITouch, NSString;

@interface PKDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol> {

	double _thresholdDistance;
	double _squaredThreshold;
	CGPoint _drawTouchStartPoint;
	BOOL _drawingTargetIsDrawing;
	BOOL _gestureDetected;
	BOOL _ignoreFingerTouchesUntilReset;
	id<PKDrawingGestureTarget> drawingTarget;
	UITouch* _drawingTouch;

}

@property (nonatomic,retain) UITouch * drawingTouch;                                              //@synthesize drawingTouch=_drawingTouch - In the implementation block
@property (assign,nonatomic) double thresholdDistance;                                            //@synthesize thresholdDistance=_thresholdDistance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureTarget> drawingTarget; 
-(void)cancel;
-(void)reset;
-(void)end;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(id<PKDrawingGestureTarget>)drawingTarget;
-(void)setDrawingTarget:(id<PKDrawingGestureTarget>)arg1 ;
-(void)setThresholdDistance:(double)arg1 ;
-(void)_cancelDrawing;
-(void)_endDrawing;
-(BOOL)_shouldBeginDrawing:(id)arg1 withEvent:(id)arg2 ;
-(void)_beginDrawingWithTouch:(id)arg1 ;
-(void)_updateDrawingWithEvent:(id)arg1 ;
-(void)_drawingCancelled;
-(void)_drawingBegan;
-(void)_drawingMoved:(id)arg1 ;
-(void)_drawingEnded;
-(UITouch *)drawingTouch;
-(double)thresholdDistance;
-(void)setDrawingTouch:(UITouch *)arg1 ;
@end

