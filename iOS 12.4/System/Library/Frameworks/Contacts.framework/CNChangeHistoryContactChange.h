/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact, CNChangeHistoryAnchor;

@interface CNChangeHistoryContactChange : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	long long _changeType;
	CNContact* _contact;
	CNChangeHistoryAnchor* _changeAnchor;

}

@property (assign,nonatomic) long long changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) CNContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * changeAnchor;              //@synthesize changeAnchor=_changeAnchor - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                    //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(CNChangeHistoryAnchor *)changeAnchor;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 ;
-(void)setChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(long long)changeType;
-(void)setChangeType:(long long)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(NSString *)contactIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

