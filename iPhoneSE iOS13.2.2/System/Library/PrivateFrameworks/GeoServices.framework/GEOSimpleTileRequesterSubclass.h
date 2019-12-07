/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOSimpleTileRequesterSubclass
@optional
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1;
-(id)editionHeader;
-(BOOL)downloadsDataToDisk;
-(SCD_Struct_GE5*)kindForTileKey:(const GEOTileKey*)arg1;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1;
-(BOOL)allowsCookies;
-(void)finishedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2;
-(void)failedLoadingTileForKey:(GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1;
-(id)processTileData:(id)arg1 error:(id*)arg2;

@required
-(id)urlForTileKey:(const GEOTileKey*)arg1;

@end
