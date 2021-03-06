/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardViewController.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/BKOperationDelegate.h>

@protocol OS_dispatch_source;
@class BKPresenceDetectOperation, NSObject, PKPaymentPass, _UIBackdropView, UIButton, PKPass, NSString;

@interface PKDashboardPassViewController : PKDashboardViewController <PKForegroundActiveArbiterObserver, BKOperationDelegate> {

	BOOL _fingerPresent;
	BKPresenceDetectOperation* _fingerDetectionOperation;
	NSObject*<OS_dispatch_source> _fingerTimer;
	BOOL _invalidated;
	SCD_Struct_PK4 _foregroundActiveState;
	unsigned char _visibility;
	BOOL _footerVisible;
	PKPaymentPass* _frontmostPaymentPass;
	_UIBackdropView* _footerBackground;
	CGSize _defaultPasscodeButtonSize;
	UIButton* _passcodeButton;
	PKPass* _frontmostPass;

}

@property (assign,nonatomic,__weak) id<PKDashboardPassViewControllerDelegate><PKDashboardDelegate> delegate; 
@property (nonatomic,retain) PKPass * frontmostPass;                                                                      //@synthesize frontmostPass=_frontmostPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK4)arg2 ;
-(void)_createFooter;
-(void)_visibilityDidChange;
-(void)_updateFingerDetection;
-(void)_updateFooterAnimated:(BOOL)arg1 ;
-(void)_updatePasscodeButtonTitle;
-(void)_passcodeTapped:(id)arg1 ;
-(void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2 ;
-(void)setFrontmostPass:(PKPass *)arg1 ;
-(PKPass *)frontmostPass;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(void)viewSafeAreaInsetsDidChange;
@end

