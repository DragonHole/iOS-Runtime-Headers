/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>

@class BBObserver, NSMutableDictionary, NSString;

@interface ATXBBNotificationManager : NSObject <BBObserverDelegate> {

	BOOL _debugOutput;
	BBObserver* _observer;
	NSMutableDictionary* _recentNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(id)initWithDebugOutput:(BOOL)arg1 withObserverEnabled:(BOOL)arg2 ;
-(BOOL)_addNotificationForBundleId:(id)arg1 withPublicationDate:(id)arg2 ;
-(BOOL)_purgeNotificationsWithMinDate:(id)arg1 ;
-(id)recentNotifications;
-(id)init;
@end
