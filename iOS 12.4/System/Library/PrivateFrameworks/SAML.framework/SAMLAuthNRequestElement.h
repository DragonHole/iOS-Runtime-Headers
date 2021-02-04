/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, SAMLNameIdPolicy, SAMLConditions, SAMLRequestedAuthNContext, SAMLScoping;

@interface SAMLAuthNRequestElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (assign,nonatomic) BOOL forceAuthN; 
@property (assign,nonatomic) BOOL isPassive; 
@property (nonatomic,retain) NSString * providerName; 
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,retain) SAMLNameIdPolicy * nameIdPolicy; 
@property (nonatomic,retain) SAMLConditions * conditions; 
@property (nonatomic,readonly) SAMLRequestedAuthNContext * context; 
@property (nonatomic,retain) SAMLScoping * scoping; 
+(id)createElement:(id*)arg1 ;
-(NSString *)issuer;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(SAMLSignature *)signature;
-(SAMLConditions *)conditions;
-(NSString *)consent;
-(void)setConditions:(SAMLConditions *)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(NSDate *)issueInstant;
-(BOOL)forceAuthN;
-(BOOL)isPassive;
-(void)setIsPassive:(BOOL)arg1 ;
-(SAMLNameIdPolicy *)nameIdPolicy;
-(void)setNameIdPolicy:(SAMLNameIdPolicy *)arg1 ;
-(SAMLScoping *)scoping;
-(void)setScoping:(SAMLScoping *)arg1 ;
-(void)setForceAuthN:(BOOL)arg1 ;
-(NSString *)identifier;
-(SAMLRequestedAuthNContext *)context;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(SAMLSubject *)subject;
-(void)setSubject:(SAMLSubject *)arg1 ;
@end
