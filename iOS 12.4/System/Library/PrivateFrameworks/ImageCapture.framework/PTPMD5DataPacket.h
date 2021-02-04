/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PTPDataPacketDataSource;
#import <ImageCapture/ImageCapture-Structs.h>
@class NSData, NSString;

@interface PTPMD5DataPacket : NSObject {

	unsigned short _operationCode;
	unsigned _transactionID;
	id _data;
	NSData* _md5;
	NSString* _filepath;
	int _fd;
	id<PTPDataPacketDataSource> _dataSource;
	long long _bufferSize;
	long long _offsetInBuffer;
	PTPRange _range;
	long long _bytesTransferred;

}
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(void)setBytesTransferred:(long long)arg1 ;
-(long long)copyToWrappedBytes:(id)arg1 forTransport:(unsigned short)arg2 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(unsigned short)operationCode;
-(id)contentForUSB;
-(long long)copyToBuffer:(void*)arg1 numBytes:(long long)arg2 ;
-(id)filepath;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 andData:(id)arg3 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 andDataSource:(id)arg3 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 andFilepath:(id)arg3 ;
-(void)setOperationCode:(unsigned short)arg1 ;
-(long long)offsetInBuffer;
-(long long)copyFromBuffer:(void*)arg1 numBytes:(long long)arg2 ;
-(long long)bytesTransferred;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(long long)bufferSize;
-(void)dealloc;
-(id)description;
-(id)data;
-(void)setData:(id)arg1 ;
-(PTPRange)range;
-(int)setRange:(PTPRange)arg1 ;
@end
