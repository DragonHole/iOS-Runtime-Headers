/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <libobjc.A.dylib/_DKHasComparableValue.h>
#import <libobjc.A.dylib/_DKHasPrimaryValue.h>
#import <libobjc.A.dylib/_DKHasObjectType.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType> {

	NSString* _stringValue;
	_DKIdentifierType* _identifierType;

}

@property (retain) NSString * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (retain) _DKIdentifierType * identifierType;              //@synthesize identifierType=_identifierType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)identifierWithString:(id)arg1 type:(id)arg2 ;
+(id)fromPBCodable:(id)arg1 ;
+(id)entityName;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)_identifierFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(id)initWithString:(id)arg1 type:(id)arg2 ;
-(_DKIdentifierType *)identifierType;
-(long long)compareValue:(id)arg1 ;
-(id)primaryValue;
-(id)objectType;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setIdentifierType:(_DKIdentifierType *)arg1 ;
-(id)toPBCodable;
-(long long)typeCode;
-(BOOL)copyToManagedObject:(id)arg1 ;
@end
