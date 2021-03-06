/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHResourceDownloadRequestOptions : NSObject {

	BOOL _treatLivePhotoAsStill;
	BOOL _dontAllowRAW;
	BOOL _downloadAllAssetResources;

}

@property (assign,nonatomic) BOOL treatLivePhotoAsStill;                  //@synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                           //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
@property (assign,nonatomic) BOOL downloadAllAssetResources;              //@synthesize downloadAllAssetResources=_downloadAllAssetResources - In the implementation block
-(id)description;
-(BOOL)treatLivePhotoAsStill;
-(void)setTreatLivePhotoAsStill:(BOOL)arg1 ;
-(BOOL)dontAllowRAW;
-(void)setDontAllowRAW:(BOOL)arg1 ;
-(BOOL)downloadAllAssetResources;
-(void)setDownloadAllAssetResources:(BOOL)arg1 ;
@end

