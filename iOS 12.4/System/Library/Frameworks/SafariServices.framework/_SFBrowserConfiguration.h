/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITraitEnvironment;
@interface _SFBrowserConfiguration : NSObject {

	long long _configuration;
	id<UITraitEnvironment> _traitEnvironment;

}

@property (getter=isPrivateBrowsingEnabled,nonatomic,readonly) BOOL privateBrowsingEnabled; 
@property (nonatomic,__weak,readonly) id<UITraitEnvironment> traitEnvironment;                           //@synthesize traitEnvironment=_traitEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL allowsKeyboardCorrectionLearning; 
@property (nonatomic,readonly) BOOL allowsRestoringEducationTabs; 
@property (nonatomic,readonly) BOOL allowsSearchSuggestions; 
@property (nonatomic,readonly) BOOL allowsSiteSpecificSearch; 
@property (nonatomic,readonly) BOOL allowsSpeculativeLoading; 
@property (nonatomic,readonly) BOOL allowsStreamlinedLogin; 
@property (nonatomic,readonly) BOOL allowsUserActivityFeedback; 
@property (nonatomic,readonly) BOOL usesPersistentDataStore; 
@property (nonatomic,readonly) BOOL allowsSearchFeedback; 
@property (nonatomic,readonly) BOOL allowsClosingLastTab; 
@property (nonatomic,readonly) BOOL allowsPersistingTabState; 
@property (nonatomic,readonly) BOOL allowsReopeningClosedTabs; 
@property (nonatomic,readonly) unsigned long long barTintStyle; 
@property (nonatomic,readonly) BOOL usesDarkTheme; 
-(id)initWithPrivateBrowsingEnabled:(BOOL)arg1 traitEnvironment:(id)arg2 ;
-(BOOL)isPrivateBrowsingEnabled;
-(BOOL)allowsKeyboardCorrectionLearning;
-(BOOL)allowsSearchSuggestions;
-(BOOL)allowsSiteSpecificSearch;
-(BOOL)allowsSpeculativeLoading;
-(BOOL)allowsStreamlinedLogin;
-(BOOL)allowsUserActivityFeedback;
-(BOOL)usesPersistentDataStore;
-(BOOL)allowsRestoringEducationTabs;
-(BOOL)allowsSearchFeedback;
-(BOOL)allowsClosingLastTab;
-(BOOL)allowsPersistingTabState;
-(BOOL)allowsReopeningClosedTabs;
-(id<UITraitEnvironment>)traitEnvironment;
-(unsigned long long)barTintStyle;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)usesDarkTheme;
@end

