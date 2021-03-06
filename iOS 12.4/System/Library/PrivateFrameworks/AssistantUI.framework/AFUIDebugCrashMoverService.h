/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface AFUIDebugCrashMoverService : NSObject {

	NSObject*<OS_xpc_object> _connection;

}

@property (getter=_connection,nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(id)_connection;
-(const char*)_errorDescriptionForXPCObject:(id)arg1 ;
-(void)moveLogsWithExtensions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

