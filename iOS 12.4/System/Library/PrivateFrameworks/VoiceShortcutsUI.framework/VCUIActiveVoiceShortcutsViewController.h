/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/VCUIGalleryViewControllerDelegate.h>
#import <libobjc.A.dylib/VCUIEditVoiceShortcutViewControllerDelegate.h>
#import <libobjc.A.dylib/VCUIDebugWorkflowViewControllerDelegate.h>

@class VCVoiceShortcutClient, UISearchController, NSArray, VCUIVoiceShortcutCell, NSString;

@interface VCUIActiveVoiceShortcutsViewController : UITableViewController <VCUIGalleryViewControllerDelegate, VCUIEditVoiceShortcutViewControllerDelegate, VCUIDebugWorkflowViewControllerDelegate> {

	VCVoiceShortcutClient* _voiceShortcutClient;
	UISearchController* _searchController;
	NSArray* _voiceShortcuts;
	VCUIVoiceShortcutCell* _prototypeCell;

}

@property (nonatomic,retain) UISearchController * searchController;                      //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) NSArray * voiceShortcuts;                                   //@synthesize voiceShortcuts=_voiceShortcuts - In the implementation block
@property (nonatomic,retain) VCUIVoiceShortcutCell * prototypeCell;                      //@synthesize prototypeCell=_prototypeCell - In the implementation block
@property (nonatomic,readonly) VCVoiceShortcutClient * voiceShortcutClient;              //@synthesize voiceShortcutClient=_voiceShortcutClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(VCVoiceShortcutClient *)voiceShortcutClient;
-(void)viewDidLoad;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)editVoiceShortcutViewControllerDidCancel:(id)arg1 ;
-(void)editVoiceShortcutViewController:(id)arg1 didSaveWithUpdatedVoiceShortcut:(id)arg2 ;
-(void)editVoiceShortcutViewController:(id)arg1 didDeleteVoiceShortcut:(id)arg2 ;
-(void)debugWorkflowViewControllerDidFinish:(id)arg1 ;
-(id)initWithVoiceShortcutClient:(id)arg1 ;
-(void)didTapCancel;
-(VCUIVoiceShortcutCell *)prototypeCell;
-(void)galleryViewControllerDidFinish:(id)arg1 ;
-(void)setPrototypeCell:(VCUIVoiceShortcutCell *)arg1 ;
-(void)reloadVoiceShortcuts;
-(void)setVoiceShortcuts:(NSArray *)arg1 ;
-(void)createNewShortcut;
-(NSArray *)voiceShortcuts;
-(void)launchExtensionToRunVoiceShortcut:(id)arg1 ;
-(void)showHandleIntentResponse:(id)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 message:(id)arg2 confirmationHandler:(/*^block*/id)arg3 ;
-(void)galleryViewControllerDidCancel:(id)arg1 ;
@end
