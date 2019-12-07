/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedTransformationSort.h>

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort {

	/*^block*/id _sortBlock;

}

@property (nonatomic,copy) id sortBlock;              //@synthesize sortBlock=_sortBlock - In the implementation block
+(id)transformationWithSortBlock:(/*^block*/id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setSortBlock:(id)arg1 ;
-(id)sortBlock;
@end
