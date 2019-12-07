/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VNMPClusteringTreeNodeWrapper : NSObject {

	BOOL _freeNodeOnDealloc;
	void* _node;

}

@property (assign) void* node;                          //@synthesize node=_node - In the implementation block
@property (assign) BOOL freeNodeOnDealloc;              //@synthesize freeNodeOnDealloc=_freeNodeOnDealloc - In the implementation block
-(void)dealloc;
-(id)left;
-(void*)node;
-(id)descriptor;
-(void)setNode:(void*)arg1 ;
-(float)distance;
-(id)initWithNode:(void*)arg1 freeNodeOnDealloc:(BOOL)arg2 ;
-(int)nodeId;
-(id)right;
-(float)avgDistance;
-(int)leafsCount;
-(id)getLeafNodes;
-(BOOL)freeNodeOnDealloc;
-(void)setFreeNodeOnDealloc:(BOOL)arg1 ;
@end
