/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXSubscriptionStatusProviding.h>

@class NSString;

@interface SXSubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding> {

	long long _bundleSubscriptionStatus;
	long long _channelSubscriptionStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long bundleSubscriptionStatus;               //@synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) long long channelSubscriptionStatus;              //@synthesize channelSubscriptionStatus=_channelSubscriptionStatus - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(long long)bundleSubscriptionStatus;
-(long long)channelSubscriptionStatus;
-(id)initWithBundleSubscriptionStatus:(long long)arg1 channelSubscriptionStatus:(long long)arg2 ;
@end

