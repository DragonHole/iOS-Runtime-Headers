/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMOwnerAccountIdentity.h>

@class NSString;

@interface FMInternalOwnerAccount : NSObject <FMOwnerAccountIdentity> {

	NSString* _personId;
	NSString* _username;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) NSString * personId;               //@synthesize personId=_personId - In the implementation block
@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
-(id)initWithAccount:(id)arg1 ;
-(void)setPersonId:(NSString *)arg1 ;
-(NSString *)personId;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)description;
-(NSString *)username;
@end
