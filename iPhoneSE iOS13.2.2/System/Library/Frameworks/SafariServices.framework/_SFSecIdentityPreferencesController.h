/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject {

	NSMutableSet* _domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;

}
+(id)sharedPersistentSecIdentityPreferencesController;
+(id)ephemeralSecIdentityPreferencesController;
-(void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(BOOL)arg1 forDomainAndPort:(id)arg2 ;
-(BOOL)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1 ;
-(id)_initUsingEphemeralStorage:(BOOL)arg1 ;
@end

