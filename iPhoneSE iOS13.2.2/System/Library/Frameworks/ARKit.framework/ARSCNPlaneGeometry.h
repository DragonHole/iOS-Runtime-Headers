/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;
@interface ARSCNPlaneGeometry : SCNGeometry {

	id<MTLBuffer> _vertexBuffer;
	id<MTLBuffer> _textureCoordinateBuffer;

}
+(id)planeGeometryWithDevice:(id)arg1 ;
-(void)updateFromPlaneGeometry:(id)arg1 ;
@end

