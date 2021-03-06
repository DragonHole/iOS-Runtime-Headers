/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UMLog : NSObject {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)error;
+(id)info;
+(id)debug;
+(id)fault;
+(id)standard;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)logPublicFormat:(id)arg1 ;
-(void)logPrivateFormat:(id)arg1 ;
-(void)logMessage:(id)arg1 ;
@end

