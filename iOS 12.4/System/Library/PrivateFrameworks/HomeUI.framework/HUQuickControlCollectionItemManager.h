/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@protocol NSCopying;
@class HFItemProvider, HFItem;

@interface HUQuickControlCollectionItemManager : HFItemManager {

	HFItemProvider* _gridItemProvider;
	HFItem*<NSCopying> _supplementaryItem;
	/*^block*/id _gridItemProviderCreator;

}

@property (nonatomic,copy,readonly) id gridItemProviderCreator;                        //@synthesize gridItemProviderCreator=_gridItemProviderCreator - In the implementation block
@property (nonatomic,retain) HFItemProvider * gridItemProvider;                        //@synthesize gridItemProvider=_gridItemProvider - In the implementation block
@property (nonatomic,copy,readonly) HFItem*<NSCopying> supplementaryItem;              //@synthesize supplementaryItem=_supplementaryItem - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 gridItemProviderCreator:(/*^block*/id)arg2 supplementaryItem:(id)arg3 ;
-(HFItem*<NSCopying>)supplementaryItem;
-(HFItemProvider *)gridItemProvider;
-(id)gridItemProviderCreator;
-(void)setGridItemProvider:(HFItemProvider *)arg1 ;
-(BOOL)isGridItem:(id)arg1 ;
@end

