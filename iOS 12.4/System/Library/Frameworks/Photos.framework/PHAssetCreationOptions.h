/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHAssetCreationOptions : NSObject {

	BOOL _shouldDownloadOrCloudReReferenceMissingResources;
	BOOL _resetUserSpecificMetadata;
	BOOL _copyStillPhotoFromLivePhoto;
	/*^block*/id _destinationAssetAvailabilityHandler;
	SCD_Struct_PH1 _stillSourceTime;

}

@property (assign,nonatomic) BOOL shouldDownloadOrCloudReReferenceMissingResources;              //@synthesize shouldDownloadOrCloudReReferenceMissingResources=_shouldDownloadOrCloudReReferenceMissingResources - In the implementation block
@property (nonatomic,copy) id destinationAssetAvailabilityHandler;                               //@synthesize destinationAssetAvailabilityHandler=_destinationAssetAvailabilityHandler - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH1 stillSourceTime;                                     //@synthesize stillSourceTime=_stillSourceTime - In the implementation block
@property (assign,nonatomic) BOOL resetUserSpecificMetadata;                                     //@synthesize resetUserSpecificMetadata=_resetUserSpecificMetadata - In the implementation block
@property (assign,nonatomic) BOOL copyStillPhotoFromLivePhoto;                                   //@synthesize copyStillPhotoFromLivePhoto=_copyStillPhotoFromLivePhoto - In the implementation block
-(BOOL)shouldDownloadOrCloudReReferenceMissingResources;
-(id)destinationAssetAvailabilityHandler;
-(void)setDestinationAssetAvailabilityHandler:(id)arg1 ;
-(SCD_Struct_PH1)stillSourceTime;
-(BOOL)resetUserSpecificMetadata;
-(void)setResetUserSpecificMetadata:(BOOL)arg1 ;
-(BOOL)copyStillPhotoFromLivePhoto;
-(void)setShouldDownloadOrCloudReReferenceMissingResources:(BOOL)arg1 ;
-(void)setCopyStillPhotoFromLivePhoto:(BOOL)arg1 ;
-(void)setStillSourceTime:(SCD_Struct_PH1)arg1 ;
-(id)init;
@end

