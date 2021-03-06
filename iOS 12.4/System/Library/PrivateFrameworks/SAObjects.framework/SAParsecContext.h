/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSDictionary, NSString;

@interface SAParsecContext : SADomainObject

@property (nonatomic,copy) NSData * httpBody; 
@property (nonatomic,copy) NSDictionary * httpHeaders; 
@property (nonatomic,copy) NSString * httpMethod; 
@property (nonatomic,copy) NSString * httpUrl; 
+(id)parsecContext;
+(id)parsecContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)setHttpBody:(NSData *)arg1 ;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(NSString *)httpUrl;
-(void)setHttpUrl:(NSString *)arg1 ;
-(NSData *)httpBody;
-(NSString *)httpMethod;
-(id)groupIdentifier;
@end

