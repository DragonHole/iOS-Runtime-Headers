/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGCurationTrait.h>

@interface PGCurationContentOrAestheticScoreTrait : PGCurationTrait {

	double _minimumAestheticScore;

}

@property (assign,nonatomic) double minimumAestheticScore;              //@synthesize minimumAestheticScore=_minimumAestheticScore - In the implementation block
-(BOOL)isActive;
-(id)initWithMinimumContentScore:(double)arg1 minimumAestheticScore:(double)arg2 ;
-(double)minimumAestheticScore;
-(void)setMinimumAestheticScore:(double)arg1 ;
@end

