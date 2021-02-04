/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassDeleteAnimationControllerDelegate;
@class UIAlertController, PKPassView, PKPassGroupView;

@interface PKPassDeleteAnimationController : NSObject {

	UIAlertController* _alertController;
	id<PKPassDeleteAnimationControllerDelegate> _delegate;
	PKPassView* _passView;
	PKPassGroupView* _groupView;

}

@property (assign,nonatomic,__weak) id<PKPassDeleteAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) PKPassView * passView;                                           //@synthesize passView=_passView - In the implementation block
@property (nonatomic,retain,readonly) PKPassGroupView * groupView;                                     //@synthesize groupView=_groupView - In the implementation block
+(void)performPassbookDeleteWithView:(id)arg1 inSuperview:(id)arg2 completion:(/*^block*/id)arg3 ;
-(PKPassView *)passView;
-(PKPassGroupView *)groupView;
-(void)_unregisterForEnterBackgroundNotification;
-(void)_startAnimation;
-(void)_registerForEnterBackgroundNotification;
-(id)initWithPassView:(id)arg1 groupView:(id)arg2 ;
-(void)showInViewController:(id)arg1 ;
-(void)forceDeleteAnimation;
-(void)dealloc;
-(void)setDelegate:(id<PKPassDeleteAnimationControllerDelegate>)arg1 ;
-(id<PKPassDeleteAnimationControllerDelegate>)delegate;
-(void)finished:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
@end
