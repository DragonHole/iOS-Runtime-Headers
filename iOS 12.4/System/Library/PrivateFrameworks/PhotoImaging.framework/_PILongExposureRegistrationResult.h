/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PILongExposureRegistrationResult.h>

@class VNImageHomographicAlignmentObservation, NSString;

@interface _PILongExposureRegistrationResult : _NURenderResult <PILongExposureRegistrationResult> {

	VNImageHomographicAlignmentObservation* _observation;
	SCD_Struct_PI2 _extent;

}

@property (nonatomic,copy) VNImageHomographicAlignmentObservation * observation;              //@synthesize observation=_observation - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI2 extent;                                           //@synthesize extent=_extent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)setObservation:(VNImageHomographicAlignmentObservation *)arg1 ;
-(VNImageHomographicAlignmentObservation *)observation;
-(SCD_Struct_PI2)extent;
-(void)setExtent:(SCD_Struct_PI2)arg1 ;
@end

