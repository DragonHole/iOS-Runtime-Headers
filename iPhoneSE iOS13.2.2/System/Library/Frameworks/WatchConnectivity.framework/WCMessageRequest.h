/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchConnectivity/WCMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WCMessageRequest : WCMessage <NSSecureCoding> {

	BOOL _expectsResponse;

}

@property (assign) BOOL expectsResponse;              //@synthesize expectsResponse=_expectsResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(BOOL)arg4 expectsResponse:(BOOL)arg5 ;
@end

