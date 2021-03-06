/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding> {

	unsigned long long _foregroundRefreshRate;
	unsigned long long _backgroundRefreshRate;
	unsigned long long _modThreshold;
	unsigned long long _modMax;
	NSString* _endpointURLString;

}

@property (nonatomic,readonly) unsigned long long foregroundRefreshRate;              //@synthesize foregroundRefreshRate=_foregroundRefreshRate - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundRefreshRate;              //@synthesize backgroundRefreshRate=_backgroundRefreshRate - In the implementation block
@property (nonatomic,readonly) unsigned long long modThreshold;                       //@synthesize modThreshold=_modThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long modMax;                             //@synthesize modMax=_modMax - In the implementation block
@property (nonatomic,copy,readonly) NSString * endpointURLString;                     //@synthesize endpointURLString=_endpointURLString - In the implementation block
+(id)userSegmentationConfigurationWithConfigDict:(id)arg1 environment:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(NSString *)endpointURLString;
-(id)initWithForegroundRefreshRate:(unsigned long long)arg1 backgroundRefreshRate:(unsigned long long)arg2 modThreshold:(unsigned long long)arg3 modMax:(unsigned long long)arg4 endpointURLString:(id)arg5 ;
-(unsigned long long)foregroundRefreshRate;
-(unsigned long long)backgroundRefreshRate;
-(unsigned long long)modThreshold;
-(unsigned long long)modMax;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

