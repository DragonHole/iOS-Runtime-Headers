/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSNumber, NSData;

@interface SAMLX509Data : SAMLBaseElement

@property (nonatomic,readonly) NSString * issuerName; 
@property (nonatomic,readonly) NSNumber * serialNumber; 
@property (nonatomic,readonly) NSData * ski; 
@property (nonatomic,readonly) NSString * subjectName; 
@property (nonatomic,readonly) NSData * certificate; 
@property (nonatomic,readonly) NSData * crl; 
+(id)createElement:(id*)arg1 ;
-(NSData *)certificate;
-(NSNumber *)serialNumber;
-(NSString *)issuerName;
-(NSData *)ski;
-(NSString *)subjectName;
-(NSData *)crl;
@end

