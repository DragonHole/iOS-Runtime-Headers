/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class _UIStatusBarDisplayItemPlacementCellularGroup, _UIStatusBarDisplayItemPlacementWifiGroup;

@interface _UIStatusBarDisplayItemPlacementNetworkGroup : _UIStatusBarDisplayItemPlacementGroup {

	_UIStatusBarDisplayItemPlacementCellularGroup* _cellularGroup;
	_UIStatusBarDisplayItemPlacementWifiGroup* _wifiGroup;

}

@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementCellularGroup * cellularGroup;              //@synthesize cellularGroup=_cellularGroup - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementWifiGroup * wifiGroup;                      //@synthesize wifiGroup=_wifiGroup - In the implementation block
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 cellularTypeClass:(Class)arg5 includeCellularName:(BOOL)arg6 ;
+(id)_groupWithCellularGroup:(id)arg1 wifiGroup:(id)arg2 includeCellularName:(BOOL)arg3 ;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 includeCellularName:(BOOL)arg5 ;
+(id)secondaryGroupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 cellularItemClass:(Class)arg3 wifiItemClass:(Class)arg4 ;
-(_UIStatusBarDisplayItemPlacementCellularGroup *)cellularGroup;
-(_UIStatusBarDisplayItemPlacementWifiGroup *)wifiGroup;
@end
