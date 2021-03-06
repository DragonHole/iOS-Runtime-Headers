/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDResultDetourInfo, NSData;

@interface GEOMapItemDetourInfo : NSObject {

	GEOPDResultDetourInfo* _detourInfo;

}

@property (getter=_detourInfo,nonatomic,readonly) GEOPDResultDetourInfo * detourInfo;              //@synthesize detourInfo=_detourInfo - In the implementation block
@property (nonatomic,readonly) double detourTime; 
@property (nonatomic,readonly) double timeToPlace; 
@property (nonatomic,readonly) double detourDistance; 
@property (nonatomic,readonly) double distanceToPlace; 
@property (nonatomic,readonly) NSData * detourInfoAsData; 
-(id)initWithResultDetourInfo:(id)arg1 ;
-(id)_detourInfo;
-(double)detourTime;
-(double)timeToPlace;
-(double)detourDistance;
-(double)distanceToPlace;
-(NSData *)detourInfoAsData;
-(id)init;
@end

