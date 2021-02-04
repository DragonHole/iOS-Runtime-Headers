/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPStateUIProviderInternal, CDPDSecureBackupDelegate, CDPDSecureBackupProxy;
@class CDPContext, NSDictionary, CDPDSecureBackupConfiguration;

@interface CDPDSecureBackupController : NSObject {

	BOOL _fakeNearlyDepletedRecords;
	CDPContext* _context;
	id<CDPStateUIProviderInternal> _uiProvider;
	id<CDPDSecureBackupDelegate> _delegate;
	NSDictionary* _cachedAccountInfo;
	id<CDPDSecureBackupProxy> _secureBackupProxy;
	CDPDSecureBackupConfiguration* _configuration;

}

@property (nonatomic,retain) NSDictionary * cachedAccountInfo;                           //@synthesize cachedAccountInfo=_cachedAccountInfo - In the implementation block
@property (assign,nonatomic) BOOL fakeNearlyDepletedRecords;                             //@synthesize fakeNearlyDepletedRecords=_fakeNearlyDepletedRecords - In the implementation block
@property (nonatomic,retain) id<CDPDSecureBackupProxy> secureBackupProxy;                //@synthesize secureBackupProxy=_secureBackupProxy - In the implementation block
@property (assign,nonatomic,__weak) id<CDPDSecureBackupDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CDPDSecureBackupConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) CDPContext * context;                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<CDPStateUIProviderInternal> uiProvider;                //@synthesize uiProvider=_uiProvider - In the implementation block
+(id)_sanitizedInfoDictionary:(id)arg1 ;
-(void)clearAccountInfoCache;
-(void)getBackupRecordDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)recoverSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(BOOL)supportsRecoveryKey;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3 ;
-(void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)stashedPRK;
-(void)backupRecordsArePresentWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 proxy:(id)arg2 ;
-(void)disableRecoveryKeyWithCompletion:(/*^block*/id)arg1 ;
-(void)enableSecureBackupWithRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)_accountInfo:(id*)arg1 ;
-(void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)fakeNearlyDepletedRecords;
-(id)_dateWithSecureBackupDateString:(id)arg1 ;
-(void)_enableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteSingleICSCBackupWithCompletion:(/*^block*/id)arg1 ;
-(void)checkForExistingRecord:(/*^block*/id)arg1 ;
-(void)checkForExistingRecordWithPeerId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkForExistingRecordMatchingPredicate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_authenticatedEnableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)authenticatedEnableSecureBackupWithRecoveryKey:(id)arg1 error:(id*)arg2 ;
-(id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)_currentAnisetteData;
-(BOOL)_disableThenEnableWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)_disableSecureBackup:(id*)arg1 ;
-(id)_recoverBackupDictionaryWithContext:(id)arg1 error:(id*)arg2 ;
-(id)_recoveryInfoDictionaryFromContext:(id)arg1 ;
-(void)_deleteAllBackupRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)_deleteSingleICSCBackupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_disableRecoveryKey:(id*)arg1 ;
-(void)synchronizeKeyValueStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)isEligibleForCDPWithCompletion:(/*^block*/id)arg1 ;
-(void)enableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllBackupRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)disableSecureBackupWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)cachedAccountInfo;
-(void)setCachedAccountInfo:(NSDictionary *)arg1 ;
-(void)setFakeNearlyDepletedRecords:(BOOL)arg1 ;
-(id<CDPDSecureBackupProxy>)secureBackupProxy;
-(void)setSecureBackupProxy:(id<CDPDSecureBackupProxy>)arg1 ;
-(void)setDelegate:(id<CDPDSecureBackupDelegate>)arg1 ;
-(id<CDPDSecureBackupDelegate>)delegate;
-(CDPContext *)context;
-(CDPDSecureBackupConfiguration *)configuration;
-(void)setConfiguration:(CDPDSecureBackupConfiguration *)arg1 ;
@end
