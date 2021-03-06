/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FCNetworkBehaviorMonitor;

@interface FCCKContentDatabase : NSObject {

	BOOL _isProductionEnvironment;
	BOOL _shouldUseCloudd;
	BOOL _shouldUseSecureConnectionForCKAssetURLs;
	BOOL _shouldBypassCDNForCKAssetURLs;
	NSString* _containerIdentifier;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;

}

@property (nonatomic,copy,readonly) NSString * containerIdentifier;                            //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isProductionEnvironment;                                   //@synthesize isProductionEnvironment=_isProductionEnvironment - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseCloudd;                                           //@synthesize shouldUseCloudd=_shouldUseCloudd - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSecureConnectionForCKAssetURLs;                     //@synthesize shouldUseSecureConnectionForCKAssetURLs=_shouldUseSecureConnectionForCKAssetURLs - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassCDNForCKAssetURLs;                               //@synthesize shouldBypassCDNForCKAssetURLs=_shouldBypassCDNForCKAssetURLs - In the implementation block
-(id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(BOOL)arg2 networkBehaviorMonitor:(id)arg3 ;
-(BOOL)shouldUseSecureConnectionForCKAssetURLs;
-(id)initWithContextConfiguration:(id)arg1 networkBehaviorMonitor:(id)arg2 ;
-(BOOL)shouldBypassCDNForCKAssetURLs;
-(id)permanentURLForRecordID:(id)arg1 field:(long long)arg2 useSecureConnection:(BOOL)arg3 ;
-(BOOL)isProductionEnvironment;
-(BOOL)shouldUseCloudd;
-(void)setShouldUseSecureConnectionForCKAssetURLs:(BOOL)arg1 ;
-(void)setShouldBypassCDNForCKAssetURLs:(BOOL)arg1 ;
-(NSString *)containerIdentifier;
-(id)init;
-(void)addOperation:(id)arg1 ;
@end

