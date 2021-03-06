/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>

@class NSString;

@interface CLSClassMember : CLSObject {

	NSString* _personID;
	unsigned long long _roles;

}

@property (nonatomic,copy) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) unsigned long long roles;              //@synthesize roles=_roles - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)personID;
-(unsigned long long)roles;
-(void)setRoles:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)_init;
@end

