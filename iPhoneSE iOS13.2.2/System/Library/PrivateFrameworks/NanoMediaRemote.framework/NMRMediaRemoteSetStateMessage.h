/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetStateMessageProfobuf, NSData, NSNumber, NSDate, NSString;

@interface NMRMediaRemoteSetStateMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetStateMessageProfobuf* _protobuf;

}

@property (nonatomic,readonly) NSData * nowPlayingInfoData; 
@property (nonatomic,readonly) NSData * applicationInfoData; 
@property (nonatomic,readonly) NSData * supportedCommandsData; 
@property (nonatomic,readonly) NSData * playbackQueueData; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithNowPlayingInfo:(id)arg1 applicationInfo:(id)arg2 supportedCommands:(id)arg3 playbackQueue:(id)arg4 originIdentifier:(id)arg5 ;
-(NSNumber *)originIdentifier;
-(NSData *)nowPlayingInfoData;
-(NSDate *)serializationDate;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithNowPlayingInfo:(id)arg1 applicationInfo:(id)arg2 supportedCommands:(id)arg3 playbackQueue:(id)arg4 originIdentifier:(id)arg5 ;
-(NSData *)applicationInfoData;
-(NSData *)supportedCommandsData;
-(NSData *)playbackQueueData;
@end

