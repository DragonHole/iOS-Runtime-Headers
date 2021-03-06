/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/SETransceiver.h>

@protocol SETransceiver;
@interface TransceiverWrapper : NSObject <SETransceiver> {

	id<SETransceiver> _transceiver;
	CircularBuffer* _circbuff;
	unsigned char _circBuffStorage[4096];

}
+(id)withTransceiver:(id)arg1 ;
-(id)transceive:(id)arg1 error:(id*)arg2 ;
-(id)transceiveAndCheckSW:(id)arg1 error:(id*)arg2 ;
-(id)transceiveBytesAndCheckSW:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)applyScript:(id)arg1 ignoreSW:(BOOL)arg2 error:(id*)arg3 ;
-(id)transceiveBytesAndCheckSW:(const char*)arg1 length:(unsigned long long)arg2 inArray:(id)arg3 error:(id*)arg4 ;
-(id)initWithTransceiver:(id)arg1 ;
-(id)transceiveAndCheckSW:(id)arg1 inArray:(id)arg2 keepingSW:(BOOL)arg3 error:(id*)arg4 ;
-(id)transceiveAndGetAllData:(id)arg1 withGetMoreData:(id)arg2 withMoreDataSW:(unsigned short)arg3 withError:(id*)arg4 ;
-(void)dumpAPDUs:(/*^block*/id)arg1 ;
-(id)transceiveBytesAndCheckSW:(const char*)arg1 length:(unsigned long long)arg2 keepingSW:(BOOL)arg3 error:(id*)arg4 ;
-(id)transceiveBytesAndCheckSW:(const char*)arg1 length:(unsigned long long)arg2 inArray:(id)arg3 keepingSW:(BOOL)arg4 error:(id*)arg5 ;
-(id)transceiveAndCheckSW:(id)arg1 inArray:(id)arg2 error:(id*)arg3 ;
-(id)transceiveAndCheckSW:(id)arg1 keepingSW:(BOOL)arg2 error:(id*)arg3 ;
-(id)transceiveAndGetAllData:(id)arg1 withMoreDataSW:(unsigned short)arg2 withError:(id*)arg3 ;
-(BOOL)applyScript:(id)arg1 error:(id*)arg2 ;
@end

