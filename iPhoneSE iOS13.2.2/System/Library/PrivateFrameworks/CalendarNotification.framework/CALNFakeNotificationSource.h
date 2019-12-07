/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNNotificationSource.h>

@protocol CALNNotificationManager;
@class NSString, NSArray;

@interface CALNFakeNotificationSource : NSObject <CALNNotificationSource> {

	NSString* _sourceIdentifier;
	id<CALNNotificationManager> _notificationManager;

}

@property (nonatomic,readonly) id<CALNNotificationManager> notificationManager;              //@synthesize notificationManager=_notificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * sourceIdentifier;                                  //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * categories; 
+(id)_activeSourcesQueue;
+(id)_activeSources;
-(NSArray *)categories;
-(NSString *)sourceIdentifier;
-(id<CALNNotificationManager>)notificationManager;
-(void)didReceiveResponse:(id)arg1 ;
-(id)contentForNotificationWithSourceClientIdentifier:(id)arg1 ;
-(void)refreshNotifications:(id)arg1 ;
-(id)initWithNotificationManager:(id)arg1 sourceIdentifierSuffix:(id)arg2 ;
-(void)postFakeNotification;
@end
