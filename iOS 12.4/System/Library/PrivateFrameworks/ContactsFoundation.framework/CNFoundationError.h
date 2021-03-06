/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNFoundationError : NSObject
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(id)errorWithErrno;
+(id)errorWithCode:(unsigned long long)arg1 underlyingError:(id)arg2 ;
+(id)errorWithErrno:(int)arg1 userInfo:(id)arg2 ;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)userCanceledError;
+(BOOL)isCertificateError:(id)arg1 ;
+(id)errorWithErrno:(int)arg1 ;
+(id)errorWithErrnoAndUserInfo:(id)arg1 ;
+(BOOL)isCanceledError:(id)arg1 ;
+(BOOL)isTimeoutError:(id)arg1 ;
+(BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(BOOL)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3 ;
+(id)timeoutError;
+(id)errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2 ;
+(BOOL)isFileNotFoundError:(id)arg1 ;
@end

