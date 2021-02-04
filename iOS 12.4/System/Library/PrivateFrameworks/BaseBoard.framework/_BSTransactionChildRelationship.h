/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSTransaction;

@interface _BSTransactionChildRelationship : NSObject {

	BSTransaction* _childTransaction;
	unsigned long long _schedulingPolicy;

}

@property (nonatomic,readonly) BSTransaction * childTransaction;                 //@synthesize childTransaction=_childTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long schedulingPolicy;              //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
-(unsigned long long)schedulingPolicy;
-(id)initWithChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2 ;
-(BSTransaction *)childTransaction;
@end
