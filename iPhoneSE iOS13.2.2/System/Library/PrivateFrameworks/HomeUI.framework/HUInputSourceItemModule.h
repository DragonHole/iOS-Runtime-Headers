/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUChildServiceEditorItemModule.h>

@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule {

	HFItem* _chooseInputsSelectionItem;

}

@property (nonatomic,readonly) HFItem * chooseInputsSelectionItem;              //@synthesize chooseInputsSelectionItem=_chooseInputsSelectionItem - In the implementation block
+(id)supportedServiceTypes;
+(/*^block*/id)_serviceItemComparatorForTelevisionProfile:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(BOOL)canToggleConfigurationStateForItem:(id)arg1 ;
-(HFItem *)chooseInputsSelectionItem;
@end
