/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMBulletinObjectTuple : NSObject {

	NSString* _queryName;
	NSString* _uuidString;

}

@property (nonatomic,readonly) NSString * queryName;               //@synthesize queryName=_queryName - In the implementation block
@property (nonatomic,readonly) NSString * uuidString;              //@synthesize uuidString=_uuidString - In the implementation block
+(id)tupleWithQueryType:(long long)arg1 uuidString:(id)arg2 ;
-(id)initWithQueryType:(long long)arg1 uuidString:(id)arg2 ;
-(NSString *)queryName;
-(NSString *)uuidString;
@end
