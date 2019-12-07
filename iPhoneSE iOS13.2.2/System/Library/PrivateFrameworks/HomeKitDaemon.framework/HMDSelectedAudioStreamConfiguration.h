/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDAudioStreamCodecConfiguration;

@interface HMDSelectedAudioStreamConfiguration : NSObject <NSCopying> {

	HMDAudioStreamCodecConfiguration* _configuration;

}

@property (nonatomic,retain) HMDAudioStreamCodecConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConfiguration:(HMDAudioStreamCodecConfiguration *)arg1 ;
-(HMDAudioStreamCodecConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
@end
