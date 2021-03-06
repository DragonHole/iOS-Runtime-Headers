/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARReferenceImage;

@interface ARImageDetectionResult : NSObject <NSCopying, NSSecureCoding> {

	ARReferenceImage* _referenceImage;
	void* _imageContext;
	SCD_Struct_AR16 _visionTransform;
	SCD_Struct_AR16 _worldTrackingCameraTransformAtDetection;

}

@property (assign,nonatomic) SCD_Struct_AR16 visionTransform;                                      //@synthesize visionTransform=_visionTransform - In the implementation block
@property (nonatomic,retain) ARReferenceImage * referenceImage;                                    //@synthesize referenceImage=_referenceImage - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR16 worldTrackingCameraTransformAtDetection;              //@synthesize worldTrackingCameraTransformAtDetection=_worldTrackingCameraTransformAtDetection - In the implementation block
@property (assign,nonatomic) void* imageContext;                                                   //@synthesize imageContext=_imageContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(void*)imageContext;
-(void)setWorldTrackingCameraTransformAtDetection:(SCD_Struct_AR16)arg1 ;
-(SCD_Struct_AR16)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR16)arg1 ;
-(void)setImageContext:(void*)arg1 ;
-(void)setReferenceImage:(ARReferenceImage *)arg1 ;
-(ARReferenceImage *)referenceImage;
-(SCD_Struct_AR16)worldTrackingCameraTransformAtDetection;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

