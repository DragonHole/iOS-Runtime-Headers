/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CCSUsageMetrics : NSObject

@property (nonatomic,readonly) unsigned long long userInvocationCount; 
+(id)sharedInstance;
-(unsigned long long)userInvocationCount;
-(void)incrementUserInvocationCount;
@end

