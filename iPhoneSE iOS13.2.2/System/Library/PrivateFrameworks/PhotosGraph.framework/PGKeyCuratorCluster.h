/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSInvestigationItem;
@class NSArray;

@interface PGKeyCuratorCluster : NSObject {

	NSArray* _subclusters;
	id<CLSInvestigationItem> _keyItem;
	double _score;

}

@property (readonly) NSArray * subclusters;                         //@synthesize subclusters=_subclusters - In the implementation block
@property (readonly) id<CLSInvestigationItem> keyItem;              //@synthesize keyItem=_keyItem - In the implementation block
@property (readonly) double score;                                  //@synthesize score=_score - In the implementation block
-(double)score;
-(id<CLSInvestigationItem>)keyItem;
-(NSArray *)subclusters;
-(id)initWithSubclusters:(id)arg1 keyItem:(id)arg2 score:(double)arg3 ;
@end

