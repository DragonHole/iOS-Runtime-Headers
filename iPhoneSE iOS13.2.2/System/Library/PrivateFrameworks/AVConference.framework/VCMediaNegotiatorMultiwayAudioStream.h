/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSSet;

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying> {

	NSMutableSet* _supportedAudioPayloads;

}

@property (nonatomic,retain) NSSet * supportedAudioPayloads;              //@synthesize supportedAudioPayloads=_supportedAudioPayloads - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)supportedAudioPayloads;
-(void)setSupportedAudioPayloads:(NSSet *)arg1 ;
-(void)addPayload:(int)arg1 ;
@end
