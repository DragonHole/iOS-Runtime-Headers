/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>

@class CNInstantMessageAddress;

@interface CNInstantMessageAddressContactPredicate : CNPredicate {

	CNInstantMessageAddress* _imAddress;

}

@property (nonatomic,copy,readonly) CNInstantMessageAddress * imAddress;              //@synthesize imAddress=_imAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithInstantMessageAddress:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
