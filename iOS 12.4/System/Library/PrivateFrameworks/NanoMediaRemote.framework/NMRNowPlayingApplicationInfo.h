/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRNowPlayingApplicationStateProtobuf, NSString, NSData;

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRNowPlayingApplicationStateProtobuf* _protobuf;
	int _processID;

}

@property (nonatomic,copy) NSString * companionBundleIdentifier; 
@property (nonatomic,copy) NSString * watchBundleIdentifier; 
@property (nonatomic,copy) NSString * localizedDisplayName; 
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,copy) NSData * iconDigest; 
@property (assign,nonatomic) int processID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_getNextPlaceholderProcessID;
-(id)protobufData;
-(void)setProcessID:(int)arg1 ;
-(int)processID;
-(NSString *)localizedDisplayName;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(unsigned)playbackState;
-(void)setPlaybackState:(unsigned)arg1 ;
-(NSString *)companionBundleIdentifier;
-(void)setCompanionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)watchBundleIdentifier;
-(void)setWatchBundleIdentifier:(NSString *)arg1 ;
-(NSData *)iconDigest;
-(void)setIconDigest:(NSData *)arg1 ;
-(id)initWithProtobufData:(id)arg1 ;
-(id)init;
@end

