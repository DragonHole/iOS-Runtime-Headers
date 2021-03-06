/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/STLockoutPolicyControllerDelegate.h>

@protocol OS_dispatch_group, STLockoutViewControllerDelegate;
@class SBSLockScreenService, UIAlertController, NSObject, STLockoutPolicyController, STHourglassView, UILabel, UIButton, STBlockingBackdropView, NSString;

@interface STLockoutViewController : UIViewController <CNContactViewControllerDelegate, STLockoutPolicyControllerDelegate> {

	long long _style;
	unsigned long long _state;
	unsigned long long _stateBeforePending;
	unsigned long long _reuseIdentifier;
	SBSLockScreenService* _sbsLockScreenService;
	/*^block*/id _restrictionsPINControllerCompletion;
	UIAlertController* _presentedAlertController;
	BOOL _isHourglassStateInitialized;
	BOOL _isApprovedAnimationWithApprovalPending;
	NSObject*<OS_dispatch_group> _initialAnimationGroup;
	NSObject*<OS_dispatch_group> _approvalAnimationGroup;
	NSObject*<OS_dispatch_group> _dismissingAnimationGroup;
	BOOL _okButtonAlwaysHidden;
	BOOL _mainButtonAlwaysHidden;
	BOOL _forSnapshot;
	BOOL _didFinishDismissing;
	STLockoutPolicyController* _policyController;
	STHourglassView* _hourglassView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _mainButton;
	UIButton* _okButton;
	long long _okButtonAction;
	id<STLockoutViewControllerDelegate> _viewControllerDelegate;

}

@property (nonatomic,retain) STBlockingBackdropView * view; 
@property (nonatomic,readonly) STBlockingBackdropView * viewIfLoaded; 
@property (nonatomic,retain) STLockoutPolicyController * policyController;                                   //@synthesize policyController=_policyController - In the implementation block
@property (__weak) STHourglassView * hourglassView;                                                          //@synthesize hourglassView=_hourglassView - In the implementation block
@property (__weak) UILabel * titleLabel;                                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (__weak) UILabel * messageLabel;                                                                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (__weak) UIButton * mainButton;                                                                    //@synthesize mainButton=_mainButton - In the implementation block
@property (__weak) UIButton * okButton;                                                                      //@synthesize okButton=_okButton - In the implementation block
@property (assign,getter=isForSnapshot,nonatomic) BOOL forSnapshot;                                          //@synthesize forSnapshot=_forSnapshot - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,readonly) BOOL didFinishDismissing;                                                     //@synthesize didFinishDismissing=_didFinishDismissing - In the implementation block
@property (assign) long long okButtonAction;                                                                 //@synthesize okButtonAction=_okButtonAction - In the implementation block
@property (assign,nonatomic,__weak) id<STLockoutViewControllerDelegate> viewControllerDelegate;              //@synthesize viewControllerDelegate=_viewControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL okButtonAlwaysHidden;                                                      //@synthesize okButtonAlwaysHidden=_okButtonAlwaysHidden - In the implementation block
@property (assign,nonatomic) BOOL mainButtonAlwaysHidden;                                                    //@synthesize mainButtonAlwaysHidden=_mainButtonAlwaysHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lockoutViewControllerWithBundleIdentifier:(id)arg1 ;
+(id)lockoutViewControllerWithWebsiteURL:(id)arg1 ;
+(id)lockoutViewControllerWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2 ;
+(id)lockoutViewControllerWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3 ;
+(id)_bundleIdentifierForWebsiteURL:(id)arg1 ;
+(id)_applicationNameForBundleIdentifier:(id)arg1 ;
+(id)messageForApplicationName:(id)arg1 style:(long long)arg2 ;
+(id)_applicationNameForWebsiteURL:(id)arg1 ;
+(id)_messageForCategoryIdentifier:(id)arg1 ;
+(id)messageForWebsiteURL:(id)arg1 ;
+(id)messageForBundleIdentifier:(id)arg1 style:(long long)arg2 ;
+(id)lockoutViewControllerWithCategoryIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(STBlockingBackdropView *)view;
-(void)setView:(STBlockingBackdropView *)arg1 ;
-(UILabel *)titleLabel;
-(id)nextResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(STBlockingBackdropView *)viewIfLoaded;
-(UIButton *)okButton;
-(void)setOkButton:(UIButton *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)stateDidChange:(unsigned long long)arg1 ;
-(void)_setupCommon;
-(void)setPolicyController:(STLockoutPolicyController *)arg1 ;
-(BOOL)isForSnapshot;
-(void)_hideBackdrop;
-(STHourglassView *)hourglassView;
-(void)_hideHourglass;
-(void)_hideTextAndButtons;
-(void)_restoreBackdrop;
-(void)_restoreHourglass;
-(void)_restoreTextAndButtons;
-(void)_showInitialAnimationIfNeeded;
-(BOOL)didFinishDismissing;
-(id<STLockoutViewControllerDelegate>)viewControllerDelegate;
-(long long)okButtonAction;
-(void)setDidFinishDismissing:(BOOL)arg1 ;
-(void)_showApprovalAnimationIfNeeded;
-(STLockoutPolicyController *)policyController;
-(void)_presentAlertController:(id)arg1 ;
-(BOOL)_actionUnlockedAskOrApproveActionSheet;
-(void)_unlockWithSuccessMainCompletion:(/*^block*/id)arg1 ;
-(void)_actionEnterScreenTimePasscodeActionSheet:(id)arg1 ;
-(BOOL)_actionUnlockedEnterScreenTimePasscodeActionSheet;
-(BOOL)_authenticatedApproveActionSheet;
-(void)_showRestrictionsPINControllerWithMainCompletion:(/*^block*/id)arg1 ;
-(void)_undoApprovalAnimationIfNeeded;
-(UILabel *)messageLabel;
-(void)_updateOKButtonVisibility;
-(BOOL)okButtonAlwaysHidden;
-(UIButton *)mainButton;
-(void)_updateMainButtonVisibility;
-(BOOL)mainButtonAlwaysHidden;
-(void)_actionAskOrApproveActionSheet:(id)arg1 ;
-(void)_actionIgnoreLimitActionSheet:(id)arg1 ;
-(void)_actionAddContact:(id)arg1 ;
-(void)_changeMessageToInitial;
-(void)_changeMainButtonToIgnoreLimit;
-(void)_changeMainButtonToAskForMore;
-(void)_changeMainButtonToEnterScreenTimePasscode;
-(void)_changeStateToDismissing;
-(void)_changeMainButtonToAddContact;
-(void)_showDismissingAnimationIfNeeded;
-(BOOL)_actionDismiss;
-(BOOL)_isShowingInitialAnimation;
-(void)_doInitialAnimationExitingGroup:(id)arg1 ;
-(void)_fadeInHourglass;
-(void)_doInitialAnimationOfHourglassExitingGroup:(id)arg1 ;
-(void)_fadeInBackdropWithCompletion:(/*^block*/id)arg1 ;
-(void)_fadeInTextAndButtons;
-(void)_fadeOutTextAndButtons;
-(void)_fadeOutHourglass;
-(void)_fadeOutBackdropWithCompletion:(/*^block*/id)arg1 ;
-(void)_setTextAndButtonsAlpha:(double)arg1 ;
-(void)_changeStateToApproved;
-(void)_changeStateToWarn;
-(void)_changeStateToAsk;
-(void)_changeStateToPending;
-(void)_changeStateToDisapproved;
-(void)_changeStateToContactBlocked;
-(void)_startListeningForRestrictionsPINEntryNotification;
-(void)_handleRestrictionsPINNotification:(id)arg1 ;
-(void)_stopListeningForRestrictionsPINEntryNotification;
-(id)initWithWebsiteURL:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 contactsHandles:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 conversationContext:(id)arg2 contactStore:(id)arg3 ;
-(void)setForSnapshot:(BOOL)arg1 ;
-(void)_actionOK:(id)arg1 ;
-(void)_authenticatedApproveForAdditionalTime:(double)arg1 ;
-(void)setOkButtonAlwaysHidden:(BOOL)arg1 ;
-(void)setMainButtonAlwaysHidden:(BOOL)arg1 ;
-(void)setHourglassView:(STHourglassView *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setMainButton:(UIButton *)arg1 ;
-(void)setOkButtonAction:(long long)arg1 ;
-(void)setViewControllerDelegate:(id<STLockoutViewControllerDelegate>)arg1 ;
@end

