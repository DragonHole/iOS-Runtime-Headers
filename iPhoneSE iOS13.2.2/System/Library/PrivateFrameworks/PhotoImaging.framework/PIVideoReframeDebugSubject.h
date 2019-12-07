/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIReframeSubject.h>

@interface PIVideoReframeDebugSubject : PIReframeSubject {

	CGVector _velocity;
	CGVector _acceleration;

}

@property (assign) CGVector velocity;                  //@synthesize velocity=_velocity - In the implementation block
@property (assign) CGVector acceleration;              //@synthesize acceleration=_acceleration - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGVector)velocity;
-(void)setVelocity:(CGVector)arg1 ;
-(CGVector)acceleration;
-(void)setAcceleration:(CGVector)arg1 ;
@end
