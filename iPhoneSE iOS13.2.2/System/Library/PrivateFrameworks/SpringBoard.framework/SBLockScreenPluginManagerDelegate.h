/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLockScreenPluginManagerDelegate <NSObject>
@required
-(void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
-(void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
-(void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
-(BOOL)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;

@end
