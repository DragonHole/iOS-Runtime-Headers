/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSMutableData;

@interface PIMsgImageBuffer : NSObject {

	unsigned long long elementByteSize;
	unsigned long long rowElements;
	unsigned long long width;
	unsigned long long height;
	int format;
	CGColorSpaceRef bufferColorspace;
	NSMutableData* data;

}

@property (retain) NSMutableData * data; 
@property (readonly) unsigned long long elementByteSize; 
@property (readonly) unsigned long long rowElements; 
@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (readonly) int format; 
-(void)dealloc;
-(void*)bytes;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(int)format;
-(id)image;
-(unsigned long long)elementByteSize;
-(unsigned long long)rowElements;
-(id)initWithBytes:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(CGColorSpaceRef)arg7 ;
-(id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(CGColorSpaceRef)arg7 ;
@end

