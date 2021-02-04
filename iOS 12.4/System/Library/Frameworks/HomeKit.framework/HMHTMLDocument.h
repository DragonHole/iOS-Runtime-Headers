/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString;

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding> {

	NSString* _stringValue;

}

@property (copy,readonly) NSString * stringValue;                             //@synthesize stringValue=_stringValue - In the implementation block
@property (copy,readonly) NSAttributedString * attributedString; 
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateAndReturnError:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(NSAttributedString *)attributedString;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
@end
