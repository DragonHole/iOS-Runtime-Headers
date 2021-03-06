/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMCameraAudioCodec : NSObject <NSSecureCoding> {

	unsigned long long _audioCodec;

}

@property (nonatomic,readonly) unsigned long long audioCodec;              //@synthesize audioCodec=_audioCodec - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValid:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)audioCodec;
-(id)initWithAudioCodecType:(unsigned long long)arg1 ;
@end

