/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, _QPQueryRankerConfiguration, NSObject;

@interface _QPQueryRankerConfigurationNotifyRegistration : NSObject {

	BOOL _tokenRegistered;
	int _token;
	NSString* _notification;
	_QPQueryRankerConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (copy) NSString * notification;                                    //@synthesize notification=_notification - In the implementation block
@property (getter=isTokenRegistered) BOOL tokenRegistered;                   //@synthesize tokenRegistered=_tokenRegistered - In the implementation block
@property (assign) int token;                                                //@synthesize token=_token - In the implementation block
@property (__weak) _QPQueryRankerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
-(void)setNotification:(NSString *)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 ;
-(void)setTokenRegistered:(BOOL)arg1 ;
-(void)safelyCancel;
-(BOOL)isTokenRegistered;
-(_QPQueryRankerConfiguration *)configuration;
-(void)setConfiguration:(_QPQueryRankerConfiguration *)arg1 ;
-(NSString *)notification;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)token;
-(void)setToken:(int)arg1 ;
@end

