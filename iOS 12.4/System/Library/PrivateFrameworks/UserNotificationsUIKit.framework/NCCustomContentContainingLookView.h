/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITapGestureRecognizer;


@protocol NCCustomContentContainingLookView <PLPlatter,PLTitled,PLExpandedPlatter>
@property (assign,nonatomic) unsigned long long customContentLocation; 
@property (assign,nonatomic) BOOL hidesNotificationContent; 
@property (nonatomic,readonly) UITapGestureRecognizer * lookViewTapGestureRecognizer; 
@required
-(unsigned long long)customContentLocation;
-(void)setCustomContentLocation:(unsigned long long)arg1;
-(BOOL)hidesNotificationContent;
-(void)setHidesNotificationContent:(BOOL)arg1;
-(UITapGestureRecognizer *)lookViewTapGestureRecognizer;

@end

