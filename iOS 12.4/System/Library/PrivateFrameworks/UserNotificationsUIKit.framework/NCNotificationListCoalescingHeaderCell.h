/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/NCNotificationListCoalescingControlsViewDelegate.h>
#import <libobjc.A.dylib/NCLegibilitySettingsAdjusting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/NCNotificationListCoalescingControlsHandler.h>

@protocol NCNotificationListCoalescingControlsHandlerDelegate;
@class NSString, NCNotificationListCoalescingControlsView, NCNotificationListHeaderTitleView, _UILegibilitySettings;

@interface NCNotificationListCoalescingHeaderCell : UICollectionViewCell <NCNotificationListCoalescingControlsViewDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler> {

	BOOL _adjustsFontForContentSizeCategory;
	NSString* _coalescingIdentifier;
	unsigned long long _groupingSection;
	id<NCNotificationListCoalescingControlsHandlerDelegate> _handlerDelegate;
	NSString* _title;
	NSString* _backgroundGroupName;
	NCNotificationListCoalescingControlsView* _coalescingControlsView;
	NCNotificationListHeaderTitleView* _headerTitleView;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) NCNotificationListCoalescingControlsView * coalescingControlsView;                           //@synthesize coalescingControlsView=_coalescingControlsView - In the implementation block
@property (nonatomic,retain) NCNotificationListHeaderTitleView * headerTitleView;                                         //@synthesize headerTitleView=_headerTitleView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                  //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * backgroundGroupName;                                                                //@synthesize backgroundGroupName=_backgroundGroupName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                      //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (assign,nonatomic,__weak) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate;              //@synthesize handlerDelegate=_handlerDelegate - In the implementation block
@property (nonatomic,copy) NSString * coalescingIdentifier;                                                               //@synthesize coalescingIdentifier=_coalescingIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long groupingSection;                                                          //@synthesize groupingSection=_groupingSection - In the implementation block
+(void)_contentSizeCategoryDidChange:(id)arg1 ;
+(CGSize)_coalescingControlsViewPreferredSize;
+(double)coalescingHeaderCellHeightForWidth:(double)arg1 title:(id)arg2 ;
+(void)initialize;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(void)_configureHeaderTitleViewIfNecessary;
-(void)_layoutHeaderTitleView;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)setBackgroundGroupName:(NSString *)arg1 ;
-(void)resetClearButtonStateAnimated:(BOOL)arg1 ;
-(NSString *)backgroundGroupName;
-(NCNotificationListHeaderTitleView *)headerTitleView;
-(void)setHeaderTitleView:(NCNotificationListHeaderTitleView *)arg1 ;
-(NCNotificationListCoalescingControlsView *)coalescingControlsView;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(CGPoint)arg1 ;
-(void)_configureCoalescingControlsViewIfNecessary;
-(void)_layoutCoalescingControlsView;
-(id<NCNotificationListCoalescingControlsHandlerDelegate>)handlerDelegate;
-(NSString *)coalescingIdentifier;
-(unsigned long long)groupingSection;
-(CGRect)_coalescingControlsViewFrameForBounds:(CGRect)arg1 ;
-(void)notificationListCoalescingControlsViewRequestsClear:(id)arg1 ;
-(id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg1 ;
-(void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg1 ;
-(void)notificationListCoalescingControlsViewRequestsRestack:(id)arg1 ;
-(void)notificationListCoalescingControlsView:(id)arg1 didTransitionToClearState:(BOOL)arg2 ;
-(void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg1 ;
-(void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg1 ;
-(void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg1 ;
-(void)setHandlerDelegate:(id<NCNotificationListCoalescingControlsHandlerDelegate>)arg1 ;
-(void)setCoalescingIdentifier:(NSString *)arg1 ;
-(void)setGroupingSection:(unsigned long long)arg1 ;
-(void)setCoalescingControlsView:(NCNotificationListCoalescingControlsView *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)adjustsFontForContentSizeCategory;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
@end
