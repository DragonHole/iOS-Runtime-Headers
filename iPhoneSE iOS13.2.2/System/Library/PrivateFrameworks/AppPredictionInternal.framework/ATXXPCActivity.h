/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXActivityDeferrableProtocol.h>

@protocol OS_xpc_object, OS_os_log;
@class NSObject, NSString;

@interface ATXXPCActivity : NSObject <ATXActivityDeferrableProtocol> {

	NSObject*<OS_xpc_object> _activity;
	NSString* _name;
	NSObject*<OS_os_log> _handle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)shouldDefer;
-(BOOL)didDefer;
-(id)initWithActivity:(id)arg1 name:(id)arg2 ;
-(id)initWithActivity:(id)arg1 name:(id)arg2 logHandle:(id)arg3 ;
@end

