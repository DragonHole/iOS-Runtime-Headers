/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MailSupport/MailSupport-Structs.h>
@interface MSFileCompression : NSObject
+(BOOL)_compressFile:(const char*)arg1 compressInPlace:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)_compressFileInPlace:(const char*)arg1 error:(id*)arg2 ;
+(BOOL)_compressFile:(const char*)arg1 error:(id*)arg2 ;
+(BOOL)_doCompressFile:(const char*)arg1 errorCode:(long long*)arg2 ;
+(id)_compressionLock;
+(CompressionQueueContext_sRef)_compressionQueueContext;
+(BOOL)compressDirectory:(id)arg1 compressInPlace:(BOOL)arg2 shouldCancel:(/*^block*/id)arg3 error:(id*)arg4 ;
+(BOOL)compressFile:(id)arg1 compressInPlace:(BOOL)arg2 error:(id*)arg3 ;
+(id)log;
@end

