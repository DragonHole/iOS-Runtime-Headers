/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class PARSession, NSDate, NSOrderedSet, NSDictionary, SFRankingFeedback;

@interface NTParsecZKWNewsOperation : FCOperation {

	PARSession* _session;
	NSDate* _fetchDate;
	NSOrderedSet* _resultSearchResultIDs;
	NSDictionary* _resultSearchResultsBySearchResultID;
	SFRankingFeedback* _resultRankingFeedback;
	/*^block*/id _newsCompletionHandler;

}

@property (nonatomic,copy) NSDate * fetchDate;                                              //@synthesize fetchDate=_fetchDate - In the implementation block
@property (nonatomic,copy) NSOrderedSet * resultSearchResultIDs;                            //@synthesize resultSearchResultIDs=_resultSearchResultIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * resultSearchResultsBySearchResultID;              //@synthesize resultSearchResultsBySearchResultID=_resultSearchResultsBySearchResultID - In the implementation block
@property (nonatomic,copy) SFRankingFeedback * resultRankingFeedback;                       //@synthesize resultRankingFeedback=_resultRankingFeedback - In the implementation block
@property (nonatomic,retain) PARSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id newsCompletionHandler;                                        //@synthesize newsCompletionHandler=_newsCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSDate *)fetchDate;
-(void)setFetchDate:(NSDate *)arg1 ;
-(SFRankingFeedback *)resultRankingFeedback;
-(NSDictionary *)resultSearchResultsBySearchResultID;
-(NSOrderedSet *)resultSearchResultIDs;
-(void)setNewsCompletionHandler:(id)arg1 ;
-(id)newsCompletionHandler;
-(void)setResultSearchResultIDs:(NSOrderedSet *)arg1 ;
-(void)setResultSearchResultsBySearchResultID:(NSDictionary *)arg1 ;
-(void)setResultRankingFeedback:(SFRankingFeedback *)arg1 ;
-(id)init;
-(PARSession *)session;
-(void)setTimeoutDuration:(double)arg1 ;
-(void)setSession:(PARSession *)arg1 ;
@end

