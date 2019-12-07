/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class HUTVViewingProfilesDevicesItemModule, NSString;

@interface HUTVViewingProfilesDevicesModuleController : HUItemTableModuleController <HUSwitchCellDelegate>

@property (nonatomic,readonly) HUTVViewingProfilesDevicesItemModule * module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModule:(id)arg1 ;
-(id)initWithModule:(id)arg1 host:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)_toggleShowTVViewingProfileForItem:(id)arg1 ;
@end
