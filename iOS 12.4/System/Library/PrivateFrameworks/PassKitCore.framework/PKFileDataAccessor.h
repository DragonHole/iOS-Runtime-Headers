/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDataAccessor.h>

@protocol OS_dispatch_queue;
@class NSLock, PKRemoteAssetManager, NSObject, NSURL;

@interface PKFileDataAccessor : PKDataAccessor {

	NSLock* _remoteAssetManagerLock;
	BOOL _remoteAssetManagerAccessed;
	PKRemoteAssetManager* _remoteAssetManager;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 processingQueue:(id)arg3 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(id)remoteAssetManager;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)serializedFileWrapper;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)displayProfileOfType:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(BOOL)remoteAssetsDownloaded;
-(id)manifestHash;
-(id)init;
-(id)dictionary;
-(NSURL *)fileURL;
-(id)bundle;
-(id)archiveData;
-(id)content;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
@end

