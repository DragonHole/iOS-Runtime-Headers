/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCRImage : NSObject {

	unsigned long long width;
	unsigned long long height;
	unsigned long long bytesPerRow;
	char* rawDataBuffer;
	char* alignedDataBuffer;
	BOOL freeBufferWhenDone;

}

@property (assign) unsigned long long width; 
@property (assign) unsigned long long height; 
@property (assign) unsigned long long bytesPerRow; 
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char*)arg4 freeBufferWhenDone:(BOOL)arg5 ;
-(char*)getAlignedImageData;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)height;
-(unsigned long long)bytesPerRow;
@end
