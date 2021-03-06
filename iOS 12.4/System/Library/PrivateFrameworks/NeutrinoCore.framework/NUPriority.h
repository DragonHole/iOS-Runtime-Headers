/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NUPriority : NSObject {

	long long _level;
	double _order;

}

@property (nonatomic,readonly) long long level;              //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) double order;                 //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) BOOL isHigh; 
@property (nonatomic,readonly) BOOL isLow; 
-(id)initWithLevel:(long long)arg1 ;
-(id)initWithLevel:(long long)arg1 order:(double)arg2 ;
-(BOOL)isEqualToPriority:(id)arg1 ;
-(BOOL)isHigh;
-(BOOL)isLow;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(long long)level;
-(double)order;
@end

