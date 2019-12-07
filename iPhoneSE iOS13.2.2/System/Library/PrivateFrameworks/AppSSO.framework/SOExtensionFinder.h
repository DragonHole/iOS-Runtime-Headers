/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SOExtensionFinder : NSObject {

	NSObject*<OS_dispatch_queue> _extensionFinderQueue;
	id _matchingContext;

}
-(id)init;
-(void)endMatchingExtensions;
-(void)findExtensionWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)findExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)beginMatchingExtensionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_didFindExtensions:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_soExtensionsForExtensions:(id)arg1 ;
@end
