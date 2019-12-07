/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUDialRequest.h>

@interface TCDialRequest : TUDialRequest {

	BOOL _remoteUplinkMuted;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                                       //@synthesize state=_state - In the implementation block
@property (assign,getter=isRemoteUplinkMuted,nonatomic) BOOL remoteUplinkMuted;              //@synthesize remoteUplinkMuted=_remoteUplinkMuted - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)state;
-(id)URL;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isRemoteUplinkMuted;
-(void)setRemoteUplinkMuted:(BOOL)arg1 ;
@end
