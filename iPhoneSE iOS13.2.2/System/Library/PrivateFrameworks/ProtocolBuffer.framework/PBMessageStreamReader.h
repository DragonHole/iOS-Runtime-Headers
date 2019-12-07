/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInputStream;

@interface PBMessageStreamReader : NSObject {

	NSInputStream* _stream;
	Class _classOfNextMessage;
	unsigned long long _position;

}

@property (assign,nonatomic) Class classOfNextMessage;                   //@synthesize classOfNextMessage=_classOfNextMessage - In the implementation block
@property (nonatomic,readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
-(void)dealloc;
-(id)initWithStream:(id)arg1 ;
-(unsigned long long)position;
-(void)setClassOfNextMessage:(Class)arg1 ;
-(id)nextMessage;
-(Class)classOfNextMessage;
@end
