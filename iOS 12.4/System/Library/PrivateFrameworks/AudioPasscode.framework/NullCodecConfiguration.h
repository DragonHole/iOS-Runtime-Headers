/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioPasscode/AUPasscodeCodecConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding> {

	float _retrievalCallbackInterval;

}

@property (assign,nonatomic) float retrievalCallbackInterval;              //@synthesize retrievalCallbackInterval=_retrievalCallbackInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(float)retrievalCallbackInterval;
-(void)setRetrievalCallbackInterval:(float)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaultValues;
@end
