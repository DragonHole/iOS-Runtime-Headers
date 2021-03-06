/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
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
-(void)setImageCache:(ICDocCamImageCache *)arg1 ;
-(id)initWithDocumentInfo:(id)arg1 imageCache:(id)arg2 ;
-(ICDocCamDocumentInfo *)documentInfo;
-(void)setDocumentInfo:(ICDocCamDocumentInfo *)arg1 ;
@end

