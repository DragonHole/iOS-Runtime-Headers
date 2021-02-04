/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHMomentShareParticipant : PHObject {

	unsigned short _type;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) unsigned short type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(id)managedEntityName;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)fetchParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchParticipantsInMomentShare:(id)arg1 options:(id)arg2 ;
+(id)fetchType;
+(id)localIdentifierWithUUID:(id)arg1 ;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSString *)emailAddress;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned short)type;
-(NSString *)phoneNumber;
@end
