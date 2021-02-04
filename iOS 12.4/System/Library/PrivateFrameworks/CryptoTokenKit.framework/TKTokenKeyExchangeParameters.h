/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject {

	long long _requestedSize;
	NSData* _sharedInfo;

}

@property (readonly) long long requestedSize;               //@synthesize requestedSize=_requestedSize - In the implementation block
@property (copy,readonly) NSData * sharedInfo;              //@synthesize sharedInfo=_sharedInfo - In the implementation block
-(id)initWithXpcDictionary:(id)arg1 ;
-(long long)requestedSize;
-(NSData *)sharedInfo;
@end
