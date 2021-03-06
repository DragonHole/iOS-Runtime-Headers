/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTAvatarActionsModelDelegate <NSObject>
@required
-(void)actionsModelDidUpdateInlineActionButtons:(id)arg1;
-(void)actionsModel:(id)arg1 didDuplicateToRecord:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(id)actionsModel:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
-(void)actionsModelDidFinish:(id)arg1;
-(void)actionsModel:(id)arg1 didDeleteRecord:(id)arg2 withRecordUpdate:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(void)actionsModel:(id)arg1 shouldDeleteRecord:(id)arg2 resultBlock:(/*^block*/id)arg3;
-(void)presentEditorViewController:(id)arg1 forActionsModel:(id)arg2 isCreate:(BOOL)arg3;
-(void)actionsModel:(id)arg1 didAddRecord:(id)arg2;
-(void)actionsModel:(id)arg1 didEditRecord:(id)arg2;
-(void)actionsModel:(id)arg1 didCancelEditingRecord:(id)arg2;
-(void)dismissEditorViewController:(id)arg1 forActionsModel:(id)arg2 wasCreate:(BOOL)arg3 didEdit:(BOOL)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6;

@end

