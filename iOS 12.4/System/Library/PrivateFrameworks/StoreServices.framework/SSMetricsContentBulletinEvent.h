/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@interface SSMetricsContentBulletinEvent : SSMetricsBaseEvent {

	BOOL _explicitEnabled;
	BOOL _notificationsEnabled;

}

@property (assign,nonatomic) BOOL explicitEnabled;                   //@synthesize explicitEnabled=_explicitEnabled - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;              //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(id)_displayCriteria;
-(id)initWithBulletinMetricsDictionary:(id)arg1 ;
-(BOOL)clientExplicitEnabled;
-(BOOL)clientNotificationsEnabled;
-(void)setExplicitEnabled:(BOOL)arg1 ;
-(BOOL)explicitEnabled;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
@end

