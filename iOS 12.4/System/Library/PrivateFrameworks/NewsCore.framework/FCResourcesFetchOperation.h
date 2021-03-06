/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCContentContext;
@class NSArray;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation {

	BOOL _downloadAssets;
	long long _cacheLifetimeHint;
	/*^block*/id _progressHandler;
	id<FCContentContext> _context;
	NSArray* _resourceIDs;
	NSArray* _resources;

}

@property (nonatomic,retain) id<FCContentContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * resourceIDs;                   //@synthesize resourceIDs=_resourceIDs - In the implementation block
@property (nonatomic,readonly) BOOL downloadAssets;                     //@synthesize downloadAssets=_downloadAssets - In the implementation block
@property (nonatomic,retain) NSArray * resources;                       //@synthesize resources=_resources - In the implementation block
@property (assign,nonatomic) long long cacheLifetimeHint;               //@synthesize cacheLifetimeHint=_cacheLifetimeHint - In the implementation block
@property (nonatomic,copy) id progressHandler;                          //@synthesize progressHandler=_progressHandler - In the implementation block
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(id)progressHandler;
-(BOOL)validateOperation;
-(long long)cacheLifetimeHint;
-(void)setCacheLifetimeHint:(long long)arg1 ;
-(id)initWithContext:(id)arg1 resourceIDs:(id)arg2 downloadAssets:(BOOL)arg3 ;
-(id)completeFetchOperation;
-(id)fetchResourcesWithCompletion:(/*^block*/id)arg1 ;
-(id)downloadAssetsWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)resourceIDs;
-(BOOL)_shoudUsePermanentURLForResourceID:(id)arg1 ;
-(BOOL)downloadAssets;
-(id)init;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)context;
-(void)setProgressHandler:(id)arg1 ;
@end

