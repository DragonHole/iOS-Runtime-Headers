/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>

@class PSListController, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;

@interface PSUIManualNetworkSelectionSpecifier : PSSpecifier <CoreTelephonyClientRegistrationDelegate> {

	PSListController* _hostController;
	CTXPCServiceSubscriptionContext* _context;
	CoreTelephonyClient* _ctClient;

}

@property (assign,nonatomic,__weak) PSListController * hostController;               //@synthesize hostController=_hostController - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * ctClient;                         //@synthesize ctClient=_ctClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7 ;
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(CoreTelephonyClient *)ctClient;
-(void)setCtClient:(CoreTelephonyClient *)arg1 ;
-(id)currentNetwork:(id)arg1 ;
-(void)lazyLoadBundle;
-(void)networkChanged;
-(id)initWithHostController:(id)arg1 subscriptionContext:(id)arg2 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)networkSelected:(id)arg1 success:(BOOL)arg2 mode:(id)arg3 ;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(CTXPCServiceSubscriptionContext *)context;
-(void)willEnterForeground;
@end
