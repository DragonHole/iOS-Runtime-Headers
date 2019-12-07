/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol SLFacebookLoginInfoViewControllerDelegate;
@class SLFacebookLoginInfoFooter;

@interface SLFacebookLoginInfoViewController : UITableViewController {

	SLFacebookLoginInfoFooter* _footerView;
	id<SLFacebookLoginInfoViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookLoginInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SLFacebookLoginInfoViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SLFacebookLoginInfoViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_cancelTapped:(id)arg1 ;
-(void)_signInTapped:(id)arg1 ;
@end
