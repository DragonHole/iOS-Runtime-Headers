/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	long long _domain;
	NSNumber* _instance;

}

@property (assign,nonatomic) long long domain;                     //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSNumber * instance;                  //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)descriptorWithSubscriptionContext:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithDomain:(long long)arg1 instance:(id)arg2 ;
-(void)setDomain:(long long)arg1 ;
-(NSNumber *)instance;
-(void)setInstance:(NSNumber *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)domain;
@end
