/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelRadioStation : MPModelObject

@property (assign,getter=isBeats1,nonatomic) BOOL beats1; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (assign,nonatomic) BOOL allowsItemLiking; 
@property (assign,nonatomic) long long type; 
+(id)__artworkCatalogBlock_KEY;
+(id)__beats1_KEY;
+(id)__name_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__hasExplicitContent_KEY;
+(id)__allowsItemLiking_KEY;
+(id)__type_KEY;
+(id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1 ;
-(id)contentItemCollectionInfo;
-(id)artworkCatalog;
-(id)humanDescription;
@end

