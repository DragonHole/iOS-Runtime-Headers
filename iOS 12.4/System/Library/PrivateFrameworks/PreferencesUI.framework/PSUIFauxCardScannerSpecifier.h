/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanManager, PSListController;

@interface PSUIFauxCardScannerSpecifier : PSSpecifier {

	CTCellularPlanManager* _planManager;
	PSListController* _hostController;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(BOOL)arg2 planManager:(id)arg3 ;
-(void)fauxCardScannerCellPressed:(id)arg1 ;
@end
