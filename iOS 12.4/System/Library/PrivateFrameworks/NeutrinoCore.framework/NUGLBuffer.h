/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>

@class NSMutableIndexSet;

@interface NUGLBuffer : NUGLObject {

	NSMutableIndexSet* _validRegion;
	unsigned _target;
	unsigned _usage;
	long long _size;

}

@property (nonatomic,readonly) long long size;              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned target;               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned usage;                //@synthesize usage=_usage - In the implementation block
-(void)delete;
-(void)generate:(id)arg1 ;
-(void)readDataInRange:(NSRange)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)writeDataInRange:(NSRange)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)hasValidDataInRange:(NSRange)arg1 ;
-(void)_writeDataInRange:(NSRange)arg1 options:(unsigned)arg2 context:(id)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)hasNoValidDataOutsideOfRange:(NSRange)arg1 ;
-(void)validateDataInRange:(NSRange)arg1 ;
-(void)invalidateDataInRange:(NSRange)arg1 ;
-(void)readDataWithContext:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)writeDataWithContext:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)copyTexture:(id)arg1 inRect:(SCD_Struct_NU6)arg2 context:(id)arg3 ;
-(void)updateTexture:(id)arg1 inRect:(SCD_Struct_NU6)arg2 context:(id)arg3 ;
-(BOOL)hasValidData;
-(BOOL)hasNoValidData;
-(long long)size;
-(id)init;
-(id)description;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(id)initWithSize:(long long)arg1 ;
-(unsigned)usage;
-(void)setUsage:(unsigned)arg1 ;
-(void)invalidateData;
@end

