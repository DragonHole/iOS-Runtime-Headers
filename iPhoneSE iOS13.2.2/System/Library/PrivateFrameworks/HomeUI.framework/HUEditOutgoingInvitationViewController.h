/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUUserTableViewController.h>

@class HUEditOutgoingInvitationItemManager;

@interface HUEditOutgoingInvitationViewController : HUUserTableViewController {

	HUEditOutgoingInvitationItemManager* _editOutgoingInvitationItemManager;

}

@property (nonatomic,readonly) HUEditOutgoingInvitationItemManager * editOutgoingInvitationItemManager;              //@synthesize editOutgoingInvitationItemManager=_editOutgoingInvitationItemManager - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)userHandle;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(HUEditOutgoingInvitationItemManager *)editOutgoingInvitationItemManager;
-(id)_messageForInvitationState:(long long)arg1 ;
-(void)_cancelOutgoingInvitation:(BOOL)arg1 ;
@end

