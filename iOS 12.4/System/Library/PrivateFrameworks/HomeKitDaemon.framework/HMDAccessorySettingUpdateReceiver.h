/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessorySettingUpdateBase.h>

@class NSNumber;

@interface HMDAccessorySettingUpdateReceiver : HMDAccessorySettingUpdateBase {

	NSNumber* _configurationVersion;

}

@property (nonatomic,readonly) NSNumber * configurationVersion;              //@synthesize configurationVersion=_configurationVersion - In the implementation block
+(id)logCategory;
-(NSNumber *)configurationVersion;
-(id)initWithSessionID:(id)arg1 setting:(id)arg2 clientQueue:(id)arg3 delegate:(id)arg4 message:(id)arg5 configurationVersion:(id)arg6 outError:(id*)arg7 ;
-(void)update;
-(id)description;
@end
