/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDGetUserPrivacySettingsOperation : CKDOperation {

	long long _discoverable;

}

@property (assign,nonatomic) long long discoverable;              //@synthesize discoverable=_discoverable - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(id)activityCreate;
-(void)_handleRetrievedPrivacySettings:(id)arg1 ;
-(void)main;
@end

