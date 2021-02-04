/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	NSString* _value;
	NSString* _normalizedValue;

}

@property (nonatomic,copy,readonly) NSString * normalizedValue;              //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                        //@synthesize value=_value - In the implementation block
+(long long)handleTypeForValue:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)normalizedValue;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)initWithHandle:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)value;
@end
