/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore;

@interface REMAppleAccountUtilities : NSObject {

	BOOL _primaryICloudACAccountIsValid;
	ACAccount* _primaryICloudACAccount;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                   //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) BOOL primaryICloudACAccountIsValid;              //@synthesize primaryICloudACAccountIsValid=_primaryICloudACAccountIsValid - In the implementation block
@property (readonly) ACAccount * primaryICloudACAccount;                      //@synthesize primaryICloudACAccount=_primaryICloudACAccount - In the implementation block
@property (readonly) BOOL primaryICloudAccountEnabled; 
+(id)sharedInstance;
+(id)getAppleIDSession;
+(id)accountDescriptionWithACAccount:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)accessQueue;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(id)initForObservingAccountStoreChanges:(BOOL)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(BOOL)primaryICloudACAccountIsValid;
-(void)setPrimaryICloudACAccountIsValid:(BOOL)arg1 ;
-(void)internalInvalidatePrimaryICloudACAccount;
-(ACAccount *)primaryICloudACAccount;
-(id)allICloudAccountsWithCloudKitEnabled;
-(void)invalidatePrimaryICloudACAccount;
-(void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 toACAccount:(id)arg3 inStore:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)primaryICloudAccountEnabled;
-(id)primaryICloudAccountCalDavService;
@end
