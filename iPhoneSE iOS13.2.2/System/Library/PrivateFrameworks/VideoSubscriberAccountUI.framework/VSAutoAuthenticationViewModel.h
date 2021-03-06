/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@protocol VSAutoAuthenticationViewModelDelegate;
@class NSString;

@interface VSAutoAuthenticationViewModel : VSCuratedViewModel {

	id<VSAutoAuthenticationViewModelDelegate> _delegate;
	NSString* _messageTitle;
	NSString* _accountName;
	NSString* _manualSignInTitle;
	NSString* _manualSignInButtonText;

}

@property (assign,nonatomic,__weak) id<VSAutoAuthenticationViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * messageTitle;                                                  //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,copy) NSString * accountName;                                                   //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * manualSignInTitle;                                             //@synthesize manualSignInTitle=_manualSignInTitle - In the implementation block
@property (nonatomic,copy) NSString * manualSignInButtonText;                                        //@synthesize manualSignInButtonText=_manualSignInButtonText - In the implementation block
-(id)init;
-(id<VSAutoAuthenticationViewModelDelegate>)delegate;
-(void)setDelegate:(id<VSAutoAuthenticationViewModelDelegate>)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(void)setMessageTitle:(NSString *)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(void)setManualSignInTitle:(NSString *)arg1 ;
-(void)setManualSignInButtonText:(NSString *)arg1 ;
-(void)didSelectManualSignInButton;
-(NSString *)manualSignInTitle;
-(NSString *)manualSignInButtonText;
@end

