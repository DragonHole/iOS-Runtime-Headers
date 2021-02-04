/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivityViewController.h>

@class RCCompositionController;

@interface RCShareMemoViewController : UIActivityViewController {

	RCCompositionController* _compositionController;

}

@property (nonatomic,readonly) RCCompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
+(id)_newPresentedPrepareFailureAlertControllerForComposition:(id)arg1 source:(id)arg2 ;
+(void)prepareToShareComposition:(id)arg1 ignoringInteraction:(BOOL)arg2 source:(id)arg3 shouldContinuePreparingBlock:(/*^block*/id)arg4 preparedHandler:(/*^block*/id)arg5 ;
+(id)_newPresentedPrepareAlertControllerForComposition:(id)arg1 source:(id)arg2 dismissHandler:(/*^block*/id)arg3 ;
+(id)unsupportedActivityTypes;
+(void)presentInViewController:(id)arg1 source:(id)arg2 composition:(id)arg3 ignoringInteraction:(BOOL)arg4 shouldContinuePreparingBlock:(/*^block*/id)arg5 preparedToPresentBlock:(/*^block*/id)arg6 ;
-(id)initWithCompositionController:(id)arg1 ;
-(RCCompositionController *)compositionController;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
