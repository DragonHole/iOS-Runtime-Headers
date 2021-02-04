/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHImportExceptionRecorder.h>

@class NSString, PHImportAsset, NSMutableArray, PHImportTimerCollection;

@interface PHImportRecord : PHImportExceptionRecorder {

	NSString* _rawAssetIdentifier;
	BOOL _referencedImport;
	BOOL _isDownloaded;
	unsigned char _importType;
	unsigned char _importFileOperation;
	NSString* _assetIdentifier;
	PHImportAsset* _importAsset;
	NSMutableArray* _relatedRecords;
	NSString* _sourcePath;
	NSString* _destinationPath;
	PHImportTimerCollection* _timers;

}

@property (nonatomic,retain) NSMutableArray * relatedRecords;                //@synthesize relatedRecords=_relatedRecords - In the implementation block
@property (assign,nonatomic) BOOL referencedImport;                          //@synthesize referencedImport=_referencedImport - In the implementation block
@property (assign,nonatomic) BOOL isDownloaded;                              //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (nonatomic,retain) NSString * assetIdentifier;                     //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * rawAssetIdentifier; 
@property (nonatomic,retain) PHImportAsset * importAsset;                    //@synthesize importAsset=_importAsset - In the implementation block
@property (nonatomic,retain) NSString * sourcePath;                          //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,retain) NSString * destinationPath;                     //@synthesize destinationPath=_destinationPath - In the implementation block
@property (nonatomic,retain) PHImportTimerCollection * timers;               //@synthesize timers=_timers - In the implementation block
@property (assign,nonatomic) unsigned char importType;                       //@synthesize importType=_importType - In the implementation block
@property (assign,nonatomic) unsigned char importFileOperation;              //@synthesize importFileOperation=_importFileOperation - In the implementation block
@property (nonatomic,readonly) BOOL isReferenced; 
-(BOOL)isDownloaded;
-(NSString *)assetIdentifier;
-(void)setAssetIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)relatedRecords;
-(void)setImportType:(unsigned char)arg1 ;
-(void)cleanupAfterFailure;
-(BOOL)referencedImport;
-(unsigned char)importType;
-(id)recordForAsset:(id)arg1 ;
-(id)allImportAssets;
-(id)allImportRecords;
-(void)updateImportType;
-(BOOL)isReferenced;
-(NSString *)rawAssetIdentifier;
-(void)addRelatedRecord:(id)arg1 ;
-(void)setDownloadedAtPath:(id)arg1 ;
-(void)setImportAsset:(PHImportAsset *)arg1 ;
-(void)setRelatedRecords:(NSMutableArray *)arg1 ;
-(void)setReferencedImport:(BOOL)arg1 ;
-(PHImportTimerCollection *)timers;
-(void)setTimers:(PHImportTimerCollection *)arg1 ;
-(unsigned char)importFileOperation;
-(void)setImportFileOperation:(unsigned char)arg1 ;
-(PHImportAsset *)importAsset;
-(id)initWithImportAsset:(id)arg1 ;
-(void)setSourcePath:(NSString *)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(NSString *)sourcePath;
-(NSString *)destinationPath;
-(id)allAssetIdentifiers;
-(BOOL)needsDownload;
-(id)description;
-(void)setIsDownloaded:(BOOL)arg1 ;
@end
