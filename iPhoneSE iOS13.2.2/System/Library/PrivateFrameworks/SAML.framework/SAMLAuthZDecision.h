/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSArray, SAMLEvidence, NSString;

@interface SAMLAuthZDecision : SAMLBaseElement

@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) SAMLEvidence * evidence; 
@property (nonatomic,readonly) NSString * decision; 
@property (nonatomic,readonly) NSString * resource; 
+(id)createElement:(id*)arg1 ;
-(NSArray *)actions;
-(NSString *)resource;
-(SAMLEvidence *)evidence;
-(NSString *)decision;
@end
