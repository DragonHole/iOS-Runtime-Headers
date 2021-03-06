/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVContentKeySessionDelegate.h>

@protocol TVPContentKeyLoading;
@class AVContentKeySession, NSObject, NSArray, NSMutableArray, NSString;

@interface TVPContentKeySession : NSObject <AVContentKeySessionDelegate> {

	BOOL _offlineKeyGenerationIsForRenewal;
	AVContentKeySession* _contentKeySession;
	NSObject*<TVPContentKeyLoading> _contentKeyLoader;
	/*^block*/id _offlineKeyGenerationCompletionHandler;
	NSArray* _offlineKeyIdentifiersInProgress;
	NSMutableArray* _keyRequestsInProgress;

}

@property (nonatomic,retain) AVContentKeySession * contentKeySession;                       //@synthesize contentKeySession=_contentKeySession - In the implementation block
@property (nonatomic,retain) NSObject*<TVPContentKeyLoading> contentKeyLoader;              //@synthesize contentKeyLoader=_contentKeyLoader - In the implementation block
@property (nonatomic,copy) id offlineKeyGenerationCompletionHandler;                        //@synthesize offlineKeyGenerationCompletionHandler=_offlineKeyGenerationCompletionHandler - In the implementation block
@property (nonatomic,retain) NSArray * offlineKeyIdentifiersInProgress;                     //@synthesize offlineKeyIdentifiersInProgress=_offlineKeyIdentifiersInProgress - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyRequestsInProgress;                        //@synthesize keyRequestsInProgress=_keyRequestsInProgress - In the implementation block
@property (assign,nonatomic) BOOL offlineKeyGenerationIsForRenewal;                         //@synthesize offlineKeyGenerationIsForRenewal=_offlineKeyGenerationIsForRenewal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3 ;
-(void)fetchOfflineKeysForParams:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishKeyRequest:(id)arg1 ;
-(void)_generateOfflineKeyRequestsForIdentifiers:(id)arg1 isRenewal:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<TVPContentKeyLoading>)contentKeyLoader;
-(NSArray *)offlineKeyIdentifiersInProgress;
-(void)_loadAVContentKeyRequests:(id)arg1 type:(long long)arg2 isRenewal:(BOOL)arg3 ;
-(BOOL)offlineKeyGenerationIsForRenewal;
-(NSMutableArray *)keyRequestsInProgress;
-(void)_timeoutOfflineKeyRequestGeneration;
-(void)_finishOfflineKeyGeneration;
-(id)offlineKeyGenerationCompletionHandler;
-(void)setOfflineKeyGenerationCompletionHandler:(id)arg1 ;
-(void)setOfflineKeyIdentifiersInProgress:(NSArray *)arg1 ;
-(void)setOfflineKeyGenerationIsForRenewal:(BOOL)arg1 ;
-(void)setContentKeyLoader:(NSObject*<TVPContentKeyLoading>)arg1 ;
-(void)setKeyRequestsInProgress:(NSMutableArray *)arg1 ;
-(id)init;
-(id)initWithContentKeyLoader:(id)arg1 avAsset:(id)arg2 ;
-(void)setContentKeySession:(AVContentKeySession *)arg1 ;
-(AVContentKeySession *)contentKeySession;
-(void)makeSecureInvalidationDataForOfflineKeyData:(id)arg1 nonceData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)generateOfflineKeyRequestsForIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

