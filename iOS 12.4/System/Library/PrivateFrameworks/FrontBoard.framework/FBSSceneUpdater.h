/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSSceneUpdater <NSObject>
@required
-(void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
-(void)unregisterDelegateForSceneID:(id)arg1;
-(BOOL)willObserveLayersManually;
-(void)scene:(id)arg1 didAttachLayer:(id)arg2;
-(void)scene:(id)arg1 didUpdateLayer:(id)arg2;
-(void)scene:(id)arg1 didDetachLayer:(id)arg2;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
-(void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3;
-(id)hostProcess;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2;

@end

