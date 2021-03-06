/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController {

	PSSpecifier* _spinner;
	PSSpecifier* _turnOnButton;

}
-(id)specifierList;
-(id)getAccountNameForSpecifier:(id)arg1 ;
-(void)_setupAccountHandlersForDisabledOperation;
-(id)_rightButtonItem;
-(void)_activateSpinner;
-(void)_deactivateSpinner;
-(void)turnOnTapped:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)bundle;
@end

