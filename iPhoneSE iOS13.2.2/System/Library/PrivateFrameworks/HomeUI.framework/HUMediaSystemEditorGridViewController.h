/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFMediaSystemBuilder, HUMediaSystemEditorGridItemManager;

@interface HUMediaSystemEditorGridViewController : HUSelectableServiceGridViewController {

	HFMediaSystemBuilder* _mediaSystemBuilder;

}

@property (nonatomic,retain) HUMediaSystemEditorGridItemManager * itemManager; 
@property (nonatomic,readonly) HFMediaSystemBuilder * mediaSystemBuilder;                                    //@synthesize mediaSystemBuilder=_mediaSystemBuilder - In the implementation block
@property (assign,nonatomic,__weak) id<HUMediaSystemEditorGridViewControllerDelegate> delegate; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)didSelectItem:(id)arg1 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(HFMediaSystemBuilder *)mediaSystemBuilder;
-(void)didDeselectItem:(id)arg1 ;
-(id)initWithMediaSystemBuilder:(id)arg1 ;
-(void)_resetBuilder;
-(id)_accessoryVendorItemForItem:(id)arg1 ;
-(void)addItemToSelection:(id)arg1 ;
-(void)_addItemToMediaSystem:(id)arg1 ;
-(BOOL)_wantsToggleButtonForSection:(unsigned long long)arg1 ;
@end

