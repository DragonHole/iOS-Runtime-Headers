/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {

	AVAudioMixInternal* _audioMix;

}

@property (nonatomic,copy,readonly) NSArray * inputParameters; 
-(id)_audioMixInputParametersForTrackID:(int)arg1 ;
-(void)setInputParameters:(NSArray *)arg1 ;
-(NSArray *)inputParameters;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
