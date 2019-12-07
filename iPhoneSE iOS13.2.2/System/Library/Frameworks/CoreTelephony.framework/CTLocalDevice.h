/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTDeviceIdentifier, NSArray;

@interface CTLocalDevice : NSObject <NSSecureCoding> {

	CTDeviceIdentifier* _deviceID;
	NSArray* _installedPlans;

}

@property (nonatomic,retain) CTDeviceIdentifier * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSArray * installedPlans;                   //@synthesize installedPlans=_installedPlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)deviceType;
-(CTDeviceIdentifier *)deviceID;
-(void)setDeviceID:(CTDeviceIdentifier *)arg1 ;
-(id)deviceName;
-(id)EID;
-(NSArray *)installedPlans;
-(void)setInstalledPlans:(NSArray *)arg1 ;
@end
