/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding> {

	NSDictionary* _valuesByIndex;
	NSString* _enumName;
	NSArray* _enumValues;
	long long _type;

}

@property (nonatomic,copy) NSString * enumName;               //@synthesize enumName=_enumName - In the implementation block
@property (nonatomic,copy) NSArray * enumValues;              //@synthesize enumValues=_enumValues - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(void)setEnumName:(NSString *)arg1 ;
-(void)setEnumValues:(NSArray *)arg1 ;
-(NSString *)enumName;
-(NSArray *)enumValues;
-(id)valueForIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
@end

