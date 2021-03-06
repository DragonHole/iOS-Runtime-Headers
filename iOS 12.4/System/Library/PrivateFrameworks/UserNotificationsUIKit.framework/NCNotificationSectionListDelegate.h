/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationSectionListDelegate <NSObject>
@required
-(void)notificationSectionList:(id)arg1 didInsertNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
-(void)notificationSectionList:(id)arg1 didReplaceNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
-(void)notificationSectionList:(id)arg1 didRemoveNotificationRequest:(id)arg2 atIndexPath:(id)arg3;
-(void)notificationSectionList:(id)arg1 requestsReloadAtIndices:(id)arg2;
-(void)notificationSectionList:(id)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
-(void)notificationSectionList:(id)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
-(void)notificationSectionList:(id)arg1 didRemoveSectionsAtIndices:(id)arg2;
-(void)notificationSectionList:(id)arg1 didInsertNotificationListItem:(id)arg2 atIndexPath:(id)arg3;
-(void)notificationSectionList:(id)arg1 didRemoveNotificationListItem:(id)arg2 atIndexPath:(id)arg3;
-(void)notificationSectionListNeedsReload:(id)arg1;
-(BOOL)notificationSectionList:(id)arg1 shouldInsertForExpandedStackNotificationRequest:(id)arg2;
-(id)notificationSectionList:(id)arg1 coalescingIdentifierForNotificationRequest:(id)arg2;

@end

