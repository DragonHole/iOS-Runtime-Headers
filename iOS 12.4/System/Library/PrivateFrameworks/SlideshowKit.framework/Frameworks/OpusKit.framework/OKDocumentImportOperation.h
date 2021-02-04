/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFNSOperation.h>

@class OKDocument, NSURL;

@interface OKDocumentImportOperation : OFNSOperation {

	OKDocument* _document;
	NSURL* _resourceURL;
	NSURL* _importedResourceURL;
	BOOL _opaque;
	NSURL* _temporaryDownloadedMediaFileURL;
	NSURL* _temporaryTranscodedMediaFileURL;
	NSURL* _temporaryThumbnailMediaFileURL;

}

@property (nonatomic,retain) NSURL * temporaryDownloadedMediaFileURL;              //@synthesize temporaryDownloadedMediaFileURL=_temporaryDownloadedMediaFileURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryTranscodedMediaFileURL;              //@synthesize temporaryTranscodedMediaFileURL=_temporaryTranscodedMediaFileURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryThumbnailMediaFileURL;               //@synthesize temporaryThumbnailMediaFileURL=_temporaryThumbnailMediaFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * importedResourceURL;                   //@synthesize importedResourceURL=_importedResourceURL - In the implementation block
-(id)initWithDocument:(id)arg1 resourceURL:(id)arg2 importedResourceURL:(id)arg3 opaque:(BOOL)arg4 ;
-(unsigned long long)launchOperation;
-(void)setTemporaryThumbnailMediaFileURL:(NSURL *)arg1 ;
-(void)setTemporaryTranscodedMediaFileURL:(NSURL *)arg1 ;
-(void)setTemporaryDownloadedMediaFileURL:(NSURL *)arg1 ;
-(void)finishOperation;
-(void)cleanupOperation;
-(NSURL *)importedResourceURL;
-(NSURL *)temporaryDownloadedMediaFileURL;
-(NSURL *)temporaryTranscodedMediaFileURL;
-(NSURL *)temporaryThumbnailMediaFileURL;
-(id)init;
-(void)dealloc;
-(void)cancelOperation;
@end
