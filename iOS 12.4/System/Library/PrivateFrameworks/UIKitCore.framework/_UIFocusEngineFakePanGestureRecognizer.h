/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusEngineFakePanGestureRecognizer : NSObject {

	long long _state;
	CGPoint _digitizerLocation;
	CGPoint _velocity;

}

@property (assign,nonatomic) long long state;                        //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGPoint digitizerLocation;              //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                       //@synthesize velocity=_velocity - In the implementation block
-(long long)state;
-(void)setState:(long long)arg1 ;
-(CGPoint)velocity;
-(void)setVelocity:(CGPoint)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(CGPoint)digitizerLocation;
-(CGPoint)_digitizerLocation;
-(void)setDigitizerLocation:(CGPoint)arg1 ;
@end
