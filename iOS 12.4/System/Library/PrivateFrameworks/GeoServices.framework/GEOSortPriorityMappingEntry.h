/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOSortPriorityMappingEntry : NSObject {

	long long _priority;
	long long _resultType;
	long long _resultSubtype;

}

@property (nonatomic,readonly) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long resultType;                 //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) long long resultSubtype;              //@synthesize resultSubtype=_resultSubtype - In the implementation block
-(long long)resultType;
-(long long)resultSubtype;
-(id)initWithPriority:(long long)arg1 resultType:(long long)arg2 resultSubtype:(long long)arg3 ;
-(long long)priority;
@end
