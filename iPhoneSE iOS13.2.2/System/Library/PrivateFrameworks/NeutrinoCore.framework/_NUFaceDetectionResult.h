/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUFaceDetectionResult.h>

@class NSArray, NSString;

@interface _NUFaceDetectionResult : _NURenderResult <NUFaceDetectionResult> {

	NSArray* _faces;
	SCD_Struct_NU7 _imageSize;

}

@property (retain) NSArray * faces;                                  //@synthesize faces=_faces - In the implementation block
@property (assign) SCD_Struct_NU7 imageSize;                         //@synthesize imageSize=_imageSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)setFaces:(NSArray *)arg1 ;
-(NSArray *)faces;
-(SCD_Struct_NU7)imageSize;
-(void)setImageSize:(SCD_Struct_NU7)arg1 ;
@end

