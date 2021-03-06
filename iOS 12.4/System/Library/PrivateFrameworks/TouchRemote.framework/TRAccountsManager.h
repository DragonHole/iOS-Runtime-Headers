/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, NSString, SSAccount, ACAccount, GKLocalPlayer;

@interface TRAccountsManager : NSObject {

	ACAccountStore* _iCloudAccountStore;

}

@property (nonatomic,retain) ACAccountStore * iCloudAccountStore;                  //@synthesize iCloudAccountStore=_iCloudAccountStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,readonly) SSAccount * activeiTunesStoreAccount; 
@property (nonatomic,readonly) ACAccount * activeiCloudAccount; 
@property (nonatomic,copy,readonly) NSString * homeSharingAppleID; 
@property (nonatomic,copy,readonly) NSString * homeSharingGroupID; 
@property (nonatomic,readonly) GKLocalPlayer * localGameCenterPlayer; 
+(id)sharedInstance;
-(NSString *)homeSharingGroupID;
-(ACAccountStore *)iCloudAccountStore;
-(SSAccount *)activeiTunesStoreAccount;
-(ACAccount *)activeiCloudAccount;
-(NSString *)homeSharingAppleID;
-(GKLocalPlayer *)localGameCenterPlayer;
-(id)defaultAccountIDForAuthenticationAccountType:(unsigned long long)arg1 ;
-(id)accountTypesWithDefaultAccountID:(id)arg1 ;
-(void)setICloudAccountStore:(ACAccountStore *)arg1 ;
-(NSString *)deviceName;
@end

