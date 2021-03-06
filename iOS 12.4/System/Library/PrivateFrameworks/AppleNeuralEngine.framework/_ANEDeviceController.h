/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppleNeuralEngine/AppleNeuralEngine-Structs.h>
@class NSObject;

@interface _ANEDeviceController : NSObject {

	BOOL _isPrivileged;
	NSObject*<OS_dispatch_queue> _q;
	long long _usecount;
	unsigned long long _programHandle;
	SCD_Struct_AN2* _device;

}

@property (q,nonatomic,readonly) NSObject*<OS_dispatch_queue> q;              //@synthesize q=_q - In the implementation block
@property (assign,nonatomic) long long usecount;                              //@synthesize usecount=_usecount - In the implementation block
@property (nonatomic,readonly) BOOL isPrivileged;                             //@synthesize isPrivileged=_isPrivileged - In the implementation block
@property (assign,nonatomic) unsigned long long programHandle;                //@synthesize programHandle=_programHandle - In the implementation block
@property (assign,nonatomic) SCD_Struct_AN2* device;                          //@synthesize device=_device - In the implementation block
+(id)controllerWithProgramHandle:(unsigned long long)arg1 ;
+(id)sharedPrivilegedConnection;
-(BOOL)isPrivileged;
-(NSObject*<OS_dispatch_queue>)q;
-(SCD_Struct_AN2*)device;
-(void)setDevice:(SCD_Struct_AN2*)arg1 ;
-(unsigned long long)programHandle;
-(void)setProgramHandle:(unsigned long long)arg1 ;
-(id)initWithProgramHandle:(unsigned long long)arg1 priviledged:(BOOL)arg2 ;
-(long long)usecount;
-(void)setUsecount:(long long)arg1 ;
-(void)stop;
-(void)start;
@end

