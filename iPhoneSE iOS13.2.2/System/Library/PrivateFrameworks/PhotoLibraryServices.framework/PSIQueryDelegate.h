/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PSITokenizer;


@protocol PSIQueryDelegate <PSIGroupResultDelegate,PSITopAssetsResultDelegate>
@property (readonly) PSITokenizer * tokenizer; 
@property (readonly) NSObject*<OS_dispatch_queue> groupResultsQueue; 
@required
-(PSITokenizer *)tokenizer;
-(id)suggestionWhitelistedScenes;
-(void)executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2;
-(const CFSetRef)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3;
-(id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
-(id)groupResultWithDateFilter:(id)arg1 datedTokens:(id)arg2;
-(id)wordEmbeddingMatchesForToken:(id)arg1;
-(id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3;
-(id)meNodeIdentifier;
-(NSObject*<OS_dispatch_queue>)groupResultsQueue;

@end
