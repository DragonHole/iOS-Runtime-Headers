/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAProtobufMessage : SADomainObject

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSString * typeName; 
+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)typeName;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

