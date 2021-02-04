/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FCCurrentIssuesCheckerResult;

@interface FCCurrentIssuesPromiseChainingData : NSObject {

	NSArray* _resultingIssues;
	FCCurrentIssuesCheckerResult* _partialResult;

}

@property (nonatomic,retain) NSArray * resultingIssues;                                 //@synthesize resultingIssues=_resultingIssues - In the implementation block
@property (nonatomic,retain) FCCurrentIssuesCheckerResult * partialResult;              //@synthesize partialResult=_partialResult - In the implementation block
-(void)setPartialResult:(FCCurrentIssuesCheckerResult *)arg1 ;
-(NSArray *)resultingIssues;
-(FCCurrentIssuesCheckerResult *)partialResult;
-(void)setResultingIssues:(NSArray *)arg1 ;
@end
