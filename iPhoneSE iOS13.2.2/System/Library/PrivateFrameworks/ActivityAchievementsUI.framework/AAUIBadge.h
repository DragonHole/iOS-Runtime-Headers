/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityAchievementsUI/ActivityAchievementsUI-Structs.h>
#import <ActivityRingsUI/ARUIAnimatableObject.h>

@interface AAUIBadge : ARUIAnimatableObject {

	BOOL _locksRotationY;
	double _rotationX;
	double _rotationY;
	double _maxRotationY;
	CGPoint _position;

}

@property (assign,nonatomic) CGPoint position;                   //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double rotationX;                   //@synthesize rotationX=_rotationX - In the implementation block
@property (assign,nonatomic) double rotationY;                   //@synthesize rotationY=_rotationY - In the implementation block
@property (nonatomic,readonly) BOOL locksRotationY;              //@synthesize locksRotationY=_locksRotationY - In the implementation block
@property (assign,nonatomic) double maxRotationY;                //@synthesize maxRotationY=_maxRotationY - In the implementation block
-(id)init;
-(CGPoint)position;
-(void)setPosition:(CGPoint)arg1 ;
-(double)rotationX;
-(void)setRotationX:(double)arg1 ;
-(double)rotationY;
-(void)setRotationY:(double)arg1 ;
-(void)addAnimation:(id)arg1 forBadgePropertyType:(unsigned long long)arg2 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(void)setMaxRotationY:(double)arg1 ;
-(void)removeAllAnimationsForBadgePropertyType:(unsigned long long)arg1 ;
-(BOOL)locksRotationY;
-(double)maxRotationY;
@end

