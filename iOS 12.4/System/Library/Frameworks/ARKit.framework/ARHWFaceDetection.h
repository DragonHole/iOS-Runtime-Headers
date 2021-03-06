/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARHWFaceDetection : NSObject <NSSecureCoding> {

	long long _ID;
	double _rollAngleInDegrees;
	long long _detectionOrientation;
	SCD_Struct_AR33 _time;
	CGRect _boundingBox;

}

@property (assign,nonatomic) long long ID;                                //@synthesize ID=_ID - In the implementation block
@property (assign,nonatomic) double rollAngleInDegrees;                   //@synthesize rollAngleInDegrees=_rollAngleInDegrees - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;                          //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) long long detectionOrientation;              //@synthesize detectionOrientation=_detectionOrientation - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR33 time;                        //@synthesize time=_time - In the implementation block
+(id)faceDetectionFromDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(SCD_Struct_AR33)time;
-(void)setTime:(SCD_Struct_AR33)arg1 ;
-(void)setRollAngleInDegrees:(double)arg1 ;
-(void)setDetectionOrientation:(long long)arg1 ;
-(long long)ID;
-(BOOL)isEqualToFaceDetection:(id)arg1 ;
-(long long)detectionOrientation;
-(void)setID:(long long)arg1 ;
-(double)rollAngleInDegrees;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
@end

