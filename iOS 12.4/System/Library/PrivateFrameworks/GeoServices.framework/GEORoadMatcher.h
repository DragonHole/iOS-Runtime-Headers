/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapFeatureAccess;

@interface GEORoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;
	BOOL _useRawLocations;

}

@property (assign,nonatomic) BOOL useRawLocations;              //@synthesize useRawLocations=_useRawLocations - In the implementation block
-(id)matchLocation:(id)arg1 forTransportType:(int)arg2 ;
-(void)setUseRawLocations:(BOOL)arg1 ;
-(id)_bestCandidateSegmentForLocation:(id)arg1 transportType:(int)arg2 ;
-(BOOL)useRawLocations;
-(id)init;
-(void)dealloc;
@end

