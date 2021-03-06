/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARDictionaryCoding.h>
#import <ARKit/ARMetadataWrapperCoding.h>
#import <ARKit/ARMutableSensorData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CMDeviceMotion, NSString;

@interface ARDeviceOrientationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding> {

	CMDeviceMotion* _deviceMotion;
	double _timestamp;
	SCD_Struct_AR100 _rotationMatrix;

}

@property (nonatomic,retain) CMDeviceMotion * deviceMotion;                    //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR100 rotationMatrix;                  //@synthesize rotationMatrix=_rotationMatrix - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR12 rotationMatrixENU; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CMDeviceMotion *)deviceMotion;
-(SCD_Struct_AR100)rotationMatrix;
-(void)setRotationMatrix:(SCD_Struct_AR100)arg1 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithMetadataWrapper:(id)arg1 ;
-(void)setDeviceMotion:(CMDeviceMotion *)arg1 ;
-(SCD_Struct_AR12)rotationMatrixENU;
@end

