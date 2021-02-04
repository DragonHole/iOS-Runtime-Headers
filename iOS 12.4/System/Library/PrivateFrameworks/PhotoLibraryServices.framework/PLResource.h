/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLResource <PLResourceIdentity>
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) id<PLResourceDataStore> dataStore; 
@property (nonatomic,readonly) long long dataStoreSubtype; 
@property (nonatomic,readonly) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) short localAvailability; 
@property (nonatomic,readonly) short localAvailabilityTarget; 
@property (nonatomic,readonly) short remoteAvailability; 
@property (nonatomic,readonly) short remoteAvailabilityTarget; 
@property (nonatomic,readonly) int qualitySortValue; 
@property (nonatomic,readonly) id<PLColorSpaceIdentity> colorSpaceID; 
@property (nonatomic,readonly) id<PLCodecIdentity> codecID; 
@required
-(unsigned)recipeID;
-(short)localAvailabilityTarget;
-(id<PLAssetID>)assetID;
-(unsigned long long)cplType;
-(id<PLColorSpaceIdentity>)colorSpaceID;
-(id<PLCodecIdentity>)codecID;
-(int)qualitySortValue;
-(short)remoteAvailability;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(short)localAvailability;
-(long long)orientedHeight;
-(BOOL)isDerivative;
-(long long)dataStoreSubtype;
-(short)remoteAvailabilityTarget;
-(BOOL)isPrimaryUTI;
-(BOOL)isDefaultOrientation;
-(long long)orientedWidth;
-(id<PLResourceDataStore>)dataStore;

@end
