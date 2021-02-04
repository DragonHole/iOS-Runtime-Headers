/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFBatteryInfo : NSObject <NSSecureCoding> {

	double _batteryLevel;
	long long _batteryState;
	long long _batteryType;

}

@property (assign,nonatomic) double batteryLevel;                 //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign,nonatomic) long long batteryState;              //@synthesize batteryState=_batteryState - In the implementation block
@property (assign,nonatomic) long long batteryType;               //@synthesize batteryType=_batteryType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBatteryLevel:(double)arg1 ;
-(long long)batteryType;
-(void)setBatteryType:(long long)arg1 ;
-(void)setBatteryState:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)batteryState;
-(double)batteryLevel;
@end
