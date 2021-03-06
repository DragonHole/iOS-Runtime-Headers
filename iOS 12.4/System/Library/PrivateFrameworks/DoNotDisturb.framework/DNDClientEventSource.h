/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DNDClientEventSource : NSObject <NSCopying, NSSecureCoding> {

	NSString* _value;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                //@synthesize value=_value - In the implementation block
+(id)sourceWithDestinationIdentifier:(id)arg1 ;
+(id)sourceWithCNContactIdentifier:(id)arg1 ;
+(id)sourceWithPhoneNumber:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSString *)value;
@end

