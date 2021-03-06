/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchor.h>
#import <ARKit/ARTrackable.h>

@class NSDictionary, ARFaceGeometry, ARFaceTrackingData, NSError, NSString;

@interface ARFaceAnchor : ARAnchor <ARTrackable> {

	NSDictionary* _blendShapeCoefficientsDictionary;
	BOOL _isTracked;
	ARFaceGeometry* _geometry;
	ARFaceTrackingData* _trackingData;
	NSError* _trackingError;

}

@property (nonatomic,retain) ARFaceTrackingData * trackingData;                //@synthesize trackingData=_trackingData - In the implementation block
@property (assign,nonatomic) BOOL isTracked;                                   //@synthesize isTracked=_isTracked - In the implementation block
@property (nonatomic,retain) NSError * trackingError;                          //@synthesize trackingError=_trackingError - In the implementation block
@property (nonatomic,readonly) ARFaceGeometry * geometry;                      //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR16 leftEyeTransform; 
@property (nonatomic,readonly) SCD_Struct_AR16 rightEyeTransform; 
@property (nonatomic,readonly)  lookAtPoint; 
@property (nonatomic,readonly) NSDictionary * blendShapes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)blendShapeToMirroredBlendShapeMapping;
+(id)blendShapeMapping;
+(id)mirroredBlendShapeMapping;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithAnchor:(id)arg1 ;
-(ARFaceTrackingData *)trackingData;
-(id)initWithIdentifier:(id)arg1 trackingData:(id)arg2 ;
-(NSError *)trackingError;
-(id)initWithExistingFaceAnchor:(id)arg1 tracked:(BOOL)arg2 trackingError:(id)arg3 ;
-(const 1*)imageVertices;
-(SCD_Struct_AR16)leftEyeTransform;
-(SCD_Struct_AR16)rightEyeTransform;
-(1)gazePoint;
-(NSDictionary *)blendShapes;
-()lookAtPoint;
-(void)setIsTracked:(BOOL)arg1 ;
-(BOOL)isEqualToFaceAnchor:(id)arg1 ;
-(void)setTrackingData:(ARFaceTrackingData *)arg1 ;
-(void)setTrackingError:(NSError *)arg1 ;
-(BOOL)isTracked;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(ARFaceGeometry *)geometry;
@end

