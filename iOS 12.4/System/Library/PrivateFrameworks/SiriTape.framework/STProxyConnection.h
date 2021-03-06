/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_data;
#import <SiriTape/SiriTape-Structs.h>
@class NSObject, STAceRecorder, GCDAsyncSocket, SiriCoreDataDecompressor;

@interface STProxyConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_data> _bufferedInputData;
	STAceRecorder* recorder;
	GCDAsyncSocket* _socket;
	BOOL _isOpened;
	BOOL _isCanceled;
	BOOL _isFinished;
	SiriCoreDataDecompressor* _inputDecompressor;
	CFHTTPMessageRef _httpRequestHeader;

}
-(void)parseData:(id)arg1 ;
-(id)_httpHeaderData;
-(id)_aceHeaderData;
-(BOOL)_hasReadHTTPHeader;
-(id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_tryReadingParsedDataFromBytes:(const void*)arg1 length:(unsigned long long)arg2 packet:(SCD_Struct_ST2*)arg3 object:(id*)arg4 bytesParsed:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)_connectionHasBytesAvailable:(id)arg1 ;
-(id)initWithSocket:(id)arg1 isRecording:(BOOL)arg2 replayFileURL:(id)arg3 ;
-(BOOL)_hasReadAceHeader;
-(void)handleAceObject:(id)arg1 ;
-(void)handlePacket:(SCD_Struct_ST2*)arg1 ;
-(void)_cancelWithError:(id)arg1 ;
@end

