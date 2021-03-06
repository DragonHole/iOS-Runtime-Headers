/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@class NSData;

@interface _RWITCPRelayMessage : NSObject {

	BOOL _writtenHeader;
	unsigned long long _writtenPayloadOffset;
	NSData* _payload;

}

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,copy,readonly) NSData * payload;                  //@synthesize payload=_payload - In the implementation block
+(id)TCPRelayMessageWithPayload:(id)arg1 ;
+(id)TCPRelayMessageFromDataStream:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)length;
-(id)initWithPayload:(id)arg1 ;
-(NSData *)payload;
-(long long)write:(int)arg1 ;
-(long long)writeLockdown:(lockdown_connectionRef)arg1 ;
-(long long)writeInternal:(/*^block*/id)arg1 ;
@end

