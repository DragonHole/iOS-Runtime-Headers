/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSRemoteAlertHandleClient <NSObject>
@required
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
-(void)invalidateRemoteAlertHandle:(id)arg1;

@end

