/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class NSArray, NSString;

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand>

@property (nonatomic,copy) NSArray * identifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObjectRetrieve;
+(id)domainObjectRetrieveWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

