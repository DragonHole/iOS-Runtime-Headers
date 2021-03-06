/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKMainEventHandler.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer, AKPanGestureRecognizer, AKRotationGestureRecognizer, NSString;

@interface AKMainEventHandler_iOS : AKMainEventHandler <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapRecognizer;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UILongPressGestureRecognizer* _pressRecognizer;
	AKPanGestureRecognizer* _panRecognizer;
	AKRotationGestureRecognizer* _rotationRecognizer;
	double _lastRotationAngleInRotationGesture;

}

@property (retain) UITapGestureRecognizer * tapRecognizer;                        //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (retain) UITapGestureRecognizer * doubleTapRecognizer;                  //@synthesize doubleTapRecognizer=_doubleTapRecognizer - In the implementation block
@property (retain) UILongPressGestureRecognizer * pressRecognizer;                //@synthesize pressRecognizer=_pressRecognizer - In the implementation block
@property (retain) AKPanGestureRecognizer * panRecognizer;                        //@synthesize panRecognizer=_panRecognizer - In the implementation block
@property (retain) AKRotationGestureRecognizer * rotationRecognizer;              //@synthesize rotationRecognizer=_rotationRecognizer - In the implementation block
@property (assign) double lastRotationAngleInRotationGesture;                     //@synthesize lastRotationAngleInRotationGesture=_lastRotationAngleInRotationGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILongPressGestureRecognizer *)pressRecognizer;
-(AKPanGestureRecognizer *)panRecognizer;
-(AKRotationGestureRecognizer *)rotationRecognizer;
-(void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)forwardRecognizerToMainHandleEvent:(id)arg1 ;
-(void)_penDrawingQuiesced;
-(void)setPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setRotationRecognizer:(AKRotationGestureRecognizer *)arg1 ;
-(void)setPanRecognizer:(AKPanGestureRecognizer *)arg1 ;
-(void)setLastRotationAngleInRotationGesture:(double)arg1 ;
-(double)lastRotationAngleInRotationGesture;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(id)initWithController:(id)arg1 ;
-(UITapGestureRecognizer *)doubleTapRecognizer;
-(void)setDoubleTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)teardown;
@end

