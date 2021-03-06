/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface DKCanonicalVersion : NSObject <NSCopying, NSSecureCoding> {

	NSString* _string;
	NSArray* _parts;

}

@property (retain) NSArray * parts;                            //@synthesize parts=_parts - In the implementation block
@property (nonatomic,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
+(id)canonicalVersionWithString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isNewerThan:(id)arg1 ;
-(void)setParts:(NSArray *)arg1 ;
-(id)_parseParts:(id)arg1 ;
-(BOOL)isEqualToCanonicalVersion:(id)arg1 ;
-(NSArray *)parts;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

