/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSProcessExecutionProvision.h>

@protocol OS_dispatch_queue;
@class NSObject, BSTimer, BSMachPortSendRight;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {

	SCD_Struct_FB4 _allowance;
	unsigned long long _baselineValue;
	unsigned long long _consumedValue;
	NSObject*<OS_dispatch_queue> _queue;
	BSTimer* _timer;
	BSMachPortSendRight* _taskRight;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) SCD_Struct_FB4 allowance;              //@synthesize allowance=_allowance - In the implementation block
+(id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2 ;
+(id)provisionWithAllowance:(SCD_Struct_FB4)arg1 ;
-(void)_beginMonitoring;
-(id)initWithAllowance:(SCD_Struct_FB4)arg1 ;
-(BOOL)_queue_updateConsumption;
-(double)_getElapsedCPUTimeForTaskPort:(unsigned)arg1 ;
-(void)_queue_noteAllowanceExhausted;
-(void)_queue_stopMonitoring;
-(void)_queue_evaluateConsumption;
-(BOOL)_queue_calculateValueConsumed:(out unsigned long long*)arg1 ;
-(void)_stopMonitoring;
-(void)_updateProgress;
-(void)_prepareForReuse;
-(BOOL)isResourceProvision;
-(BOOL)allowanceRemaining:(out SCD_Struct_FB4*)arg1 ;
-(SCD_Struct_FB4)allowance;
-(void)setAllowance:(SCD_Struct_FB4)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
@end

