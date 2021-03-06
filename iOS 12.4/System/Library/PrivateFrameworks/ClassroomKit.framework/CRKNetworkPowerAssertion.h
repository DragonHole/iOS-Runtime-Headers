/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CRKNetworkPowerAssertion : NSObject {

	unsigned mPowerAssertion;
	NSString* _name;
	unsigned long long _count;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
+(void)increment;
+(void)decrement;
+(id)sharedInstance;
-(void)increment;
-(void)decrement;
-(id)init;
-(unsigned long long)count;
-(NSString *)name;
-(void)setCount:(unsigned long long)arg1 ;
@end

