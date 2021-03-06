/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKBundleLoadObserverDelegate.h>

@class NSMutableDictionary, HKBundleLoadObserver, NSString;

@interface HKPPTPluginManager : NSObject <HKBundleLoadObserverDelegate> {

	NSMutableDictionary* _testClasses;
	NSMutableDictionary* _builtinTests;
	HKBundleLoadObserver* _bundleLoadObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPluginManager;
-(id)_internalPluginsPath;
-(void)_loadPPTBundles;
-(void)_loadPPTBundleAtPath:(id)arg1 ;
-(void)bundleLoadObserver:(id)arg1 loadedClass:(Class)arg2 bundle:(id)arg3 ;
-(id)builtinTests;
-(Class)classForTestType:(id)arg1 ;
-(id)init;
@end

