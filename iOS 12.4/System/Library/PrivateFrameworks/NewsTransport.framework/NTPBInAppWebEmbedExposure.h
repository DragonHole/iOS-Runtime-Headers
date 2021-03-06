/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBInAppWebEmbedExposure : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _feedViewExposureId;
	int _moduleEventType;
	NSData* _moduleExposureId;
	int _moduleItemCount;
	int _moduleItemPosition;
	int _moduleLocation;
	NSString* _webEmbedId;
	int _webEmbedLocation;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasModuleEventType; 
@property (assign,nonatomic) int moduleEventType;                       //@synthesize moduleEventType=_moduleEventType - In the implementation block
@property (assign,nonatomic) BOOL hasModuleLocation; 
@property (assign,nonatomic) int moduleLocation;                        //@synthesize moduleLocation=_moduleLocation - In the implementation block
@property (assign,nonatomic) BOOL hasModuleItemCount; 
@property (assign,nonatomic) int moduleItemCount;                       //@synthesize moduleItemCount=_moduleItemCount - In the implementation block
@property (nonatomic,readonly) BOOL hasModuleExposureId; 
@property (nonatomic,retain) NSData * moduleExposureId;                 //@synthesize moduleExposureId=_moduleExposureId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;               //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasWebEmbedLocation; 
@property (assign,nonatomic) int webEmbedLocation;                      //@synthesize webEmbedLocation=_webEmbedLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                      //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasModuleItemPosition; 
@property (assign,nonatomic) int moduleItemPosition;                    //@synthesize moduleItemPosition=_moduleItemPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbedId; 
@property (nonatomic,retain) NSString * webEmbedId;                     //@synthesize webEmbedId=_webEmbedId - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
-(void)setModuleExposureId:(NSData *)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(int)moduleEventType;
-(void)setModuleEventType:(int)arg1 ;
-(void)setHasModuleEventType:(BOOL)arg1 ;
-(BOOL)hasModuleEventType;
-(id)moduleEventTypeAsString:(int)arg1 ;
-(int)StringAsModuleEventType:(id)arg1 ;
-(int)moduleLocation;
-(void)setModuleLocation:(int)arg1 ;
-(void)setHasModuleLocation:(BOOL)arg1 ;
-(BOOL)hasModuleLocation;
-(id)moduleLocationAsString:(int)arg1 ;
-(int)StringAsModuleLocation:(id)arg1 ;
-(void)setModuleItemCount:(int)arg1 ;
-(void)setHasModuleItemCount:(BOOL)arg1 ;
-(BOOL)hasModuleItemCount;
-(BOOL)hasModuleExposureId;
-(BOOL)hasFeedViewExposureId;
-(int)moduleItemCount;
-(NSData *)moduleExposureId;
-(NSData *)feedViewExposureId;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(int)webEmbedLocation;
-(void)setWebEmbedLocation:(int)arg1 ;
-(void)setHasWebEmbedLocation:(BOOL)arg1 ;
-(BOOL)hasWebEmbedLocation;
-(id)webEmbedLocationAsString:(int)arg1 ;
-(int)StringAsWebEmbedLocation:(id)arg1 ;
-(void)setModuleItemPosition:(int)arg1 ;
-(void)setHasModuleItemPosition:(BOOL)arg1 ;
-(BOOL)hasModuleItemPosition;
-(BOOL)hasWebEmbedId;
-(int)moduleItemPosition;
-(NSString *)webEmbedId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

