/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface _DECScheduler : NSObject {

	NSObject*<OS_xpc_object> _executionCriteria;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
-(id)initWithActivityIdentifier:(id)arg1 andExecutionCriteria:(id)arg2 ;
-(void)forceRun;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

