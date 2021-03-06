/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
@interface TimedBuffer : NSObject {

	CVBufferRef _buffer;
	SCD_Struct_Ti3 _timestamp;

}

@property (assign,nonatomic) CVBufferRef buffer;                    //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Ti3 timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(SCD_Struct_Ti3)timestamp;
-(void)setTimestamp:(SCD_Struct_Ti3)arg1 ;
-(void)setBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)buffer;
-(id)initWithBuffer:(CVBufferRef)arg1 atTimestamp:(SCD_Struct_Ti3)arg2 ;
@end

