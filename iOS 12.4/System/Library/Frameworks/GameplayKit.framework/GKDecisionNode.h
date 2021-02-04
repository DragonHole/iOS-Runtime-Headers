/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@class GKDecisionTree;

@interface GKDecisionNode : NSObject {

	GKCDecisionNode* _node;
	GKDecisionTree* _tree;

}
-(id)branches;
-(void)setAttribute:(id)arg1 ;
-(id)initWithNode:(GKCDecisionNode*)arg1 tree:(id)arg2 ;
-(id)createChildWithAttribute:(id)arg1 randomSource:(id)arg2 withBranch:(id)arg3 ;
-(id)createBranchWithValue:(id)arg1 attribute:(id)arg2 ;
-(id)createBranchWithPredicate:(id)arg1 attribute:(id)arg2 ;
-(id)createBranchWithWeight:(long long)arg1 attribute:(id)arg2 ;
-(id)getNodeAtBranch:(id)arg1 ;
-(id)attribute;
-(void)dealloc;
-(id)description;
@end
