/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOSimpleTileRequesterSubclass
@optional
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1;
-(id)editionHeader;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1;
-(BOOL)allowsCookies;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;

@required
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1;
-(id)urlForTileKey:(const GEOTileKey*)arg1;

@end

