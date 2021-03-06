/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INImageBundle : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundlePath;
	NSString* _bundleIdentifier;
	unsigned long long _bundleType;

}

@property (nonatomic,copy) NSString * bundlePath;                        //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long bundleType;              //@synthesize bundleType=_bundleType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleType:(unsigned long long)arg1 ;
-(unsigned long long)bundleType;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundlePath;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

