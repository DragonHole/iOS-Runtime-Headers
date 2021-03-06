/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MetalTools/MetalTools-Structs.h>
@class MTLToolsPointerArray, MTLToolsDevice;

@interface MTLToolsObject : NSObject {

	MTLToolsObject* _parent;
	MTLToolsPointerArray* _tracker;
	MTLToolsObject* _baseObject;
	MTLToolsDevice* _device;
	ILayerLockingPolicy* _lockingPolicy;

}

@property (assign,nonatomic) ILayerLockingPolicy* lockingPolicy;              //@synthesize lockingPolicy=_lockingPolicy - In the implementation block
@property (assign,nonatomic) MTLToolsPointerArray * tracker;                  //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,retain) id baseObject;                                   //@synthesize baseObject=_baseObject - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device; 
+(id)dispatchQueue;
+(void)visitObjects:(id)arg1 withVisitor:(id)arg2 ;
-(id)baseObject;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)originalObject;
-(id<MTLDevice>)device;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)tracker;
-(void)setTracker:(MTLToolsPointerArray *)arg1 ;
-(ILayerLockingPolicy*)lockingPolicy;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(ILayerLockingPolicy*)arg3 ;
-(void)setLockingPolicy:(ILayerLockingPolicy*)arg1 ;
-(id)baseObjectWithClass:(Class)arg1 ;
-(void)setOriginalObject:(id)arg1 ;
-(id)strongParent;
-(void)setBaseObject:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)parent;
@end

