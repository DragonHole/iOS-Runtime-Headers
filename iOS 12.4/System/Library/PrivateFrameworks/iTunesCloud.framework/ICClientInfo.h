/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _processName;
	NSString* _clientIdentifier;
	NSString* _clientVersion;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;

}

@property (nonatomic,copy,readonly) NSString * processName;                             //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientVersion;                           //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;              //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                 //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
+(id)defaultInfo;
+(BOOL)supportsSecureCoding;
-(NSString *)clientIdentifier;
-(id)_clientInfoCopyWithClass:(Class)arg1 ;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(NSString *)clientVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)processName;
@end

