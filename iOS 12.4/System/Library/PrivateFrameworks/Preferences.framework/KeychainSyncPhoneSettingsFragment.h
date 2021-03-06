/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KeychainSyncPhoneSettingsFragmentDelegate;
@class NSArray, PSPhoneNumberSpecifier, PSSpecifier, PSListController, NSString, KeychainSyncCountryInfo, PSEditableTableCell;

@interface KeychainSyncPhoneSettingsFragment : NSObject {

	NSArray* _specifiers;
	PSPhoneNumberSpecifier* _phoneNumberSpecifier;
	PSSpecifier* _countrySpecifier;
	PSListController* _listController;
	NSString* _phoneNumber;
	KeychainSyncCountryInfo* _countryInfo;
	id<KeychainSyncPhoneSettingsFragmentDelegate> _delegate;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * specifiers; 
@property (nonatomic,retain) NSString * phoneNumber;                                                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) KeychainSyncCountryInfo * countryInfo;                                      //@synthesize countryInfo=_countryInfo - In the implementation block
@property (nonatomic,readonly) PSEditableTableCell * phoneNumberCell; 
@property (assign,nonatomic,__weak) id<KeychainSyncPhoneSettingsFragmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * title;                                                           //@synthesize title=_title - In the implementation block
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2 ;
-(id)dialingCountryInfoForSpecifier:(id)arg1 ;
-(void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2 ;
-(id)phoneNumberForSpecifier:(id)arg1 ;
-(PSEditableTableCell *)phoneNumberCell;
-(KeychainSyncCountryInfo *)countryInfo;
-(id)initWithListController:(id)arg1 ;
-(void)setCountryInfo:(KeychainSyncCountryInfo *)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(id)unformattedPhoneNumber;
-(NSArray *)specifiers;
-(void)dealloc;
-(void)setDelegate:(id<KeychainSyncPhoneSettingsFragmentDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<KeychainSyncPhoneSettingsFragmentDelegate>)delegate;
-(void)resignFirstResponder;
-(NSString *)phoneNumber;
-(void)reloadSpecifiers;
@end

