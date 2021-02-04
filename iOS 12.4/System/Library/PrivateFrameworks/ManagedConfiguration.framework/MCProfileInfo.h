/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MCProfileInfo : NSObject <NSSecureCoding> {

	NSString* _friendlyName;
	NSString* _profileDescription;
	NSString* _identifier;
	NSString* _UUID;
	NSString* _organization;
	NSDate* _expiryDate;

}

@property (nonatomic,retain) NSString * friendlyName;                    //@synthesize friendlyName=_friendlyName - In the implementation block
@property (nonatomic,retain) NSString * profileDescription;              //@synthesize profileDescription=_profileDescription - In the implementation block
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * organization;                    //@synthesize organization=_organization - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                        //@synthesize expiryDate=_expiryDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)profileDescription;
-(void)setProfileDescription:(NSString *)arg1 ;
-(void)setOrganization:(NSString *)arg1 ;
-(NSString *)organization;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(NSDate *)expiryDate;
-(void)setFriendlyName:(NSString *)arg1 ;
-(NSString *)friendlyName;
-(id)initWithProfile:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
@end
