/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDXPCMessageFilter.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDXPCEntitlementMessageFilter : HMDXPCMessageFilter <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)acceptWithPolicies:(id)arg1 error:(id*)arg2 ;
@end
