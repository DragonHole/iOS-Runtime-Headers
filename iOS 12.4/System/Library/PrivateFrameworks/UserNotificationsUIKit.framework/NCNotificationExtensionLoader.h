/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NCNotificationExtensionLoader : NSObject {

	NSMutableDictionary* _loadedHostViewControllerCache;

}

@property (nonatomic,retain) NSMutableDictionary * loadedHostViewControllerCache;              //@synthesize loadedHostViewControllerCache=_loadedHostViewControllerCache - In the implementation block
+(id)sharedInstance;
-(void)clearCacheForNotificationRequest:(id)arg1 ;
-(void)loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)loadedHostViewControllerCache;
-(void)_loadViewControllerForExtension:(id)arg1 notificationRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setLoadedHostViewControllerCache:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

