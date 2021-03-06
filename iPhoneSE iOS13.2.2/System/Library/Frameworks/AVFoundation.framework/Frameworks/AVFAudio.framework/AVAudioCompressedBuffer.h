/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioBuffer.h>

@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (nonatomic,readonly) unsigned packetCapacity; 
@property (assign,nonatomic) unsigned packetCount; 
@property (nonatomic,readonly) long long maximumPacketSize; 
@property (nonatomic,readonly) void* data; 
@property (nonatomic,readonly) unsigned byteCapacity; 
@property (assign,nonatomic) unsigned byteLength; 
@property (nonatomic,readonly) AudioStreamPacketDescription* packetDescriptions; 
-(void*)data;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 maximumPacketSize:(long long)arg3 ;
-(id)initWithFormat:(id)arg1 packetCapacity:(unsigned)arg2 ;
-(unsigned)packetCapacity;
-(unsigned)packetCount;
-(long long)maximumPacketSize;
-(AudioStreamPacketDescription*)packetDescriptions;
-(void)setPacketCount:(unsigned)arg1 ;
@end

