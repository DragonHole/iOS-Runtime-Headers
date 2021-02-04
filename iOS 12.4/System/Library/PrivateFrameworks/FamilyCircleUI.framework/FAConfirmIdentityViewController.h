/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol FAConfirmIdentityViewControllerDelegate;
@class ACAccount, UIScrollView, UIView, UILabel, UIButton, AAUIProfilePictureStore, UIImage, NSValue, UIImagePickerController, NSString;

@interface FAConfirmIdentityViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate, UINavigationControllerDelegate> {

	ACAccount* _appleAccount;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIView* _profilePhotoView;
	UILabel* _nameLabel;
	UILabel* _emailLabel;
	UIButton* _continueButton;
	UIButton* _useDifferentIDButton;
	AAUIProfilePictureStore* _profilePictureStore;
	UIImage* _newProfilePicture;
	NSValue* _newProfilePictureCropRect;
	UIImagePickerController* _imagePicker;
	id<FAConfirmIdentityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FAConfirmIdentityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)instructions;
-(void)_updateFonts;
-(void)_showImageSourcePicker;
-(void)_presentImagePickerWithSourceType:(long long)arg1 ;
-(id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2 ;
-(BOOL)shouldShowInviteeInstructions;
-(void)_photoWasTapped:(id)arg1 ;
-(void)_addPhotoButtonWasTapped:(id)arg1 ;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
-(void)_useDifferentIDButtonWasTapped:(id)arg1 ;
-(double)_heightForText:(id)arg1 width:(double)arg2 ;
-(void)_showImagePickerForAvailableSources;
-(void)_updateViewsInPhotoArea:(id)arg1 ;
-(void)setDelegate:(id<FAConfirmIdentityViewControllerDelegate>)arg1 ;
-(id<FAConfirmIdentityViewControllerDelegate>)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)pageTitle;
@end
