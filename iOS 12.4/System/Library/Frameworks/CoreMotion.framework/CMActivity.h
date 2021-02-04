/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMActivity : CMLogItem {

	CLMotionActivity fActivity;

}

@property (nonatomic,readonly) int confidence; 
@property (nonatomic,readonly) BOOL isMoving; 
@property (nonatomic,readonly) BOOL isWalking; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) BOOL isDriving; 
@property (nonatomic,readonly) BOOL maybeExitingVehicle; 
@property (nonatomic,readonly) BOOL hasExitedVehicle; 
+(BOOL)supportsSecureCoding;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(BOOL)isWalking;
-(BOOL)isDriving;
-(BOOL)isMoving;
-(BOOL)hasExitedVehicle;
-(BOOL)maybeExitingVehicle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRunning;
-(int)confidence;
-(CLMotionActivity)activity;
@end
