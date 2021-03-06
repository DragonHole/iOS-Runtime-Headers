/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDSQLiteQueryPlanRow : NSObject {

	long long _selectID;
	long long _order;
	long long _from;
	NSString* _detail;

}

@property (nonatomic,readonly) long long selectID;                  //@synthesize selectID=_selectID - In the implementation block
@property (nonatomic,readonly) long long order;                     //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) long long from;                      //@synthesize from=_from - In the implementation block
@property (nonatomic,copy,readonly) NSString * detail;              //@synthesize detail=_detail - In the implementation block
-(long long)from;
-(id)initWithSelectID:(long long)arg1 order:(long long)arg2 from:(long long)arg3 detail:(id)arg4 ;
-(long long)selectID;
-(id)description;
-(long long)order;
-(NSString *)detail;
@end

