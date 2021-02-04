/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFImage.h>
#import <libobjc.A.dylib/SFMediaArtworkImage.h>
@class NSString, NSDictionary, NSData;


@protocol SFMediaArtworkImage <SFImage>
@property (nonatomic,copy) NSString * persistentID; 
@property (nonatomic,copy) NSString * spotlightIdentifier; 
@property (assign,nonatomic) int mediaEntityType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)persistentID;
-(NSString *)spotlightIdentifier;
-(void)setSpotlightIdentifier:(id)arg1;
-(void)setPersistentID:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(int)mediaEntityType;
-(void)setMediaEntityType:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFMediaArtworkImage : SFImage <SFMediaArtworkImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _mediaEntityType;
	NSString* _persistentID;
	NSString* _spotlightIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,copy) NSString * persistentID;                                  //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) NSString * spotlightIdentifier;                           //@synthesize spotlightIdentifier=_spotlightIdentifier - In the implementation block
@property (assign,nonatomic) int mediaEntityType;                                    //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)hasMediaEntityType;
-(NSString *)persistentID;
-(NSString *)spotlightIdentifier;
-(void)setSpotlightIdentifier:(NSString *)arg1 ;
-(void)setPersistentID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(int)mediaEntityType;
-(void)setMediaEntityType:(int)arg1 ;
@end
