/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HFItemManager;


@protocol HUItemManagerContainer <NSObject>
@property (nonatomic,readonly) HFItemManager * itemManager; 
@required
+(unsigned long long)updateMode;
-(HFItemManager *)itemManager;
-(void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2;

@end
