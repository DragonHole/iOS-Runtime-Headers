/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CRKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/CRKUserTableViewCellDelegate.h>

@protocol CRKUserEditorTableViewControllerDelegate;
@class CRKUser, NSString;

@interface CRKUserEditorTableViewController : UITableViewController <CRKSwitchTableViewCellDelegate, CRKUserTableViewCellDelegate> {

	CRKUser* mMeCardUser;
	BOOL mUseMeCardUser;
	long long mNumberOfSections;
	long long mMeCardSwitchCellSection;
	long long mUserCellSection;
	BOOL _showPhoneticName;
	BOOL _showFamilyNameFirst;
	id<CRKUserEditorTableViewControllerDelegate> _delegate;
	CRKUser* _user;

}

@property (assign,nonatomic,__weak) id<CRKUserEditorTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CRKUser * user;                                                            //@synthesize user=_user - In the implementation block
@property (assign,getter=shouldShowPhoneticName,nonatomic) BOOL showPhoneticName;                       //@synthesize showPhoneticName=_showPhoneticName - In the implementation block
@property (assign,getter=shouldShowFamilyNameFirst,nonatomic) BOOL showFamilyNameFirst;                 //@synthesize showFamilyNameFirst=_showFamilyNameFirst - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)switchCellValueDidChange:(id)arg1 ;
-(void)updateTableView;
-(void)editorTextFieldDidChange:(id)arg1 ;
-(BOOL)shouldShowPhoneticName;
-(BOOL)shouldShowFamilyNameFirst;
-(void)setShowFamilyNameFirst:(BOOL)arg1 ;
-(void)userTableViewCellDidEditUser:(id)arg1 ;
-(void)setShowPhoneticName:(BOOL)arg1 ;
-(CRKUser *)user;
-(void)setUser:(CRKUser *)arg1 ;
-(id)init;
-(void)setDelegate:(id<CRKUserEditorTableViewControllerDelegate>)arg1 ;
-(id<CRKUserEditorTableViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

