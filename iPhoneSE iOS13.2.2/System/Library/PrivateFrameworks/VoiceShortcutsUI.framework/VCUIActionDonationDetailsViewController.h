/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VCUIShortcutViewControllerDelegate.h>

@protocol VCActionDonation;
@class UITextView, NSString;

@interface VCUIActionDonationDetailsViewController : UIViewController <VCUIShortcutViewControllerDelegate> {

	id<VCActionDonation> _donation;

}

@property (nonatomic,retain) UITextView * view; 
@property (nonatomic,readonly) id<VCActionDonation> donation;              //@synthesize donation=_donation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)loadView;
-(void)shortcutViewController:(id)arg1 didCreateShortcut:(id)arg2 ;
-(void)shortcutViewControllerDidCancel:(id)arg1 ;
-(id<VCActionDonation>)donation;
-(id)initWithDonation:(id)arg1 ;
-(void)createVoiceShortcut;
@end

