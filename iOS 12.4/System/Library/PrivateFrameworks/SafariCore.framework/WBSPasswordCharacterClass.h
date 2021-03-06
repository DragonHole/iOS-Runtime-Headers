/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBSPasswordCharacterClass : NSObject {

	long long _type;
	NSString* _value;

}

@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(id)namedCharacterClassWithType:(long long)arg1 ;
+(id)customCharacterClassWithValue:(id)arg1 ;
+(id)unicodeCharacterClass;
+(id)asciiPrintableCharacterClass;
+(id)uppercaseCharacterClass;
+(id)lowercaseCharacterClass;
+(id)digitCharacterClass;
+(id)specialCharacterClass;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(NSString *)value;
@end

