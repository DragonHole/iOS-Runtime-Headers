/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPWrappedBytes : NSObject {

	unsigned long long _offset;
	unsigned long long _capacity;
	BOOL _allocatedBytes;
	char* _bytes;
	int _fd;
	BOOL _useByteBuffer;
	unsigned long long _excessDataLength;
	double _progressNotificationTime;
	/*function pointer*/void* _progressNotifier;
	void* _progressNotifierContext;
	int _lastNotifiedProgress;

}
+(id)wrappedBytesWithCapacity:(unsigned long long)arg1 ;
+(id)wrappedBytesWithBytes:(void*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initWithBytes:(void*)arg1 capacity:(unsigned long long)arg2 ;
-(double)percentFull;
-(id)initWithFileDescriptor:(int)arg1 capacity:(unsigned long long)arg2 ;
-(void)setProgressNotifierCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(BOOL)wasInitWithFD;
-(unsigned long long)rewindBytesToPosition64:(unsigned long long)arg1 ;
-(unsigned long long)excessDataLength;
-(id)mutableData;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(id)description;
-(const void*)bytes;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)setLength:(unsigned long long)arg1 ;
-(id)data;
-(void*)mutableBytes;
-(unsigned long long)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)capacity;
-(unsigned long long)setCapacity:(unsigned long long)arg1 ;
-(unsigned long long)appendData:(id)arg1 ;
@end

