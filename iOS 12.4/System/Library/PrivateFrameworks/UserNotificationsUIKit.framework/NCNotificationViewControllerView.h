/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeManaging.h>

@class NSArray, PLPlatterView, NSString;

@interface NCNotificationViewControllerView : UIView <PLContentSizeManaging> {

	NSArray* _stackedPlatters;
	PLPlatterView* _contentView;
	unsigned long long _coalescedNotificationCount;

}

@property (assign,nonatomic,__weak) PLPlatterView * contentView;                         //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) unsigned long long coalescedNotificationCount;              //@synthesize coalescedNotificationCount=_coalescedNotificationCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeThatFitsContentWithSize:(CGSize)arg1 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(BOOL)_isCoalescedNotificationBundle;
-(unsigned long long)_stackedPlatterCount;
-(void)_configureStackedPlatters;
-(void)_layoutStackedPlatters;
-(unsigned long long)_stackedPlatterCountCoalescedNotificationCount:(unsigned long long)arg1 ;
-(unsigned long long)coalescedNotificationCount;
-(void)setCoalescedNotificationCount:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PLPlatterView *)contentView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(PLPlatterView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

