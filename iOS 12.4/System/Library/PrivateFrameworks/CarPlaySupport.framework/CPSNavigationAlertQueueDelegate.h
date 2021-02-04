/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPSNavigationAlertQueueDelegate <NSObject>
@required
-(void)navigationAlertQueue:(id)arg1 shouldDisplayAlertView:(id)arg2 animated:(BOOL)arg3;
-(void)navigationAlertQueue:(id)arg1 shouldRemoveAlertView:(id)arg2 animated:(BOOL)arg3 dismissalContext:(unsigned long long)arg4;
-(BOOL)canAnimateNavigationAlert;

@end
