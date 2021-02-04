/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HUControlPanelControllerDelegate.h>

@class HFItem, HFStaticItem, HUControlPanelController, HFServiceBuilder, HFValveServiceItem, HFControlPanelItemProvider, HFStaticItemProvider, NSString;

@interface HUValveEditorItemManager : HFItemManager <HUControlPanelControllerDelegate> {

	HFItem* _nameItem;
	HFStaticItem* _identifyItem;
	HUControlPanelController* _controlPanelController;
	HFServiceBuilder* _serviceBuilder;
	unsigned long long _editorMode;
	HFValveServiceItem* _sourceValveItem;
	HFControlPanelItemProvider* _controlPanelItemProvider;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HFValveServiceItem * sourceValveItem;                               //@synthesize sourceValveItem=_sourceValveItem - In the implementation block
@property (nonatomic,retain) HFItem * nameItem;                                                  //@synthesize nameItem=_nameItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * identifyItem;                                        //@synthesize identifyItem=_identifyItem - In the implementation block
@property (nonatomic,retain) HUControlPanelController * controlPanelController;                  //@synthesize controlPanelController=_controlPanelController - In the implementation block
@property (nonatomic,retain) HFControlPanelItemProvider * controlPanelItemProvider;              //@synthesize controlPanelItemProvider=_controlPanelItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                          //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFServiceBuilder * serviceBuilder;                                  //@synthesize serviceBuilder=_serviceBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long editorMode;                                    //@synthesize editorMode=_editorMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferredSectionSortArray;
+(/*^block*/id)sortComparatorForValveEditorSections;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)setNameItem:(HFItem *)arg1 ;
-(HFItem *)nameItem;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 editorMode:(unsigned long long)arg3 ;
-(HUControlPanelController *)controlPanelController;
-(HFStaticItem *)identifyItem;
-(HFServiceBuilder *)serviceBuilder;
-(HFStaticItemProvider *)staticItemProvider;
-(void)setServiceBuilder:(HFServiceBuilder *)arg1 ;
-(HFControlPanelItemProvider *)controlPanelItemProvider;
-(HFValveServiceItem *)sourceValveItem;
-(void)setControlPanelItemProvider:(HFControlPanelItemProvider *)arg1 ;
-(unsigned long long)editorMode;
-(id)_characteristicTypesForControlPanelItem:(id)arg1 ;
-(void)setIdentifyItem:(HFStaticItem *)arg1 ;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(id)_characteristicsAffectedByControlItem:(id)arg1 ;
-(void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2 ;
-(void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2 ;
-(void)setControlPanelController:(HUControlPanelController *)arg1 ;
-(void)setSourceValveItem:(HFValveServiceItem *)arg1 ;
@end
