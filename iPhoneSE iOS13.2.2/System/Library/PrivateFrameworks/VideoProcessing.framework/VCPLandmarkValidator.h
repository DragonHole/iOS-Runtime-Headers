/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModel, VCPCNNData;

@interface VCPLandmarkValidator : NSObject {

	VCPCNNModel* _model;
	VCPCNNData* _input;
	float* _transArray;
	float* _meanLandmarkLoc;
	char* _triIndexMap;
	unsigned char _numTri;
	char* _triList;
	float* _orientation;

}

@property (assign) float* orientation;              //@synthesize orientation=_orientation - In the implementation block
-(void)dealloc;
-(float*)orientation;
-(void)setOrientation:(float*)arg1 ;
-(id)initWithModelFile:(id)arg1 paramFile:(_sFILE*)arg2 numTri:(unsigned char)arg3 triList:(char*)arg4 angle:(float*)arg5 ;
-(int)validateOneImage:(CVBufferRef)arg1 landmarks:(float*)arg2 numofLandmarks:(int)arg3 score:(float*)arg4 ;
@end
