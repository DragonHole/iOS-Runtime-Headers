/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKIdentityProtocol;
@class NSString, EKUILabeledAvatarView, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {

	NSString* _organizerName;
	EKUILabeledAvatarView* _organizerView;
	UILabel* _organizerLabel;
	UILabel* _titleView;
	id<EKIdentityProtocol> _organizerOverride;
	BOOL _hideDisclosureIndicator;

}

@property (assign,nonatomic) BOOL hideDisclosureIndicator;              //@synthesize hideDisclosureIndicator=_hideDisclosureIndicator - In the implementation block
+(id)_titleFont;
+(id)_organizerFont;
-(BOOL)update;
-(id)_titleView;
-(BOOL)shouldDisplayForEvent;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 organizerOverride:(id)arg3 ;
-(void)_updateDisclosureIndicator;
-(void)setHideDisclosureIndicator:(BOOL)arg1 ;
-(BOOL)hideDisclosureIndicator;
-(id)_organizerView;
-(id)_organizerLabel;
@end

