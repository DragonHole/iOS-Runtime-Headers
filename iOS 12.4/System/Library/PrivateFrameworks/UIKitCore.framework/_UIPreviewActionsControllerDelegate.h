/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPreviewActionsControllerDelegate <NSObject>
@required
-(CGSize*)maximumPreviewActionsViewSizeForPreviewActionsController:(id)arg1;
-(void)previewActionsController:(id)arg1 didCompleteWithSelectedAction:(id)arg2;
-(void)didDismissPreviewActionsController:(id)arg1;
-(CGPoint*)initialPlatterPositionForPreviewActionsController:(id)arg1;
-(void)previewActionsController:(id)arg1 didUpdatePlatterTranslation:(CGVector)arg2 withVelocity:(CGVector)arg3;

@end
