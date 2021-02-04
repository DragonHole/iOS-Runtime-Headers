/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBLabeledSocialProfile : PBCodable <NSCopying> {

	NSString* _label;
	NSString* _service;
	NSString* _urlString;
	NSString* _userIdentifier;
	NSString* _username;

}

@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlString; 
@property (nonatomic,retain) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) BOOL hasUsername; 
@property (nonatomic,retain) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) BOOL hasUserIdentifier; 
@property (nonatomic,retain) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                     //@synthesize service=_service - In the implementation block
-(BOOL)hasService;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLabel;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(BOOL)hasUrlString;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)hasUsername;
-(BOOL)hasUserIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)dictionaryRepresentation;
-(void)setLabel:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)username;
@end
