/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheCreateShareGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheShareGroup* _record;
	/*^block*/id _creationBlock;

}

@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) id creationBlock;                                       //@synthesize creationBlock=_creationBlock - In the implementation block
-(HMDBackingStoreCacheShareGroup *)record;
-(void)setRecord:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 targetOwner:(id)arg2 rootRecord:(id)arg3 creationBlock:(/*^block*/id)arg4 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)creationBlock;
@end

