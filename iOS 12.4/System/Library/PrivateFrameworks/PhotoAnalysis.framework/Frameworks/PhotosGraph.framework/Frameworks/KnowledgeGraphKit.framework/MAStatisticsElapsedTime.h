/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MAStatisticsElapsedTime : NSObject {

	double _elapsedTime;
	double _elapsedStart;
	long long _elapsedCounter;
	double _lastBeginTransactionTime;
	double _lastEndTransactionTime;

}
-(double)elapsedTimeSinceLastBeginTransaction;
-(double)elapsedTimeSinceLastEndTransaction;
-(BOOL)isTransactionPending;
-(id)init;
-(void)dealloc;
-(void)begin;
-(double)elapsedTime;
-(void)end;
@end

