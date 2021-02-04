/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDRelaySessionEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _actionType;
	long long _statusCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) long long statusCode;                         //@synthesize statusCode=_statusCode - In the implementation block
+(id)stringForActionType:(unsigned long long)arg1 ;
+(id)relaySessionEventWithActionType:(unsigned long long)arg1 ;
+(void)initialize;
+(id)uuid;
-(void)setStatusCode:(long long)arg1 ;
-(id)initWithActionType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(long long)statusCode;
@end
