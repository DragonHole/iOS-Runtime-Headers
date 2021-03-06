/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectDiffable.h>

@class NSString;

@interface _UIVisualEffectViewEntry : NSObject <_UIVisualEffectDiffable> {

	long long _requirements;

}

@property (assign,nonatomic) long long requirements;                //@synthesize requirements=_requirements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)setRequirements:(long long)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(void)applyEffectAsRequested:(BOOL)arg1 toView:(id)arg2 ;
-(long long)requirements;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(id)copyForTransitionOut;
-(BOOL)shouldManageCornerRadius;
-(BOOL)hasTransform;
-(BOOL)applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 toView:(id)arg3 ;
@end

