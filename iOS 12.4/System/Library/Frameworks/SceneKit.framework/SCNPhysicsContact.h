/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNPhysicsContact : NSObject {

	SCNNode* _nodeA;
	SCNNode* _nodeB;
	SCNVector3 _contactPoint;
	SCNVector3 _contactNormal;
	double _collisionImpulse;
	double _distance;
	double _fraction;
	long long _updateCount;

}

@property (nonatomic,readonly) SCNNode * nodeA; 
@property (nonatomic,readonly) SCNNode * nodeB; 
@property (nonatomic,readonly) SCNVector3 contactPoint; 
@property (nonatomic,readonly) SCNVector3 contactNormal; 
@property (nonatomic,readonly) double collisionImpulse; 
@property (nonatomic,readonly) double penetrationDistance; 
@property (nonatomic,readonly) double sweepTestFraction; 
+(id)_contactWithManifold:(const btPersistentManifold*)arg1 index:(long long)arg2 ;
-(void)_setupWithManifold:(const btPersistentManifold*)arg1 index:(long long)arg2 point:(const btManifoldPoint*)arg3 ;
-(void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(SCNVector3)arg3 collisionImpulse:(SCNVector3)arg4 distance:(double)arg5 hitFraction:(double)arg6 ;
-(void)_fillNodeA:(id)arg1 nodeB:(id)arg2 ;
-(SCNNode *)nodeA;
-(SCNNode *)nodeB;
-(SCNVector3)contactNormal;
-(double)collisionImpulse;
-(double)penetrationDistance;
-(double)sweepTestFraction;
-(void)_prepareUpdate;
-(BOOL)_shouldPostUpdate;
-(void)dealloc;
-(id)description;
-(SCNVector3)contactPoint;
@end

