/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TSBonjourNode : NSObject {

	NSString* _name;
	NSString* _type;
	NSString* _domain;
	NSDictionary* _interfaces;

}

@property (nonatomic,copy) NSDictionary * interfaces;               //@synthesize interfaces=_interfaces - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;              //@synthesize domain=_domain - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)type;
-(NSDictionary *)interfaces;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 andDomain:(id)arg3 ;
-(void)addedOnInterface:(unsigned)arg1 named:(id)arg2 ;
-(void)removedFromInterface:(unsigned)arg1 named:(id)arg2 ;
-(void)setInterfaces:(NSDictionary *)arg1 ;
@end

