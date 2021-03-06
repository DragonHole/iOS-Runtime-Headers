/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSContainerPredicate.h>

@class NSString;

@interface CNiOSABContainersForAccountExternalIdentifierPredicate : CNPredicate <CNiOSContainerPredicate> {

	NSString* _accountExternalIdentifier;

}

@property (nonatomic,copy,readonly) NSString * accountExternalIdentifier;              //@synthesize accountExternalIdentifier=_accountExternalIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(CFArrayRef)cn_copyContainersInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(BOOL)includesDisabledContainers;
-(id)initWithAccountExternalIdentifier:(id)arg1 ;
-(NSString *)accountExternalIdentifier;
@end

