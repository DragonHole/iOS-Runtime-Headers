/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile, NSString, _HKEntitlements;

@interface HDClientAuthorizationOracle : NSObject {

	HDProfile* _profile;
	NSString* _sourceBundleIdentifier;
	_HKEntitlements* _entitlements;
	BOOL _clientHasPrivateEntitlement;

}
-(id)init;
-(id)readAuthorizationStatusesForTypes:(id)arg1 error:(id*)arg2 ;
-(id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldBypassAuthorization;
-(id)initWithSourceBundleIdentifier:(id)arg1 entitlements:(id)arg2 profile:(id)arg3 ;
-(id)filteredObjectsForReadAuthorization:(id)arg1 anchor:(id)arg2 error:(id*)arg3 ;
-(BOOL)performReadAuthorizationTransactionWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)additionalAuthorizationPredicateForObjectType:(id)arg1 error:(id*)arg2 ;
@end
