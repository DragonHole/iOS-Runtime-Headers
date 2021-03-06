/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FoundInAppsPlugins.framework/FoundInAppsPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FoundInAppsPlugins/FoundInAppsPlugins-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface FIAPEntity : NSObject <NSSecureCoding> {

	unsigned char _type;
	NSString* _name;
	NSString* _languageIdentifier;
	NSString* _pluginIdentifier;
	NSString* _bundleIdentifier;
	NSString* _domainIdentifier;
	NSString* _uniqueIdentifier;
	NSString* _activityType;
	NSDate* _contentCreationDate;
	NSDate* _detectionDate;

}

@property (nonatomic,copy) NSString * pluginIdentifier;                    //@synthesize pluginIdentifier=_pluginIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * domainIdentifier;                    //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activityType;                        //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSDate * contentCreationDate;                   //@synthesize contentCreationDate=_contentCreationDate - In the implementation block
@property (nonatomic,copy) NSDate * detectionDate;                         //@synthesize detectionDate=_detectionDate - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned char type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * languageIdentifier;              //@synthesize languageIdentifier=_languageIdentifier - In the implementation block
+(id)entityWithName:(id)arg1 type:(unsigned char)arg2 languageIdentifier:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(NSString *)languageIdentifier;
-(NSDate *)detectionDate;
-(void)setContentCreationDate:(NSDate *)arg1 ;
-(NSDate *)contentCreationDate;
-(NSString *)pluginIdentifier;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(id)initWithName:(id)arg1 type:(unsigned char)arg2 languageIdentifier:(id)arg3 ;
-(void)setDetectionDate:(NSDate *)arg1 ;
-(BOOL)isEqualToEntity:(id)arg1 ;
-(void)setPluginIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)type;
-(NSString *)activityType;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

