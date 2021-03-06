/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibilityLoader.h>

@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader
+(void)loadExtendedAccessibilityBundles;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5 ;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(id)_axBundleForBundle:(id)arg1 ;
+(void)_accessibilityLoadSubbundles:(id)arg1 ;
+(BOOL)_accessibilityShouldSortBundlesBeforeLoading;
+(long long)_accessibilityLoadingPriorityForBundle:(id)arg1 ;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
+(void)initialize;
@end

