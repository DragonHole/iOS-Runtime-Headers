/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject {

	long long _iCloudLogoutPolicy;
	NSUUID* _policyMonitorIdentifier;

}

@property (assign,nonatomic) long long iCloudLogoutPolicy;                    //@synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy - In the implementation block
@property (nonatomic,readonly) NSUUID * policyMonitorIdentifier;              //@synthesize policyMonitorIdentifier=_policyMonitorIdentifier - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfICloudLogoutPolicy;
-(NSUUID *)policyMonitorIdentifier;
-(void)_updateiCloudLogout;
-(void)_updateiCloudLogoutFromPolicies:(id)arg1 ;
-(void)setICloudLogoutPolicy:(long long)arg1 ;
-(long long)iCloudLogoutPolicy;
-(id)init;
-(void)dealloc;
@end
