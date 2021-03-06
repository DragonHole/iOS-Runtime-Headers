/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, CNContact, NSString;

@interface CKDiscoveredUserInfo : NSObject <NSSecureCoding, NSCopying> {

	CKRecordID* _userRecordID;
	CNContact* _displayContact;

}

@property (nonatomic,copy,readonly) CKRecordID * userRecordID;               //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) CNContact * displayContact;              //@synthesize displayContact=_displayContact - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithUserRecordID:(id)arg1 displayContact:(id)arg2 ;
-(CNContact *)displayContact;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)CKPropertiesDescription;
-(CKRecordID *)userRecordID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

