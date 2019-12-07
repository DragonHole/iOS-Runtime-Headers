/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityViewController.h>

@class ICDocCamDocumentInfoCollection, ICDocCamImageCache;

@interface DCActivityViewController : UIActivityViewController {

	BOOL _ignoreAttachmentsForCopyToPasteboard;
	ICDocCamDocumentInfoCollection* _documentInfoCollection;
	ICDocCamImageCache* _imageCache;

}

@property (nonatomic,retain) ICDocCamDocumentInfoCollection * documentInfoCollection;              //@synthesize documentInfoCollection=_documentInfoCollection - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                                      //@synthesize imageCache=_imageCache - In the implementation block
@property (assign,nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard;                            //@synthesize ignoreAttachmentsForCopyToPasteboard=_ignoreAttachmentsForCopyToPasteboard - In the implementation block
-(ICDocCamImageCache *)imageCache;
-(BOOL)_canShowWhileLocked;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(ICDocCamDocumentInfoCollection *)documentInfoCollection;
-(void)setDocumentInfoCollection:(ICDocCamDocumentInfoCollection *)arg1 ;
-(BOOL)inhibitPDFGenerationForActivityType:(id)arg1 ;
-(BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:(id)arg1 documentInfoCollection:(id)arg2 ;
-(BOOL)ignoreAttachmentsForCopyToPasteboard;
-(id)activityTypesThatInhibitPDFGeneration;
-(void)setIgnoreAttachmentsForCopyToPasteboard:(BOOL)arg1 ;
@end
