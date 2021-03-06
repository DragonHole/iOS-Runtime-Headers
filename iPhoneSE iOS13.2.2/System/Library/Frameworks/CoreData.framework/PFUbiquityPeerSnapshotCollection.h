/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface PFUbiquityPeerSnapshotCollection : NSObject {

	NSMutableDictionary* _peerIDToTransactionNumberToSnapshot;
	NSMutableDictionary* _peerIDToTranasctionNumberToKnowledgeVector;
	NSMutableDictionary* _kvToSnapshot;
	NSMutableArray* _peerSnapshots;
	BOOL _needSort;

}
-(id)init;
-(void)dealloc;
-(void)addSnapshot:(id)arg1 ;
-(id)allPeerIDs;
-(BOOL)calculateSnapshotDiffsWithError:(id*)arg1 ;
-(id)snapshotForKnowledgeVector:(id)arg1 ;
-(id)snapshotForPeerID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(id)knowledgeVectorsForTransactionNumber:(id)arg1 exportedByPeerWithID:(id)arg2 ;
@end

