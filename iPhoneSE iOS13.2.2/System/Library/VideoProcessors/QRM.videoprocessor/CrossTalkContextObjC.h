/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/VideoProcessors/QRM.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLRenderPipelineState, MTLBuffer, MTLTexture;
@interface CrossTalkContextObjC : NSObject {

	void* mCtx;
	unsigned long long lastWidth;
	unsigned long long lastHeight;
	id<MTLRenderPipelineState> pipelineState;
	id<MTLBuffer> vertexBuf;
	id<MTLTexture> gainTex;
	id<MTLBuffer> fragUniBuf;

}
@end

