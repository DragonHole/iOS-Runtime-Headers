/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NMSEpisodeSizeInfo : NSObject <NSSecureCoding> {

	BOOL _downloaded;
	unsigned long long _size;
	double _duration;

}

@property (nonatomic,readonly) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (getter=isDownloaded,nonatomic,readonly) BOOL downloaded;              //@synthesize downloaded=_downloaded - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(double)duration;
-(BOOL)isDownloaded;
-(id)initWithSize:(unsigned long long)arg1 duration:(double)arg2 downloaded:(BOOL)arg3 ;
@end

