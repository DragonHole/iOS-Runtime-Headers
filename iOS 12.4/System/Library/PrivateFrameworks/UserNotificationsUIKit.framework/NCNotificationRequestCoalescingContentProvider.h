/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NSNumberFormatter, NCNotificationSummaryBuilder, NSMutableArray;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {

	NSNumberFormatter* _decimalFormatter;
	NCNotificationSummaryBuilder* _summaryBuilder;
	BOOL _deviceAuthenticated;
	NSMutableArray* _coalescedNotificationRequests;

}

@property (nonatomic,retain) NSMutableArray * coalescedNotificationRequests;                     //@synthesize coalescedNotificationRequests=_coalescedNotificationRequests - In the implementation block
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated;              //@synthesize deviceAuthenticated=_deviceAuthenticated - In the implementation block
-(BOOL)_shouldShowContent;
-(id)primaryText;
-(id)secondaryText;
-(void)_updateSummaryText;
-(id)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(id)primarySubtitleText;
-(id)summaryText;
-(unsigned long long)coalesceCount;
-(NSMutableArray *)coalescedNotificationRequests;
-(unsigned long long)_indexOfMatchingNotificationRequest:(id)arg1 ;
-(BOOL)_shouldShowNotificationBody;
-(id)_placeholderSecondaryText;
-(id)_localizedStringWithPlaceholderFormat:(id)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isDeviceAuthenticated;
-(void)coalesceNotificationRequest:(id)arg1 ;
-(void)removeCoalescedNotificationRequest:(id)arg1 ;
-(void)updateCoalescedNotificationRequest:(id)arg1 ;
-(BOOL)containsMatchingCoalescedNotificationRequest:(id)arg1 ;
-(void)setCoalescedNotificationRequests:(NSMutableArray *)arg1 ;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(id)init;
-(id)thumbnail;
@end

