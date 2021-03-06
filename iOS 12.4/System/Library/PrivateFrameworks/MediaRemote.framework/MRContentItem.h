/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/_MRContentItemProtobuf.h>

@class MRContentItemMetadata;

@interface MRContentItem : _MRContentItemProtobuf

@property (nonatomic,readonly) MRContentItemMetadata * itemMetadata; 
@property (nonatomic,readonly) BOOL hasCurrentLanguageOptions; 
@property (nonatomic,readonly) BOOL hasAvailableLanguageOptions; 
+(void)initialize;
-(id)dictionaryRepresentation;
-(id)customDictionaryRepresentation;
-(MRContentItemMetadata *)itemMetadata;
-(BOOL)hasCurrentLanguageOptions;
-(BOOL)hasAvailableLanguageOptions;
-(void)setLyrics:(id)arg1 ;
-(void)setAvailableLanguageOptions:(id)arg1 ;
-(void)setCurrentLanguageOptions:(id)arg1 ;
-(void)setArtworkData:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(void)setInfo:(id)arg1 ;
-(void)setSections:(id)arg1 ;
@end

