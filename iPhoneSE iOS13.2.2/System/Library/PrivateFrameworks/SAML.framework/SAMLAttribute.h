/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSArray;

@interface SAMLAttribute : SAMLBaseElement

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * nameFormat; 
@property (nonatomic,readonly) NSString * friendlyName; 
@property (nonatomic,readonly) NSArray * values; 
+(id)createElement:(id*)arg1 ;
-(NSString *)name;
-(NSArray *)values;
-(void)setName:(NSString *)arg1 ;
-(NSString *)friendlyName;
-(NSString *)nameFormat;
-(void)addAttributeValue:(id)arg1 ;
@end
