/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKURLSerializer : NSObject
+(id)stringForMapType:(unsigned long long)arg1 ;
+(id)stringForDirectionsType:(unsigned long long)arg1 ;
-(id)mapItemsFromUrl:(id)arg1 options:(id*)arg2 ;
-(id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 transportType:(unsigned long long)arg3 options:(id)arg4 ;
-(id)urlForOpeningMapItems:(id)arg1 options:(id)arg2 ;
@end
