/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMenuViewController.h>

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController {

	SUNavigationMenu* _navigationMenu;

}

@property (nonatomic,readonly) SUNavigationMenu * navigationMenu;              //@synthesize navigationMenu=_navigationMenu - In the implementation block
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_cancelAction:(id)arg1 ;
-(long long)numberOfMenuItems;
-(SUNavigationMenu *)navigationMenu;
-(id)initWithNavigationMenu:(id)arg1 ;
-(id)titleOfMenuItemAtIndex:(long long)arg1 ;
-(void)_protocolButtonAction:(id)arg1 ;
@end
