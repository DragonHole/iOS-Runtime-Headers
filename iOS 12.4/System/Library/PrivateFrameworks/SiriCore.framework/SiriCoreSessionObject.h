/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SiriCoreSessionObject <NSObject>
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@required
-(void)setAceId:(id)arg1;
-(NSString *)refId;
-(void)setRefId:(id)arg1;
-(NSString *)aceId;
-(id)siriCore_serializedAceDataError:(id*)arg1;
-(BOOL)siriCore_bufferingAllowedDuringActiveSession;
-(BOOL)siriCore_isRetryable;
-(BOOL)siriCore_isRestartable;
-(BOOL)siriCore_isProvisional;
-(void)siriCore_logDiagnostics;
-(id)siriCore_requestId;
-(void)siriCore_setSessionRequestId:(id)arg1;
-(BOOL)siriCore_supportedByLocalSession;

@end

