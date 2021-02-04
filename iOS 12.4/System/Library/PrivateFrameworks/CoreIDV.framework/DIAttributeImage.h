/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface DIAttributeImage : DIAttribute <NSSecureCoding> {

	NSData* currentValue;
	NSString* _encoding;
	unsigned long long _format;
	unsigned long long _height;
	unsigned long long _width;

}

@property (nonatomic,copy) NSString * encoding;                                       //@synthesize encoding=_encoding - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) NSData * currentValue; 
@property (assign,nonatomic) unsigned long long format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                              //@synthesize width=_width - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setEncoding:(NSString *)arg1 ;
-(NSString *)encoding;
-(id)getCurrentValue;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)format;
-(void)setCurrentValue:(NSData *)arg1 ;
-(id)defaultValue;
@end
