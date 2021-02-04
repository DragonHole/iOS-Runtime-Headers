/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob {

	NSArray* _faces;
	SCD_Struct_NU5 _imageSize;

}

@property (readonly) NUFaceDetectionRequest * faceDetectionRequest; 
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithFaceDetectionRequest:(id)arg1 ;
-(NUFaceDetectionRequest *)faceDetectionRequest;
-(id)detectFaceRectsInBuffer:(CVBufferRef)arg1 maxResultCount:(unsigned long long)arg2 error:(out id*)arg3 ;
-(id)detectFaceLandmarksInBuffer:(CVBufferRef)arg1 withFaceRects:(id)arg2 error:(out id*)arg3 ;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)result;
-(void)cleanUp;
@end
