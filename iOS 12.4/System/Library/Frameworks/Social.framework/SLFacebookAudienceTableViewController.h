/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SLFacebookAudienceViewController.h>

@protocol SLFacebookAudienceViewControllerDelegate;
@class NSArray, SLFacebookPostPrivacySetting, UINavigationItem;

@interface SLFacebookAudienceTableViewController : UITableViewController <SLFacebookAudienceViewController> {

	NSArray* _privacySettings;
	SLFacebookPostPrivacySetting* _selectedSetting;
	id<SLFacebookAudienceViewControllerDelegate> _selectionDelegate;
	UINavigationItem* _navigationItem;

}
-(id)_privacySettingForIndexPath:(id)arg1 ;
-(void)setPrivacySettings:(id)arg1 ;
-(void)setCurrentPrivacySetting:(id)arg1 ;
-(void)setSelectionDelegate:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
@end

