/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlViewController.h>

@class HUQuickControlCollectionViewController, HFTemperatureThresholdControlItem, HFChildServiceControlItem;

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController {

	HUQuickControlCollectionViewController* _collectionViewController;

}

@property (nonatomic,readonly) HUQuickControlCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,readonly) HFControlItem*<HFPrimaryStateWriter> primaryStateControlItem; 
@property (nonatomic,readonly) HFTemperatureThresholdControlItem * temperatureControlItem; 
@property (nonatomic,readonly) HFChildServiceControlItem * childValvesControlItem; 
+(id)controlItemPredicate;
+(id)_primaryStatePredicate;
+(id)_temperaturePredicate;
+(id)_childValvesPredicate;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)childQuickControlContentViewControllers;
-(id)overrideStatusText;
-(HFControlItem*<HFPrimaryStateWriter>)primaryStateControlItem;
-(HFTemperatureThresholdControlItem *)temperatureControlItem;
-(HFChildServiceControlItem *)childValvesControlItem;
-(id)_controlItemMatchingPredicate:(id)arg1 ;
-(void)viewDidLoad;
-(HUQuickControlCollectionViewController *)collectionViewController;
@end

