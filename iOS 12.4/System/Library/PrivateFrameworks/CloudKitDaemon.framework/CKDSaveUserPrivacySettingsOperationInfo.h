/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo {

	long long _discoverable;
	NSString* _applicationBundleID;

}

@property (assign,nonatomic) long long discoverable;                    //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(id)init;
-(NSString *)applicationBundleID;
@end
