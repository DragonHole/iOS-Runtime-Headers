/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSString, NSURL;

@interface CalDAVUpdateOwnerItem : CoreDAVItem {

	ICSDateValue* _dtstamp;
	NSString* _displayName;
	NSString* _firstName;
	NSString* _lastName;
	NSURL* _address;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) ICSDateValue * dtstamp;               //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSURL * address;                      //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(void)setAddress:(NSURL *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSURL *)address;
-(id)copyParseRules;
-(void)setDtstamp:(ICSDateValue *)arg1 ;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
-(void)setAddressItem:(id)arg1 ;
-(void)setEmailAddressItem:(id)arg1 ;
-(void)setPhoneNumberItem:(id)arg1 ;
-(void)setDisplayNameItem:(id)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(ICSDateValue *)dtstamp;
-(id)description;
-(NSString *)displayName;
-(NSString *)phoneNumber;
@end
