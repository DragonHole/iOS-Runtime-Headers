/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {

	IDSDaemonRequestTimer* _requestTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(BOOL)arg3 delay:(double)arg4 withError:(id)arg5 ;
-(id)initWithRequestTimer:(id)arg1 ;
@end
