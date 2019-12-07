/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AppStoreKit.AccountPresenter : _UKNOWN_SUPERCLASS_ {

	 appStateController;
	 restrictions;
	 storeAccountStore;
	 iCloudAccountStore;
	 iapStateProvider;
	 updatesPresenter;
	 activeStoreAccount;
	 hasManagedAppleID;
	 hasSubscriptions;
	 profilePictureDiameter;
	 view;
	 profilePicture;
	 authenticating;
	 accountNameInputValue;
	 passwordInputValue;
	 iForgotUrl;
	 isMonetaryGiftingEnabled;
	??? accountTopUpURL;
	 hasPrimaryiCloudAccount;
	??? updateAllIndexPath;
	 sections;

}
-(void)restrictionsDidChange:(id)arg1 ;
-(void)profilePictureStoreDidChange;
-(void)storeAccountsDidChange;
-(void)iCloudAccountsDidChange;
@end
