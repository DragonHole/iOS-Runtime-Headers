/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <libobjc.A.dylib/AAUIAccountManagerDelegate.h>

@protocol FADigitalHealthSpecifierProviderDelegate;
@class AAFamilyEligibilityResponse, NSError, FAFamilyEligibilityRequester, NSArray, PSListController, NSString;

@interface FADigitalHealthSpecifierProvider : NSObject <AAUIAccountManagerDelegate> {

	AAFamilyEligibilityResponse* _response;
	long long _status;
	NSError* _eligibilityError;
	FAFamilyEligibilityRequester* _eligibilityRequester;
	NSArray* _specifiers;
	id<FADigitalHealthSpecifierProviderDelegate> _delegate;
	PSListController* _presenter;

}

@property (assign,nonatomic,__weak) id<FADigitalHealthSpecifierProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) PSListController * presenter;                                       //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary*)accountsForAccountManager:(id)arg1 ;
-(id)specifiers;
-(id)_eligibilitySpecifier;
-(void)_setUpFamilySpecifierWasTapped:(id)arg1 ;
-(void)_initiateFamily:(id)arg1 withClientName:(id)arg2 ;
-(void)_reloadSpecifiers;
-(void)_handleEligibilityResponse:(id)arg1 error:(id)arg2 ;
-(PSListController *)presenter;
-(void)setPresenter:(PSListController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<FADigitalHealthSpecifierProviderDelegate>)arg1 ;
-(id<FADigitalHealthSpecifierProviderDelegate>)delegate;
-(void)reloadSpecifiers;
@end

