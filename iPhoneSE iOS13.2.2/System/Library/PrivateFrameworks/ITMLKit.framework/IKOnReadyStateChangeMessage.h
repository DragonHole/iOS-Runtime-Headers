/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface IKOnReadyStateChangeMessage : NSObject {

	unsigned _readyState;
	unsigned _statusCode;
	NSString* _statusText;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned readyState;              //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,readonly) unsigned statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * statusText;                //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy) NSError * error;                      //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(unsigned)statusCode;
-(void)setError:(NSError *)arg1 ;
-(unsigned)readyState;
-(NSString *)statusText;
-(void)setStatusText:(NSString *)arg1 ;
-(id)initWithReadyState:(unsigned)arg1 statusCode:(unsigned)arg2 statusText:(id)arg3 error:(id)arg4 ;
@end

