/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSCache, NSString;

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject <BSDescriptionProviding> {

	NSCache* _backgroundRefreshStateByIdentity;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_registerForBackgroundRefreshStatusChangedNotification;
-(void)removeIdentity:(id)arg1 ;
-(BOOL)isBackgroundRefreshEnabledForIdentity:(id)arg1 ;
-(id)_lock_fetchBackgroundRefreshEnabledForIdentity:(id)arg1 ;
-(void)_unregisterFromBackgroundRefreshStatusChangedNotification;
-(void)_handleBackgroundRefreshStatusDidChange;
@end

