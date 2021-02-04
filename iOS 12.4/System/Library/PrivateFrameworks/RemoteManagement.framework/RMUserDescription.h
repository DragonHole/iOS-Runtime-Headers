/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface RMUserDescription : NSObject {

	NSString* _givenName;
	NSString* _familyName;
	NSNumber* _userDSID;

}

@property (nonatomic,copy,readonly) NSString * givenName;               //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * familyName;              //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * userDSID;                //@synthesize userDSID=_userDSID - In the implementation block
+(id)currentUser;
-(NSString *)givenName;
-(id)initWithGivenName:(id)arg1 familyName:(id)arg2 userDSID:(id)arg3 ;
-(NSNumber *)userDSID;
-(NSString *)familyName;
@end
