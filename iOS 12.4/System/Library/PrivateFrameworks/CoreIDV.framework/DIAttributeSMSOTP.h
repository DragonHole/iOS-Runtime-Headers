/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIDV/DIAttributeText.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding> {

	unsigned long long _validityInSeconds;

}

@property (assign,nonatomic) unsigned long long validityInSeconds;              //@synthesize validityInSeconds=_validityInSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)submissionString;
-(id)getCurrentValue;
-(unsigned long long)validityInSeconds;
-(void)setValidityInSeconds:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setCurrentValue:(id)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
@end

