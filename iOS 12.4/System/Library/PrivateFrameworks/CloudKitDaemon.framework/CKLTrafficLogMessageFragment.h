/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKLTrafficLogMessageFragment : NSObject {

	unsigned long long _type;
	NSString* _uuid;
	long long _seqNum;
	NSString* _dataString;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) long long seqNum;                     //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,readonly) NSString * dataString;                //@synthesize dataString=_dataString - In the implementation block
-(id)initWithMessage:(id)arg1 ;
-(long long)seqNum;
-(NSString *)dataString;
-(id)description;
-(NSString *)uuid;
-(unsigned long long)type;
@end

