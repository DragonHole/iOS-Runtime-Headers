/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRestartManagerDelegate <NSObject>
@optional
-(void)restartManagerWillShutdown:(id)arg1;
-(void)restartManagerWillReboot:(id)arg1;
-(void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;
-(void)restartManagerExitImminent:(id)arg1;

@end

