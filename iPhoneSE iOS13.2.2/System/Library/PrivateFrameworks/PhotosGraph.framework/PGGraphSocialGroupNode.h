/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphSocialGroupNode : PGGraphNode

@property (nonatomic,readonly) unsigned long long rank; 
@property (nonatomic,readonly) unsigned long long numberOfMomentNodes; 
@property (nonatomic,readonly) NSSet * momentNodes; 
@property (nonatomic,readonly) NSSet * personNodes; 
+(id)weightSortDescriptors;
+(id)sortedSocialGroupNodeForMomentNodes:(id)arg1 ;
-(unsigned long long)rank;
-(NSSet *)momentNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)personNodes;
-(unsigned long long)numberOfMomentNodes;
-(void)enumeratePersonNodesUsingBlock:(/*^block*/id)arg1 ;
@end

