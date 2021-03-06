/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICDocCamDocumentInfo, ICDocCamImageCache;

@interface DCMarkupActivityItem : NSObject {

	ICDocCamDocumentInfo* _documentInfo;
	ICDocCamImageCache* _imageCache;

}

@property (nonatomic,retain) ICDocCamDocumentInfo * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
@property (nonatomic,retain) ICDocCamImageCache * imageCache;                  //@synthesize imageCache=_imageCache - In the implementation block
-(ICDocCamImageCache *)imageCache;
-(ICDocCamDocumentInfo *)documentInfo;
-(void)setDocumentInfo:(ICDocCamDocumentInfo *)arg1 ;
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2 ;
@end

