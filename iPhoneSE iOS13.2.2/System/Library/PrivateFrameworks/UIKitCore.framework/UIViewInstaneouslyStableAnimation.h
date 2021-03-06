/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIIntervalAnimating.h>

@protocol UIVectorOperatable;
@class NSString;

@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating> {

	id<UIVectorOperatable> _velocity;
	id<UIVectorOperatable> _targetValue;

}

@property (nonatomic,retain) id<UIVectorOperatable> targetValue;              //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)value;
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(id<UIVectorOperatable>)targetValue;
-(void)setTargetValue:(id<UIVectorOperatable>)arg1 ;
-(id)stepWithDelta:(double)arg1 ;
-(BOOL)isStable;
-(id)initWithTargetValue:(id)arg1 velocity:(id)arg2 ;
@end

