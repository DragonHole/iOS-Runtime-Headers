/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BYXPCActivityRegistrar : NSObject
+(id)sharedInstance;
-(void)registerActivityWithIdentifier:(const char*)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)unregisterActivityWithIdentifier:(const char*)arg1 ;
@end

