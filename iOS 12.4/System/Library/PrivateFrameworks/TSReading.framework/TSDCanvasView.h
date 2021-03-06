/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TSDCanvasLayerHosting;
@class TSDInteractiveCanvasController, TSKScrollView, TSDCanvasLayer;

@interface TSDCanvasView : UIView {

	TSDInteractiveCanvasController* mController;
	id<TSDCanvasLayerHosting> mLayerHost;

}

@property (assign,nonatomic) TSDInteractiveCanvasController * controller; 
@property (assign,nonatomic) id<TSDCanvasLayerHosting> layerHost; 
@property (readonly) TSKScrollView * enclosingScrollView; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (nonatomic,readonly) TSDCanvasView * rootCanvasView; 
+(Class)layerClass;
-(BOOL)_accessibilitySpeakThisIgnoresAccessibilityElementStatus;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilitySpeakThisString;
-(id)_accessibilityTextRectsForSpeakThisStringRange:(NSRange)arg1 ;
-(id)_speakThisElementStrings;
-(id)_speakThisElements;
-(TSDCanvasView *)rootCanvasView;
-(TSDCanvasLayer *)canvasLayer;
-(void)setLayerHost:(id<TSDCanvasLayerHosting>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)teardown;
-(TSDInteractiveCanvasController *)controller;
-(void)setController:(TSDInteractiveCanvasController *)arg1 ;
-(id<TSDCanvasLayerHosting>)layerHost;
-(TSKScrollView *)enclosingScrollView;
@end

