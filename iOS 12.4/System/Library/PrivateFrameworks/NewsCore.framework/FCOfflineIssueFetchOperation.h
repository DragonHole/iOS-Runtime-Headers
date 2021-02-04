/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCFlintHelper;
@class NSString;

@interface FCOfflineIssueFetchOperation : FCOperation {

	BOOL _cachedOnly;
	double _progress;
	/*^block*/id _progressHandler;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	id<FCFlintHelper> _flintHelper;
	NSString* _issueID;
	id _resultHoldToken;

}

@property (assign) double progress;                                      //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFlintHelper> flintHelper;              //@synthesize flintHelper=_flintHelper - In the implementation block
@property (nonatomic,copy) NSString * issueID;                           //@synthesize issueID=_issueID - In the implementation block
@property (nonatomic,retain) id resultHoldToken;                         //@synthesize resultHoldToken=_resultHoldToken - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                            //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) id progressHandler;                           //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                    //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)progressHandler;
-(NSString *)issueID;
-(void)setIssueID:(NSString *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)cachedOnly;
-(void)setCachedOnly:(BOOL)arg1 ;
-(id<FCFlintHelper>)flintHelper;
-(void)setFlintHelper:(id<FCFlintHelper>)arg1 ;
-(void)setResultHoldToken:(id)arg1 ;
-(id)resultHoldToken;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 issueID:(id)arg3 ;
-(id)_promiseIssue;
-(id)_promiseMetadataForIssue:(id)arg1 ;
-(id)_promiseCoverImageForIssue:(id)arg1 ;
-(id)_promiseANFArticlesForIssue:(id)arg1 ;
-(id)_promisePDFPagesForIssue:(id)arg1 ;
-(void)_updateProgress:(double)arg1 ;
-(id)_resourceIDsFromMetadataJSONData:(id)arg1 ;
-(id)_pdfArchiveURLForIssue:(id)arg1 ;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 issue:(id)arg3 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id)fetchCompletionHandler;
-(id)init;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)context;
-(void)setProgress:(double)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(double)progress;
@end
