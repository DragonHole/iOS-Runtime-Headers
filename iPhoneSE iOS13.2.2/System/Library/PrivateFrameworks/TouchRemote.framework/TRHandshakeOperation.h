/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TROperation.h>

@interface TRHandshakeOperation : TROperation {

	long long _protocolVersion;

}

@property (assign,nonatomic) long long protocolVersion;              //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(void)execute;
-(long long)protocolVersion;
-(void)setProtocolVersion:(long long)arg1 ;
-(void)_handleResponse:(id)arg1 ;
@end

