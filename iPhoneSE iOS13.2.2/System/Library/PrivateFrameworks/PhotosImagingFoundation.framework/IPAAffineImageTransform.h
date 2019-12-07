/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageTransform.h>

@interface IPAAffineImageTransform : IPAImageTransform {

	BOOL _canAlignToPixelsExactly;
	Matrix4d _matrix;

}
-(id)description;
-(Matrix4d)matrix;
-(id)inverseTransform;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const Matrix4d*)arg3 canAlignToPixelsExactly:(BOOL)arg4 ;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
@end
