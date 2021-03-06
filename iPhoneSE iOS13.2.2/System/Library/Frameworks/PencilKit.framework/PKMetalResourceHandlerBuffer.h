/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class PKMetalBuffer;

@interface PKMetalResourceHandlerBuffer : NSObject {

	id<MTLDevice> _device;
	PKMetalBuffer* _buffer;
	unsigned long long _currentOffset;
	unsigned long long _bufferSize;
	unsigned long long _options;
	BOOL _purgeable;

}
-(id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3 ;
-(id)initWithSize:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 purgeable:(BOOL)arg4 ;
@end

