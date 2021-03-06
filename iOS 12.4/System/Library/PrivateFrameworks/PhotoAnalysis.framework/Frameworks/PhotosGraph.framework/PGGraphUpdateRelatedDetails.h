/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface PGGraphUpdateRelatedDetails : NSObject {

	NSMutableSet* _accumulatedMomentNodesRelatedToUpdatedPersons;
	NSMutableSet* _accumulatedMomentNodesRelatedToDeletedPersons;

}

@property (nonatomic,retain) NSMutableSet * accumulatedMomentNodesRelatedToUpdatedPersons;              //@synthesize accumulatedMomentNodesRelatedToUpdatedPersons=_accumulatedMomentNodesRelatedToUpdatedPersons - In the implementation block
@property (nonatomic,retain) NSMutableSet * accumulatedMomentNodesRelatedToDeletedPersons;              //@synthesize accumulatedMomentNodesRelatedToDeletedPersons=_accumulatedMomentNodesRelatedToDeletedPersons - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodesRelatedToUpdatedPersons; 
@property (nonatomic,readonly) NSSet * momentNodesRelatedToDeletedPersons; 
-(void)accumulateDetailsForDeletedPersonNodes:(id)arg1 ;
-(void)accumulateDetailsForUpdatedPersonNode:(id)arg1 personChange:(id)arg2 ;
-(id)_momentNodesFromPersonNodes:(id)arg1 ;
-(NSMutableSet *)accumulatedMomentNodesRelatedToUpdatedPersons;
-(NSMutableSet *)accumulatedMomentNodesRelatedToDeletedPersons;
-(NSSet *)momentNodesRelatedToUpdatedPersons;
-(NSSet *)momentNodesRelatedToDeletedPersons;
-(void)setAccumulatedMomentNodesRelatedToUpdatedPersons:(NSMutableSet *)arg1 ;
-(void)setAccumulatedMomentNodesRelatedToDeletedPersons:(NSMutableSet *)arg1 ;
-(id)init;
@end

