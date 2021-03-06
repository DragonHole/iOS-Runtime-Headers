/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NLFoundInAppsPlugin.framework/NLFoundInAppsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIAPPlugin.h>

@class NSString, DESRecordStore, NSBundle;

@interface NLFoundInAppsPlugin : NSObject <FIAPPlugin> {

	DESRecordStore* _recordStore;
	NSBundle* _FIAPBundle;
	Class _FIAPResult;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
-(id)processSearchableItem:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 ;
-(BOOL)isSentMessage:(id)arg1 ;
-(id)languageForText:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
@end

