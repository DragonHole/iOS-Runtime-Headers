/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol MCUIInfoListDelegate;
@class NSArray, NSString;

@interface MCUIInfoListController : PSListController {

	id<MCUIInfoListDelegate> _delegate;
	NSArray* _info;
	NSString* _navTitle;
	NSString* _continueButtonTitle;

}

@property (nonatomic,copy) NSArray * info;                                          //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSString * navTitle;                                   //@synthesize navTitle=_navTitle - In the implementation block
@property (assign,nonatomic,__weak) id<MCUIInfoListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * continueButtonTitle;                        //@synthesize continueButtonTitle=_continueButtonTitle - In the implementation block
-(NSString *)navTitle;
-(void)setNavTitle:(NSString *)arg1 ;
-(void)setContinueButtonTitle:(NSString *)arg1 ;
-(NSString *)continueButtonTitle;
-(id)specifiers;
-(void)_tellDelegateWeWantToContinue:(BOOL)arg1 ;
-(void)_installButtonClicked;
-(void)_cancelButtonClicked;
-(void)_setupNavBar:(BOOL)arg1 ;
-(void)setDelegate:(id<MCUIInfoListDelegate>)arg1 ;
-(id<MCUIInfoListDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)info;
-(void)setInfo:(NSArray *)arg1 ;
@end

