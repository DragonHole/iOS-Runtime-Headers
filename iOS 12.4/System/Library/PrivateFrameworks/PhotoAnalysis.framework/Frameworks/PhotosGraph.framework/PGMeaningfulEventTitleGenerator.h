/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class PGGraphMeaningEdge;

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator {

	PGGraphMeaningEdge* _meaningEdge;

}

@property (nonatomic,retain) PGGraphMeaningEdge * meaningEdge;              //@synthesize meaningEdge=_meaningEdge - In the implementation block
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)_meaningLabelForTitle;
-(id)initWithCollection:(id)arg1 meaningEdge:(id)arg2 ;
-(id)_timeTitle;
-(PGGraphMeaningEdge *)meaningEdge;
-(void)setMeaningEdge:(PGGraphMeaningEdge *)arg1 ;
-(id)_title;
@end
