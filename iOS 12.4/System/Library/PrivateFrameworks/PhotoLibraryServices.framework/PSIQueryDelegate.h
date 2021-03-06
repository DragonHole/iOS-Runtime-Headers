/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PSITokenizer;


@protocol PSIQueryDelegate <PSIGroupResultDelegate,PSITopAssetsResultDelegate>
@property (readonly) PSITokenizer * tokenizer; 
@property (readonly) NSObject*<OS_dispatch_queue> groupResultsQueue; 
@required
-(void)executeQuery:(id)arg1 resultsHandler:(/*^block*/id)arg2;
-(const CFSetRef)groupIdsMatchingString:(id)arg1 categories:(id)arg2 textIsSearchable:(BOOL)arg3;
-(id)wordEmbeddingMatchesForToken:(id)arg1;
-(id)groupResultWithDateFilter:(id)arg1;
-(id)groupArraysFromGroupIdSets:(id)arg1 dateFilter:(id)arg2 progressBlock:(/*^block*/id)arg3;
-(NSObject*<OS_dispatch_queue>)groupResultsQueue;
-(id)suggestionWhitelistedScenes;
-(id)meNodeIdentifier;
-(id)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(id)arg2;
-(PSITokenizer *)tokenizer;

@end

