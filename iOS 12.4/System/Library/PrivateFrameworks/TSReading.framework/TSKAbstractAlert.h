/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKUIAlertProtocol;
@interface TSKAbstractAlert : NSObject {

	long long _result;
	id _context;
	id<TSKUIAlertProtocol> _delegate;
	BOOL _isDelegateRetained;
	BOOL _cancelOnEnterBackground;
	BOOL _inBackground;
	BOOL _clickedButtonAtIndex;
	BOOL _didDismissWithButtonIndex;
	BOOL _willDismissWithButtonIndex;
	BOOL _didPresentAlertView;
	BOOL _willPresentAlertView;
	/*^block*/id _clickedBlock;
	/*^block*/id _dismissedBlock;
	id<TSKUIAlertProtocol> _retainedDelegate;

}

@property (nonatomic,retain) id<TSKUIAlertProtocol> retainedDelegate;              //@synthesize retainedDelegate=_retainedDelegate - In the implementation block
@property (nonatomic,retain) id context;                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<TSKUIAlertProtocol> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (assign,nonatomic) BOOL cancelOnEnterBackground;                         //@synthesize cancelOnEnterBackground=_cancelOnEnterBackground - In the implementation block
@property (nonatomic,readonly) BOOL inBackground;                                  //@synthesize inBackground=_inBackground - In the implementation block
-(void)setRetainedDelegate:(id<TSKUIAlertProtocol>)arg1 ;
-(void)showAlert;
-(void)setCancelOnEnterBackground:(BOOL)arg1 ;
-(void)enterBackground;
-(BOOL)inBackground;
-(BOOL)cancelOnEnterBackground;
-(void)didDismissWithButtonIndex:(long long)arg1 ;
-(void)clickedButtonAtIndex:(long long)arg1 ;
-(void)showWithDelegate:(id)arg1 context:(id)arg2 ;
-(void)showWithClickedButtonBlock:(/*^block*/id)arg1 ;
-(void)showWithDismissedByButtonBlock:(/*^block*/id)arg1 ;
-(long long)showSynchronously;
-(void)willDismissWithButtonIndex:(long long)arg1 ;
-(void)didPresentAlertView;
-(void)willPresentAlertView;
-(id<TSKUIAlertProtocol>)retainedDelegate;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<TSKUIAlertProtocol>)arg1 ;
-(long long)addButtonWithTitle:(id)arg1 ;
-(long long)firstOtherButtonIndex;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(id<TSKUIAlertProtocol>)delegate;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)cancelButtonIndex;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(long long)numberOfButtons;
-(void)setContext:(id)arg1 ;
-(id)context;
-(void)show;
-(long long)result;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
@end

