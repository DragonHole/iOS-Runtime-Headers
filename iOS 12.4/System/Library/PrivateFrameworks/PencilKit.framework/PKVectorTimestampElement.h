/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKVectorTimestampElement : NSObject {

	unsigned long long _clock;
	unsigned long long _subclock;

}

@property (assign,nonatomic) unsigned long long clock;                 //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) unsigned long long subclock;              //@synthesize subclock=_subclock - In the implementation block
-(unsigned long long)clock;
-(void)setClock:(unsigned long long)arg1 ;
-(unsigned long long)subclock;
-(void)setSubclock:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
