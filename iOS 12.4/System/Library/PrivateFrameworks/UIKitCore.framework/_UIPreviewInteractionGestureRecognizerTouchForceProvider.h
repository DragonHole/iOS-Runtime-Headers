/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding.h>

@class UITouchForceGestureRecognizer, NSString;

@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding> {

	BOOL _active;
	UITouchForceGestureRecognizer* _gestureRecognizer;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) UITouchForceGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double touchForce; 
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)setGestureRecognizer:(UITouchForceGestureRecognizer *)arg1 ;
-(UITouchForceGestureRecognizer *)gestureRecognizer;
-(double)touchForce;
-(void)cancelInteraction;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(id)initWithView:(id)arg1 configuration:(/*^block*/id)arg2 ;
@end

