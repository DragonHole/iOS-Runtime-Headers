/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/POPPropertyAnimation.h>

@interface POPDecayAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (nonatomic,copy,readonly) id originalVelocity; 
@property (assign,nonatomic) double deceleration; 
@property (nonatomic,readonly) double duration; 
+(id)animation;
+(id)animationWithPropertyNamed:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(id)toValue;
-(void)setToValue:(id)arg1 ;
-(void)setDeceleration:(double)arg1 ;
-(double)deceleration;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)reversedVelocity;
-(id)originalVelocity;
-(void)_ensureComputedProperties;
-(void)_invalidateComputedProperties;
@end

