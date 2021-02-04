/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHAssetExportRequestOptions : NSObject {

	BOOL _treatLivePhotoAsStill;
	BOOL _flattenSlomoVideos;
	BOOL _dontAllowRAW;
	long long _variant;

}

@property (assign,nonatomic) long long variant;                       //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) BOOL treatLivePhotoAsStill;              //@synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill - In the implementation block
@property (assign,nonatomic) BOOL flattenSlomoVideos;                 //@synthesize flattenSlomoVideos=_flattenSlomoVideos - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                       //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
-(BOOL)treatLivePhotoAsStill;
-(BOOL)flattenSlomoVideos;
-(BOOL)dontAllowRAW;
-(void)setFlattenSlomoVideos:(BOOL)arg1 ;
-(long long)variant;
-(void)setVariant:(long long)arg1 ;
-(void)setTreatLivePhotoAsStill:(BOOL)arg1 ;
-(void)setDontAllowRAW:(BOOL)arg1 ;
-(id)description;
@end
