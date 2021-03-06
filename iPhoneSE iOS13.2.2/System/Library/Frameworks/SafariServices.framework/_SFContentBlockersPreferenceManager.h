/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSContentBlockersPreferenceManager.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@class NSString;

@interface _SFContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager <SFContentBlockerManagerObserver> {

	BOOL _hasEnabledContentBlockers;

}

@property (nonatomic,readonly) BOOL hasEnabledContentBlockers;              //@synthesize hasEnabledContentBlockers=_hasEnabledContentBlockers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)_checkForContentBlockers;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(BOOL)hasEnabledContentBlockers;
@end

