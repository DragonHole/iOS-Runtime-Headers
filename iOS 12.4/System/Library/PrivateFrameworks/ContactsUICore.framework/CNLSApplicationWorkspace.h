/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNLSApplicationWorkspace.h>

@protocol CNLSApplicationWorkspace <NSObject>
@required
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1;
-(id)applicationForBundleIdentifier:(id)arg1;
-(id)applicationsForUserActivityType:(id)arg1;

@end


@protocol CNSchedulerProvider;
@class NSString;

@interface CNLSApplicationWorkspace : NSObject <CNLSApplicationWorkspace> {

	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inProcessLaunchServices;
+(id)remoteAdapter;
+(id)launchServices;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg1 ;
-(id)applicationForBundleIdentifier:(id)arg1 ;
-(id)applicationsForUserActivityType:(id)arg1 ;
-(id)init;
@end
